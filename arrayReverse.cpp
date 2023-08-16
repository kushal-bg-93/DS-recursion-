// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//prblm: a=[4,2,6,64,23] soln: a=[23,64,6,2,4] tc=O(n/2)
// approach 1: using for with two pointers
//2: using recursion with two pointers
//3: using recursion with single pointer (best approach) Time Complexity(O(n/2))


void rev(int i,int a[],int n){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    rev(i+1,a,n);
}

int main() {
    int n;
    cout<<"Enter n ";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rev(0,a,n);
    
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}