#include<iostream>
#include<windows.h>

using namespace std;
#define n 3

void printing(char board[n][n]){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<board[i][j];
			if(j < 2){
			cout<<" | ";
		    }
		}
		 if(i<2){
		cout<<endl;
		cout<<"-----------";
		}
		cout<<endl;
	    
	}
	
}

bool checking(char board[n][n],int r,int c,char ch){
	
	system("cls");
	board[r][c]=ch;
	printing(board);
	
	
	for(int i=0;i<n;i++){
		if(board[i][0] == ch && board[i][1] == ch && board[i][2] == ch){
			cout<<endl<<endl<<"Player "<<ch<<" Wins!"<<endl<<endl;
			return 1;
		}
		if(board[0][i] == ch && board[1][i] == ch && board[2][i] == ch){
			cout<<endl<<endl<<"Player "<<ch<<" Wins!"<<endl<<endl;
			return 1;
		}
    }
    
    if(board[0][0] == ch && board[1][1] == ch && board[2][2] == ch){
			cout<<endl<<endl<<"Player "<<ch<<" Wins!"<<endl<<endl;
			return 1;
	}
	if(board[0][2] == ch && board[1][1] == ch && board[2][0] == ch){
			cout<<endl<<endl<<"Player "<<ch<<" Wins!"<<endl<<endl;
			return 1;
	}
    
    return 0;
    
    
}




int main(){
	
	char board[n][n]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int row,col;
	
	printing(board);
	
	cout<<endl<<endl;
	
	for(int i=0;i<9;i++){
		
		if(!(i % 2)){
			cout<<"For PLayer X: Enter Row no(0-2) and Colum no(0-2) :"<<endl;
			cin>>row>>col;
			if(checking(board,row,col,'X')){
				break;
			}
	    }else{
	    	cout<<"For PLayer O: Enter Row no(0-2) and Colum no(0-2) :"<<endl;
			cin>>row>>col;
			if(checking(board,row,col,'O')){
				break;
			}	
		}
		
	}
	
}
