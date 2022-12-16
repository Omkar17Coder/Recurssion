/*Given a 2d matrix of characters and string, Check if the word exits in the matrix.

if number of nodes=k
Height of Tree -> The Recurssion Stack.(Internal Stack)=4k
TimeComplexity:m*n*4*k
SpaceComplexity:k
 Where n.m are the rows and columns.
 
*/


#include <bits/stdc++.h> 
bool Helper(vector<vector<char>>&board,string& word,int i,int j,int row,int col,int k){
    
    if(k==word.size()){
        return true;
    }
    if(i<0 || j<0 || i==row || j==col  || board[i][j]!=word[k]){
        return false;
    }
    char ch=board[i][j];
    board[i][j]='#';
    bool op1=Helper(board,word,i+1,j,row,col,k+1);
     bool op2=Helper(board,word,i-1,j,row,col,k+1);
     bool op3=Helper(board,word,i,j+1,row,col,k+1);
     bool op4=Helper(board,word,i,j-1,row,col,k+1);
    board[i][j]=ch;
    
    return(op1 || op2 || op3 || op4);
    
}
bool present(vector<vector<char>> &board, string word, int n, int m) 
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(Helper(board,word,i,j,n,m,0)){
        
               return true;
             }
        }
    }
   return false;
 
}
