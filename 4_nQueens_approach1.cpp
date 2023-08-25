// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Nqueen{
    
    public:bool isSafe(vector<string> &board,int row,int col,int n){
        int duprow=row,dupcol=col;
        //not a best approach as each while loop will take O(n). Better approach here is to use of hash
        while(row>=0 && col>=0){
           if(board[row][col]=='Q') return false; 
                       col--;
        }
        row=duprow;
        col=dupcol;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
                        row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
                        row++;
            col--;
        }
        
        return true;
    }
    
    public: void findNqueen(int col,vector<string> &board,vector<vector<string>> &ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                findNqueen(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    
    public:
    vector<vector<string>> nqeen(int &n){
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        findNqueen(0,board,ans,n);
        cout<<"Number of possibilities "<<ans.size()<<endl<<endl;
        return ans;
    }
    
    
};

int main() {
    Nqueen n1;
    int n=8;
    // n1.nqeen(n);
    
    for(auto i:n1.nqeen(n)){
        for(auto j:i){
            // cout<<j;
            for(auto k:j){
                cout<<k<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
    }

    return 0;
}