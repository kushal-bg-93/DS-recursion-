//Prblm Stmnt: Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
//Each number in candidates may only be used once in the combination.
//Note : The solution set must not contain duplicte combinations

// Input: candidates=[1,1,2,2] target=4
//Output [[1,1,2],[2,2]]

// Online C++ compiler to run C++ program online

//Time complexity : O(2n*k),   Space complexity : O(k*x)
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Soln{
    
    public:
    void findCombination(int ind,vector<int> &candidates,int target,vector<int> ds,vector<vector<int>> &ans){
        // cout<<"This is target "<<target<<endl;
        
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        
        
        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]>target) break;
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            ds.push_back(candidates[i]);
            // cout<<"This is candidates "<<candidates[i]<<endl;
            findCombination(i+1,candidates,target-candidates[i],ds,ans);
            ds.pop_back();
        }
    }
    
    
    public:
    vector<vector<int>> combinations2(vector<int> &candidates,int target){
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        findCombination(0,candidates,target,ds,ans);
        return ans;
    }
};

int main() {
    int target=4;
    vector<int> candidates={1,1,2,2};
    Soln s1;
    vector<vector<int>> result=s1.combinations2(candidates,target);
    // cout<<"Size is "<<result.size();
    for(auto i:s1.combinations2(candidates,target)){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}