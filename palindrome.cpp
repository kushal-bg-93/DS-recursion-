// Online C++ compiler to run C++ program online

// prblm stmnt: palindrome functional approach with time complexity O(n/2) string : MADAM
// possible approach : 1) use for keep two pointers and check if they are equal till both pointers crosses
//2) use recursion keep two pointers
//3) use functional approach of recursion best approach with TC of (O(n/2))

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool pal(string &s,int i,int n){
    if(i>=n/2) return true;
    
    if(s[i]!=s[n-i-1]) return false;
    
    pal(s,i+1,n);
}

int main() {
    string s;
    cout<<"Enter the string ";
    cin>>s;
    cout<<pal(s,0,s.size());

    return 0;
}