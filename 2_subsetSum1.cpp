// Online C++ compiler to run C++ program online
// Prblm: Given a list (Arr) of N integers, print sums of all subset in it. Output should be printed in increasing order of sums  eg: i/p Arr={2,3} Output= 0,2,3,5


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Soln{
    
    public:void findSubset(int ind,vector<int> &subset,vector<int> &solution,int sum){
        
        if(ind==subset.size()){
            solution.push_back(sum);
            return;
        }

        findSubset(ind+1,subset,solution,sum+subset[ind]);
        findSubset(ind+1,subset,solution,sum);
        
    }
    
    
    public:vector<int> subsetSum(vector<int> &subset){
        vector<int> solution;
        findSubset(0,subset,solution,0);
        sort(solution.begin(),solution.end());
        return solution;
    }
    
};

int main() {
    Soln s1;
    vector<int> subset={3,2,1};
    for(auto i:s1.subsetSum(subset)){
        cout<<i<<" ";
    }

    return 0;
}