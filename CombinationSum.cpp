#include<iostream>
using namespace std;
/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates
where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/
class Solution {
public:

void Helper(vector<int>&cand,int i,int k,vector<vector<int>>&ans,vector<int>&ds){
   if(k==0){
       ans.push_back(ds);
       return;
        }
    if(i==cand.size()){
     return;
    }
    if(cand[i]<=k){
        ds.push_back(cand[i]);
        Helper(cand,i,k-cand[i],ans,ds);
        ds.pop_back();
    }
    Helper(cand,i+1,k,ans,ds);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        Helper(candidates,0,target,ans,ds);
        return ans;
        
        
    }
};
 




int main(){

return 0;
}
