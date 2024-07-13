
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        unordered_map<string, long long> popularity;
        unordered_map<string, pair<int, string>> topVideo;

        int n = creators.size();
        
        // Populate hash tables
        for (int i = 0; i < n; ++i) {
            string creator = creators[i];
            string id = ids[i];
            int view = views[i];
            
            // Update total views for creator
            popularity[creator] += view;
            
            // Update most viewed video for creator
            if (topVideo.find(creator) == topVideo.end() || view > topVideo[creator].first || 
                (view == topVideo[creator].first && id < topVideo[creator].second)) {
                topVideo[creator] = {view, id};
            }
        }
        
        // Find the maximum popularity
        long long maxPopularity = 0;
        for (const auto& p : popularity) {
            maxPopularity = max(maxPopularity, p.second);
        }
        
        // Collect creators with maximum popularity
        vector<vector<string>> result;
        for (const auto& p : popularity) {
            if (p.second == maxPopularity) {
                result.push_back({p.first, topVideo[p.first].second});
            }
        }
        
        return result;
    }
};
