// Online C++ compiler to run C++ program online

//Prblm stmnt : To find the subsequences of the array [3,1,2] -> {3},{1},{2},{3,1},{3,2},{3,1,2},{1,2},{}
//defn : a subsequence is a collection of all the contigous/non contigous sequences 

// Possible approach 1) power set 
// 2) recursion

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void sub(int a[],int i,vector<int> ds,int n){
    if(i==n){
        for(auto item:ds){
            cout<<item<<" ";
        }
         if(ds.size()==0){
        cout<<"{}\n";
    }
        cout<<"\n";
        return;
    }
   
    ds.push_back(a[i]);
    sub(a,i+1,ds,n);
    ds.pop_back();
    sub(a,i+1,ds,n);
}

int main() {
    
    int n;
    cout<<"Enter n ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array \n";
    
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    
    vector<int> ds;
    
    sub(a,0,ds,n);

    return 0;
}