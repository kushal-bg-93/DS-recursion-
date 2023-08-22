// Online C++ compiler to run C++ program online
//Prblm Stmnt : Given an array of distinct integers candidates anda target integer target, return a list of all unique combinations of candidates where the chosen nubers sum to target. You may return the combinations in any order 
// input: candidates=[2,3,6,7] target=7
//Output: [[2,2,3],[7]]


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Soln{
    
    public:
    void findCombinations(int ind,vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int> ds){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        

        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            findCombinations(ind,candidates,target-candidates[ind],ans,ds);
            ds.pop_back();
        }
         findCombinations(ind+1,candidates,target,ans,ds);
    }
    
    
    
    public:
    vector<vector<int>> Combination(vector<int> &candidates,int target){
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0,candidates,target,ans,ds);
        return ans;
    }
};
int main() {
    Soln s1;
    vector<int> candidates={2,3,7};
    int target = 7;
    for(auto i:s1.Combination(candidates,target)){
        for(auto j:i){
            cout<<j;
        }
        cout<<endl;
    }
}