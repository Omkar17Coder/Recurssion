/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 */
/*

My Note For the problem:
// Here  in this question, we do not want, that each subset should have unique number, but the numbers in the given array should be used only once, 
even if duplicates are present they should be used .
*/

Code:
class Solution {
public:
    void  Helper(vector<int>&nums,int target,int i,int sumTillNow,vector<int>&subSet,
vector<vector<int>>&ans,int n

)
{

  // Base Condition.

  if(sumTillNow==target){
      ans.push_back(subSet);
      return;

  }
  if(sumTillNow>target){
      return;

  }
  if(i==n){
      return;

  }


   // picking the ith element.
    subSet.push_back(nums[i]);
    sumTillNow+=nums[i];
   
    Helper(nums,target,i+1,sumTillNow,subSet,ans,n);
    //Backtracking
     subSet.pop_back();
    sumTillNow-=nums[i];
   

   // skipping the element.
   // To avoid Duplicate Combination.
   while(i+1<nums.size() && nums[i]==nums[i+1]){
       i++;
   }
   Helper(nums,target,i+1,sumTillNow,subSet ,ans,n);





}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        // unique combination of elemnts.
        // whose sum is equal to target.

        // No dulicate combinations.
        // problems 1.No repetitive, combination problem.
        // // The existing elements can be used,
        vector<vector<int>>ans;
        vector<int>Subset;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        Helper(nums,target,0,0,Subset,ans,n);
        return ans;
    }
};
