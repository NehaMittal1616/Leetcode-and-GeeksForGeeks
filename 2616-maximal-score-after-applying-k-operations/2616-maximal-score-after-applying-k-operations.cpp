class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size();
        if(k==0) return 0;
        // always optimal to choose the largest element in the array 
        // so we sort the array 
       //  sort(nums.begin(), nums.end());
    // or we can use a max heap priority queue to get the max element each time 
    // in max heap the top element is always maximum 
    // so using max heap and extracting maximum element each time (top element )-> TC= 0(logN)
    // and inserting ceil(nums[i]/3) each time
    priority_queue<int>maxheap;
    for(int i=0;i<n;i++)
    {
        maxheap.push(nums[i]);
    }   
        while(k>0 && !maxheap.empty())
        {
           int maxelement=maxheap.top();
           maxheap.pop();
           ans+=maxelement;
           k--;
           maxheap.push(ceil((double)maxelement/3));
           
        }
        return ans;
    }
};