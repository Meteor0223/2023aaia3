//(寫到一半)week07-2a.cpp LeedCode 1275. Find Winner on a Tic Tac Toe
// 讀二維陣列,得到i,j,再標示 board[i][j] = 1
// 1變2變1變2變1變2變1變2變1.... 因 1+2=3 => 3-1得2,3-2得1
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    bool myTeskWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true;
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true;
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true;
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true;
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true;
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true;
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true;
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};
        int now=1;//地1個下的人,1:"A",2:"B"
        for(auto move:moves){//用auto它會幫你寫好
            int i =move[0],j=move[1];
            board[i][j]=now;
            myPrintBoard(board);
            if(myTeskWin(board,now)){
                if(now==1)return "A";
                else return "B";
            }
            now=3-now;//1變2,2變1,1變2,2變1
        }
        if(moves.size()==9)return "Draw";
        else return "Pending";
    }
};