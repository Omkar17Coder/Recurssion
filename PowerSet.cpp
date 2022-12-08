
//#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>

void Helper(vector<int>&v,int i,vector<int>&Subset,vector<vector<int>>&ans){
    
    // Base Codition 
    
    
    if(i==v.size()){
        sort(Subset.begin(),Subset.end());
        
        ans.push_back(Subset);
       return;
        
    }
    
    // Include the ith character;
    Subset.push_back(v[i]);
    Helper(v,i+1,Subset,ans);
    
    // Remove the ith elements;
    Subset.pop_back();
    Helper(v,i+1,Subset,ans);
    
    
}
vector<vector<int>> pwset(vector<int>v)
{
   vector<vector<int>>ans;
    vector<int>subSet;
    Helper(v,0,subSet,ans);
    return ans;
    
}


int main(){


return 0;
}