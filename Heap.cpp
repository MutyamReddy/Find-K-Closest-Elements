class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
       int n=a.size();
        vector<int>ans;
        priority_queue<pair<int,int>>maxh;
        for(int i=0;i<n;i++){
            maxh.push({abs(x-a[i]),a[i]});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        for(int i=0;i<k;i++){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};`
