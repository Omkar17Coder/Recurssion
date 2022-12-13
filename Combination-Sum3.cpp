class Solution {
public:

void Helper(vector<vector<int>>&ans,vector<int>&subSet,int n,int k,int i,int sumTillNow){

    // Base Conditions:


    if(subSet.size()==k){
        if(sumTillNow==n){
            ans.push_back(subSet);
            }
        return;
    }
   if(i>9){
       return;
   }
    if(sumTillNow>n){

        return;
    }
    if(subSet.size()>n){
        return;

    }


    // include the ith element.
    sumTillNow+=i;
    subSet.push_back(i);
    Helper(ans,subSet,n,k,i+1,sumTillNow);

    // backtrack;
    sumTillNow-=i;
    subSet.pop_back();

    // Dont include

    Helper(ans,subSet,n,k,i+1,sumTillNow);

}
    vector<vector<int>> combinationSum3(int k, int n) {
        // numbers from 1 to 9 are used.
        // Sum to n and k numbers;

        vector<vector<int>>ans;
        vector<int>Subset;
        int sum=0;
        Helper(ans,Subset,n,k,1,sum);
        return ans;
        
    }
};
