#include <stdio.h>

int main(void){
    int x1, y1, r1, s1;
    int x2, y2, r2, s2;
    int xa, ya;
    int xb, yb;

    int score1 = 0;
    int score2 = 0;

    scanf("%d %d %d %d", &x1, &y1, &r1, &s1);
    scanf("%d %d %d %d", &x2, &y2, &r2, &s2);
    scanf("%d %d", &xa, &ya);
    scanf("%d %d", &xb, &yb);

    if((xa-x1)*(xa-x1) + (ya-y1)*(ya-y1) < r1 * r1){
        score1 = score1 + s1;
    }
    if((xa-x2)*(xa-x2) + (ya-y2)*(ya-y2) < r2 * r2){
        score1 = score1 + s2;
    }
    if((xb-x1)*(xb-x1) + (yb-y1)*(yb-y1) < r1 * r1){
        score2 = score2 + s1;
    }
    if((xb-x2)*(xb-x2) + (yb-y2)*(yb-y2) < r2 * r2){
        score2 = score2 + s2;
    }
    if(score1 > score2){
        printf("Player 1\n");
    }else if(score1 < score2){
        printf("Player 2\n");
    }else{
        printf("Draw\n");
    }  
    printf("%d %d" ,score1 ,score2);

    return 0;
}
