//(寫到一半)week07-1.cpp LeedCode 1275. Find Winner on a Tic Tac Toe
// 讀二維陣列,得到i,j,再標示 board[i][j] = 1
// 1變2變1變2變1變2變1變2變1.... 因 1+2=3 => 3-1得2,3-2得1
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j;j<3;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};
        //for(vector<int> move:moves){原本用2維陣列,取出1維陣列
        for(auto move:moves){//用auto它會幫你寫好
            int i =move[0],j=move[1];
            board[i][j]=1;
            myPrintBoard(board);
        }
        return "A";
    }
};