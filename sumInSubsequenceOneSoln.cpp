// Online C++ compiler to run C++ program online
//prblm stmnt: To find one of the subsequence in an array a[1,2,1]  whose sum is 2
//Approach : Recursion (take/not take) TC-O(2^n+k)
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool sub(int a[],int i,int sum,int s,vector<int> ds,int n){
    
    if(i==n){
        if(s==sum){
            for(auto i:ds) cout <<i<<" ";
            return true;
        }
        cout<<endl;
        return false;
    }
    s+=a[i];
    ds.push_back(a[i]);
    if(sub(a,i+1,sum,s,ds,n)==true) return true;
    ds.pop_back();
    s-=a[i];
    if(sub(a,i+1,sum,s,ds,n)==true) return true;
    return false;
    
}


int main() {
    
    int sum=2;
    int a[]={1,2,1};
    vector<int> ds;
    sub(a,0,sum,0,ds,3);

    return 0;
}