#include <stdio.h>
void towerofhanoi(int num,char frompeg,char topeg,char auxpeg){
    if(d==1){
        printf("\nMoving disc 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    towerofhanoi(num-1,frompeg,auxpeg,topeg);
    printf("\nMoving disc %d from peg %c to peg %c",num,frompeg,topeg);
    towerofhanoi(num-1,topeg,frompeg,auxpeg);
}

int main(){
    int d;
    scanf("%d",&d);
    towerofhanoi(d,'A','C','B');
    return 0;
}
