class Solution {
public:
     vector<int> findClosestElements(vector<int>& A, int k, int x) {
       int left=0,n=A.size(),right=A.size()-k; 
       vector<int>ans;
       if(n==0||n==1) return A;
    while(left<right){
        int mid=(left+right)/2;
        if(x-A[mid]>A[mid+k]-x){
            left=mid+1;
        }else{
            right=mid;
        }
        ans=vector(A.begin()+left,A.begin()+left+k);
    }
         return ans;
    }
};
