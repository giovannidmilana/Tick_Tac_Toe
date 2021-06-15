#include <stdio.h>
#include <stdlib.h>

void printboard(char board[]);
char * move(char board[]);
char * checkwin(char board[]);
void turn_ctrl();
void check_move(int square, char board[]);
void win(char board, int s1, int s2, int s3);
char piece;

int main()
{
    piece = 'X';
    char board[] = "        |   |   \n      1 | 2 | 3 \n     -------------\n        |   |   \n      4 | 5 | 6 \n     -------------\n        |   |   \n      7 | 8 | 9 \n";
    printboard(board);
    move(board);
    //printboard(board);

    return 0;
}



//function definitions
void printboard(char board[]){
      //printf("\e[1;1H\e[2J");
      int i = 0;
      for(i=0; i<148; i++){
      //test[i] = board[i];
      printf("%c", board[i]);
      }
      checkwin(board);
      move(board);
}

char * move(char board[]){
    char square;
    printf("\nTake your turn: ");
    scanf(" %c", & square);
    switch(square){
    case '1':
        check_move(23, board);
        board[23] = piece;
        turn_ctrl();
        printboard(board);
    case '2':
        check_move(27, board);
        board[27] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    case '3':
        check_move(31, board);
        board[31] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    case '4':
        check_move(76, board);
        board[76] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    case '5':
        check_move(80, board);
        board[80] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    case '6':
        check_move(84, board);
        board[84] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    case '7':
        check_move(129, board);
        board[129] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    case '8':
        check_move(133, board);
        board[133] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    case '9':
        check_move(137, board);
        board[137] = piece;
        turn_ctrl();
        printboard(board);
        //return board;
    default :
        printf("\nInvalid Move:");
        move(board);
    }
}


char * checkwin(char board[]){
    if (board[23] == board[27] && board[27] == board[31]){
      board[23] = '!';
      board[27] = '!';
      board[31] = '!';
    }

    if (board[76] == board[80] && board[80] == board[84]){
      board[76] = '!';
      board[80] = '!';
      board[84] = '!';
    }

    if (board[129] == board[133] && board[133] == board[137]){
      board[129] = '!';
      board[133] = '!';
      board[137] = '!';
    }

    if (board[23] == board[76] && board[76] == board[129]){
      board[23] = '!';
      board[76] = '!';
      board[129] = '!';
    }

    if (board[27] == board[80] && board[80] == board[133]){
      board[27] = '!';
      board[80] = '!';
      board[133] = '!';
    }

    if (board[31] == board[84] && board[84] == board[137]){
      board[31] = '!';
      board[84] = '!';
      board[137] = '!';
    }

    if (board[23] == board[80] && board[80] == board[137]){
      board[23] = '!';
      board[80] = '!';
      board[137] = '!';
    }

    if (board[31] == board[80] && board[80] == board[129]){
      board[31] = '!';
      board[80] = '!';
      board[129] = '!';
    }
    return board;
}


void turn_ctrl(){
    if (piece == 'X'){
      piece = 'O';
    }else{
      piece = 'X';
    }

}

void check_move(int square, char board[]){
    if (board[square] == 'X' || board[square] == 'O'){
      printf("Move already taken try again");
      move(board);
    }
}

