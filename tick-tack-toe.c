#include <stdio.h>

char grid[3][3] = {
        {32,32,32},
        {32,32,32},
        {32,32,32},
};

void print_grid(){
        printf("┌───┬───┬───┐\n");
        printf("│ %c │ %c │ %c │\n",grid[0][0], grid[0][1], grid[0][2]);
        printf("├───┼───┼───┤\n");
        printf("│ %c │ %c │ %c │\n",grid[1][0], grid[1][1], grid[1][2]);
        printf("├───┼───┼───┤\n");
        printf("│ %c │ %c │ %c │\n",grid[2][0], grid[2][1], grid[2][2]);
        printf("└───┴───┴───┘\n");
}

int win_check(char p){
        if (grid[0][0]==p && grid[0][1]==p && grid[0][2]==p) return 1;
        if (grid[1][0]==p && grid[1][1]==p && grid[1][2]==p) return 1;
        if (grid[2][0]==p && grid[2][1]==p && grid[2][2]==p) return 1;
        if (grid[0][0]==p && grid[1][0]==p && grid[2][0]==p) return 1;
        if (grid[0][1]==p && grid[1][1]==p && grid[2][1]==p) return 1;
        if (grid[0][2]==p && grid[1][2]==p && grid[2][2]==p) return 1;
        if (grid[0][0]==p && grid[1][1]==p && grid[2][2]==p) return 1;
        if (grid[2][0]==p && grid[1][1]==p && grid[0][2]==p) return 1;
        return 0;
}
int main(){
        char n;
        start:
        for (int i=0; i < 9; i++) grid[i/3][i%3] = '1'+i;
        print_grid();
        //char plyr = 'X'
        for (int i=0; i < 9; i++){
                if (i%2==0){
                        printf("Player 1 enter number:");
                        scanf("%i", &n);
                        grid[(n-1)/3][(n-1)%3] = 'X';
                } else{
                        printf("Player 2 enter number:");
                        scanf("%i", &n);
                        grid[(n-1)/3][(n-1)%3] = 'O';
                }
                printf("\033[8A");
                fflush(stdout);
                print_grid();
                if (win_check(88 - (i%2)*9)){
                        printf("\nPlayer %i wins\n", 1+(i%2));
                        break;
                }
        }
        return 0;
}