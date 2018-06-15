//This game was made for two players

#include <stdio.h>
#include <stdlib.h>

void game();
void createGrid(char t1, char t2, char t3, char t4, char t5, char t6, char t7, char t8, char t9);
struct Tiles Userinput(char t1, char t2, char t3, char t4, char t5, char t6, char t7, char t8, char t9, char character);
int checkWinner(char t1, char t2, char t3, char t4, char t5, char t6, char t7, char t8, char t9);

struct Tiles {
    char t1;
    char t2;
    char t3;
    char t4;
    char t5;
    char t6;
    char t7;
    char t8;
    char t9;
};

int main()
{
    printf("-----------------------------\nPress any key to start\n-----------------------------\n");
    getch();

    game();

    return 0;
}

void game(){
    int i;
    char character;
    int winner;
    struct Tiles tile;

    while(1){

    system("cls");

    winner = -1;
    // Reseting board
    tile.t1  = ' ';
    tile.t2  = ' ';
    tile.t3  = ' ';
    tile.t4  = ' ';
    tile.t5  = ' ';
    tile.t6  = ' ';
    tile.t7  = ' ';
    tile.t8  = ' ';
    tile.t9  = ' ';
    for(i = 0; i < 9; i++){
        //switch between x's and o's turn
        if(i % 2 == 0){
            character = 'x';
        }else{
            character = 'o';
        }
        system("cls");
        createGrid(tile.t1, tile.t2, tile.t3, tile.t4, tile.t5, tile.t6, tile.t7, tile.t8, tile.t9);
        printf("%c's turn\n", character);
        tile = Userinput(tile.t1, tile.t2, tile.t3, tile.t4, tile.t5, tile.t6, tile.t7, tile.t8, tile.t9, character);
        winner = checkWinner(tile.t1, tile.t2, tile.t3, tile.t4, tile.t5, tile.t6, tile.t7, tile.t8, tile.t9);

        if(winner == 1){
            system("cls");
            createGrid(tile.t1, tile.t2, tile.t3, tile.t4, tile.t5, tile.t6, tile.t7, tile.t8, tile.t9);
            printf("\n-----x wins!-----\n");
            break;
        }else if(winner == 2){
            system("cls");
            createGrid(tile.t1, tile.t2, tile.t3, tile.t4, tile.t5, tile.t6, tile.t7, tile.t8, tile.t9);
            printf("\n-----o wins!-----\n");
            break;
        }
    }
    if(winner == 0){
        printf("\n-----Tie!-----\n");
    }
    printf("Press 'r' to play again or press any key to quit\n");
    if(getch() != 'r'){
        exit(0);
    }

    }
}

void createGrid(char t1, char t2, char t3, char t4, char t5, char t6, char t7, char t8, char t9){
    printf("[1][2][3]\n[4][5][6]\n[7][8][9]\n");
    printf("\nTo make a move, press the key that corresponds to the tile on the grid.\n");
    printf("\n[%c][%c][%c]\n[%c][%c][%c]\n[%c][%c][%c]\n", t1, t2, t3, t4, t5, t6, t7, t8, t9);
}

struct Tiles Userinput(char t1, char t2, char t3, char t4, char t5, char t6, char t7, char t8, char t9, char character){
    struct Tiles tile;
    tile.t1  = t1;
    tile.t2  = t2;
    tile.t3  = t3;
    tile.t4  = t4;
    tile.t5  = t5;
    tile.t6  = t6;
    tile.t7  = t7;
    tile.t8  = t8;
    tile.t9  = t9;
    char option = getch();
    if(option == '1'){
        if(tile.t1 == ' '){
            tile.t1 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '2'){
        if(tile.t2 == ' '){
            tile.t2 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '3'){
        if(tile.t3 == ' '){
            tile.t3 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '4'){
        if(tile.t4 == ' '){
            tile.t4 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '5'){
        if(tile.t5 == ' '){
            tile.t5 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '6'){
        if(tile.t6 == ' '){
            tile.t6 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '7'){
        if(tile.t7 == ' '){
            tile.t7 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '8'){
        if(tile.t8 == ' '){
            tile.t8 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else if(option == '9'){
        if(tile.t9 == ' '){
            tile.t9 = character;
        }else{
            printf("Error: Tile used\n");
            exit(1);
        }
    }else{
        printf("Error: Bad character\n");
            exit(1);
    }
    return tile;
}

int checkWinner(char t1, char t2, char t3, char t4, char t5, char t6, char t7, char t8, char t9){
    if(t1 == 'x' && t2 == 'x' && t3 == 'x'){
        return 1;
    }else if(t4 == 'x' && t5 == 'x' && t6 == 'x'){
        return 1;
    }else if(t7 == 'x' && t8 == 'x' && t9 == 'x'){
        return 1;
    }else if(t1 == 'x' && t4 == 'x' && t7 == 'x'){
        return 1;
    }else if(t2 == 'x' && t5 == 'x' && t8 == 'x'){
        return 1;
    }else if(t3 == 'x' && t6 == 'x' && t9 == 'x'){
        return 1;
    }else if(t1 == 'x' && t5 == 'x' && t9 == 'x'){
        return 1;
    }else if(t3 == 'x' && t5 == 'x' && t7 == 'x'){
        return 1;
    }else if(t1 == 'o' && t2 == 'o' && t3 == 'o'){
        return 2;
    }else if(t4 == 'o' && t5 == 'o' && t6 == 'o'){
        return 2;
    }else if(t7 == 'o' && t8 == 'o' && t9 == 'o'){
        return 2;
    }else if(t1 == 'o' && t4 == 'o' && t7 == 'o'){
        return 2;
    }else if(t2 == 'o' && t5 == 'o' && t8 == 'o'){
        return 2;
    }else if(t3 == 'o' && t6 == 'o' && t9 == 'o'){
        return 2;
    }else if(t1 == 'o' && t5 == 'o' && t9 == 'o'){
        return 2;
    }else if(t3 == 'o' && t5 == 'o' && t7 == 'o'){
        return 2;
    }else{
        return 0;
    }
}
