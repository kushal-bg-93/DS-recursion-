// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Soln{
    
    public: void findPermute(vector<int> &set,vector<int> &ds,vector<vector<int>> &ans,int freq[]){
        
        
        if(ds.size()==set.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<set.size();i++){
            if(!freq[i]){
                // cout<<"Entered";
                ds.push_back(set[i]);
                freq[i]=1;
                findPermute(set,ds,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
            
        }
    }
    
    
    
    public: vector<vector<int>> permutation(vector<int> &set){
        vector<int> ds;
        vector<vector<int>> ans;
        int freq[set.size()]={0};
        findPermute(set,ds,ans,freq);
        return ans;
        
    }
};

int main() {
    Soln s1;
    vector<int> set={1,2,3,4};
    for(auto i:s1.permutation(set)){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}