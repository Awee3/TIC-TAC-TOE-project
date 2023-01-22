#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

char matrix[10]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
    char mark;
    int c;
    int player = 1,i,input;
    c = choose();
    if(c == 0){
       do{
        board();
        if(player % 2 ){
            player = 1;
        }
        else {
            player = 2;
        }
        printf("\tPlayer %d turn : ",player);
        scanf("%d",&input);
        mark = (player == 1)? 'X':'O';
        if (input == 1 && matrix[1]== '1' ){
            matrix[1] = mark;
        }
        else if (input == 2 && matrix[2] == '2'){
            matrix[2] = mark;
        }
        else if (input == 3 && matrix[3] == '3'){
            matrix[3] = mark;
        }
        else if (input == 4 && matrix[4] == '4'){
            matrix[4] = mark;
        }
        else if (input == 5 && matrix[5] == '5'){
            matrix[5] = mark;
        }
        else if (input == 6 && matrix[6] == '6'){
            matrix[6] = mark;
        }
        else if (input == 7 && matrix[7] == '7'){
            matrix[7] = mark;
        }
        else if (input == 8 && matrix[8] == '8'){
            matrix[8] = mark;
        }
        else if (input == 9 && matrix[9] == '9'){
            matrix[9] = mark;
        }
        else {
            printf("\n\t--- SALAH WOI ! ---\n");
            printf("Press Any key to Continue\n");
            player--;
            getch();
        }
        i = checkWinner();
        player++;
        }while(i == -1);

        board();
        if (i == 1){
        printf("\tPlayer %d WON!",--player);
        }
        else {
        printf("\tDRAW");
        }
        getch();
        return 0;
    }
    else {
    botMove();
    }
}
int checkWinner()
{
    if (matrix[1] == matrix[2] && matrix[2] == matrix[3]){
        return 1;
    }
    else if (matrix[4] == matrix[5] && matrix[5] == matrix[6]){
        return 1;
    }
    else if (matrix[7] == matrix[8] && matrix[8] == matrix[9]){
        return 1;
    }
    else if (matrix[1] == matrix[4] && matrix[4] == matrix[7]){
        return 1;
    }
    else if (matrix[2] == matrix[5] && matrix[5] == matrix[8]){
        return 1;
    }
    else if (matrix[3] == matrix[6] && matrix[6] == matrix[9]){
        return 1;
    }
    else if (matrix[1] == matrix[5] && matrix[5] == matrix[9]){
        return 1;
    }
    else if (matrix[3] == matrix[5] && matrix[5] == matrix[7]){
        return 1;
    }
    else if (matrix[1] !='1' && matrix[2] !='2' && matrix[3] !='3' && matrix[4] !='4' && matrix[5] !='5' && matrix[6] !='6' && matrix[7] !='7' && matrix[8] !='8' && matrix[9] !='9'){
        return 0;
    }
    else{
        return -1;
    }
}
void board()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t   |   |   \n");
    printf("\t\t %c | %c | %c \n",matrix[1],matrix[2],matrix[3]);
    printf("\t\t___|___|___\n");
    printf("\t\t   |   |   \n");
    printf("\t\t %c | %c | %c \n",matrix[4],matrix[5],matrix[6]);
    printf("\t\t___|___|___\n");
    printf("\t\t   |   |   \n");
    printf("\t\t %c | %c | %c \n",matrix[7],matrix[8],matrix[9]);
    printf("\t\t   |   |   \n");
    printf("\n\n\n");
}
int choose()
{
    int p;
    printf("\n\tketik 1 untuk lawan player, ketik 2 untuk lawan bot : ");
    scanf("%d",&p);
    if(p == 1){
        return 0;
    }
    else{
        return 1;
    }
}
void botMove()
{
    int number,bot,w;
    char mark;
    int player = 1,i,input;
    int upper = 9, lower = 1;
        do{
            board();
            if(player % 2 ){
                player = 1;
            }
            else {
                player = 2;
            }
            coba:
            printf("\tPlayer  turn : ");
            scanf("%d",&input);
            mark = 'X';
            if (input == 1  && matrix[1]== '1' ){
                matrix[1] = mark;
            }
            else if (input == 2  && matrix[2] == '2'){
                matrix[2] = mark;
            }
            else if (input == 3  && matrix[3] == '3'){
                matrix[3] = mark;
            }
            else if (input == 4  && matrix[4] == '4'){
                matrix[4] = mark;
            }
            else if (input == 5  && matrix[5] == '5'){
                matrix[5] = mark;
            }
            else if (input == 6  && matrix[6] == '6'){
                matrix[6] = mark;
            }
            else if (input == 7  && matrix[7] == '7'){
                matrix[7] = mark;
            }
            else if (input == 8  && matrix[8] == '8'){
                matrix[8] = mark;
            }
            else if (input == 9  && matrix[9] == '9'){
                matrix[9] = mark;
            }
            else {
                printf("\n\t--- SALAH WOI ! ---\n");
                getch();
                goto coba;
            }
            i = checkWinner();
            if(i == 1){
                goto pemain;
            }
            nyoba:
            srand(time(NULL));
            number = (rand()%(upper-lower))+lower;
            printf("\tBot turn     : %d",number);
            mark = 'O';
            if (number == 1  && matrix[1]== '1' ){
                matrix[1] = mark;
            }
            else if (number == 2  && matrix[2] == '2'){
                matrix[2] = mark;
            }
            else if (number == 3  && matrix[3] == '3'){
                matrix[3] = mark;
            }
            else if (number == 4  && matrix[4] == '4'){
                matrix[4] = mark;
            }
            else if (number == 5  && matrix[5] == '5'){
                matrix[5] = mark;
            }
            else if (number == 6  && matrix[6] == '6'){
                matrix[6] = mark;
            }
            else if (number == 7  && matrix[7] == '7'){
                matrix[7] = mark;
            }
            else if (number == 8  && matrix[8] == '8'){
                matrix[8] = mark;
            }
            else if (number == 9  && matrix[9] == '9'){
                matrix[9] = mark;
            }
            else {
                printf("\n\t--- SALAH WOI ! ---\n");
                printf("Press any key to continue");
                getch();
                goto nyoba;
            }
            w = checkWinner();
            if(w == 1){
                goto robot;
            }
            }
        while(i == -1 && w == -1);
        pemain:
        robot:
        board();
        if(i == 1){
            printf("\tPLAYER WON !");
        }
        else if(w == 1){
            printf("\tBOT WON !");
        }
    getch();
    return 0;
}
