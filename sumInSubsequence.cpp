// Online C++ compiler to run C++ program online
//prblm stmnt: To find all the subsequence in an array a[1,2,1]  whose sum is 2
//Approach : Recursion (take/not take) TC-O(2^n+k)
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void sub(int a[],int i,int sum,int s,vector<int> ds,int n){
    
    if(i==n){
        if(s==sum){
            for(auto i:ds) cout <<i<<" ";
        }
        cout<<endl;
        return;
    }
    s+=a[i];
    ds.push_back(a[i]);
    sub(a,i+1,sum,s,ds,n);
    ds.pop_back();
    s-=a[i];
    sub(a,i+1,sum,s,ds,n);
    return;
    
}


int main() {
    
    int sum=2;
    int a[]={1,2,1};
    vector<int> ds;
    sub(a,0,sum,0,ds,3);

    return 0;
}