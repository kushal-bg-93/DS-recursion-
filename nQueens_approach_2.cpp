// Online C++ compiler to run C++ program online
//best approach
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Nqueen{
    
    public: void findNqueen(int col,vector<string> &board,vector<vector<string>> &ans,int n,int left[],int leftDown[],int leftUp[]){
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        
        for(int row=0;row<n;row++){
            if(!left[row] && !leftDown[row+col] && !leftUp[row-col+(n-1)]){
                // cout<<"inside check condition";
                board[row][col]='Q';
                left[row]=1;
                leftDown[row+col]=1;
                leftUp[row-col+(n-1)]=1;
                findNqueen(col+1,board,ans,n,left,leftDown,leftUp);
                board[row][col]='.';
                 left[row]=0;
                leftDown[row+col]=0;
                leftUp[row-col+(n-1)]=0;
            }
        }
    }
    
    public:
    vector<vector<string>> nqeen(int &n){
        vector<vector<string>> ans;
        vector<string> board(n);
        //diagnol configs
        int left[2*n-1]={0};
        int leftDown[2*n-1]={0};
        int leftUp[2*n-1]={0};
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        findNqueen(0,board,ans,n,left,leftDown,leftUp);
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