class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
   int n=report.size();
   unordered_set<string>positive;
   unordered_set<string>negative;
   positive.insert( positive_feedback.begin(),  positive_feedback.end());
   negative.insert(negative_feedback.begin(), negative_feedback.end());


    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int id=student_id[i];
        mp[id]=0;
         stringstream ss(report[i]);
         string word;
         while(ss>> word)
         {
              if(positive.find(word)!=positive.end())
          {
            // means a positive feedback is present
            mp[id]+=3;
          }
          else if(negative.find(word)!=negative.end())
          {
            mp[id]-=1;
          }
         }
    }
    // mp contains [id,score] of each id
    // now we have to arrange ids in decreasing order of their score
vector<pair<int,int>>score_list;
for(const auto&entry:mp)
{
    score_list.emplace_back(entry.first,entry.second);
}
// entry.first= student_id
// entry.second=score 


auto comp=[](const pair<int,int>&a, const pair<int,int>&b)
{
    if(a.second!=b.second)
    {
  // not same score
  return a.second>b.second;
  // return jiska score jyaada hoga
    }
    else
    {
        return a.first<b.first;
    }
};

    sort(score_list.begin(), score_list.end(), comp);
    // using lambda function to sort the score_list which contains { student_id, score}
  
 vector<int>result;
  for(int i=0;i<k && i<score_list.size();++i)
  {
    result.push_back(score_list[i].first);
  }
  return result;
    }
};


