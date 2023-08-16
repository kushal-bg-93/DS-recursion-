// Online C++ compiler to run C++ program online

//Prblm Stmnt: find fibonnacci using multiple recursion
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    int last=fib(n-1);
    int slast=fib(n-2);
    return last+slast;
}

int main() {
    
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}