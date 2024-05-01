class Solution {
public:
  bool backtrack(vector<vector<char>>& board,string &word,int i,int j,int &m,int &n,int &index, vector<vector<int>>&v){
       if(index==word.length()){
            return true;
        }

        //down
        if(i+1<m) {
            if(board[i+1][j]==word[index] && v[i+1][j]==0){
            v[i+1][j]=1;
            index++;
            i=i+1;
           bool ans=backtrack(board,word,i,j,m,n,index,v);
           if(ans){
              return true;
           }else{
            v[i][j]=0;
            index--;
            i--;
           }
        }
    }
        //right
        if(j+1<n) {
            if(board[i][j+1]==word[index] && v[i][j+1]==0){
            v[i][j+1]=1;
            index++;
            j=j+1;
            bool ans=backtrack(board,word,i,j,m,n,index,v);
           if(ans){
              return true;
           }else{
            v[i][j]=0;
            index--;
            j--;
           }
        }
  }

        //up
    if(i-1>=0){
     if(board[i-1][j]==word[index] && v[i-1][j]==0){
        v[i-1][j]=1;
        index++;
        i=i-1;
        bool ans=backtrack(board,word,i,j,m,n,index,v);
           if(ans){
              return true;
           }else{
            v[i][j]=0;
            index--;
            i++;
           }
    }
    }
        //left
    if(j-1>=0){
    if(board[i][j-1]==word[index] && v[i][j-1]==0){
        v[i][j-1]=1;
        index++;
        j=j-1;
      bool ans=backtrack(board,word,i,j,m,n,index,v);
           if(ans){
              return true;
           }else{
            v[i][j]=0;
            index--;
            j++;
           }
    }
}
return false;
 }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
       int index=0;
    
       vector<vector<int>> v(m,vector<int>(n,0)); 
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(board[i][j]==word[index]){
            index++;
            v[i][j]=1;
            //function backtrack if true then return true else move until last element
            bool answer=backtrack(board,word,i,j,m,n,index,v);
            if(answer){
            
                return true;
            }
            index--;
            v[i][j]=0;
          }
        }
       }
return false;
    }
};