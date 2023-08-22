// Online C++ compiler to run C++ program online
//prblm stmnt: To find count of subsequences in an array a[1,2,1]  whose sum is 2
//Approach : Recursion (take/not take) TC-O(2^n)
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int sub(int a[],int i,int sum,int s,int n){
    
    if(i==n){
        if(s==sum){
            return 1;
        }
        return 0;
    }
    s+=a[i];
    int l=sub(a,i+1,sum,s,n);
    s-=a[i];
    int r=sub(a,i+1,sum,s,n);
    return l+r;
    
}


int main() {
    
    int sum=2;
    int a[]={1,2,1};
    cout<<sub(a,0,sum,0,3);

    return 0;
}