#include <stdio.h>
#include "Buildings.h"

int coins = 0;

void Gameloop(void){

Building* allBuildings = intialize();

char inputChar;

while(1){

//scanf("%c", &inputChar);
inputChar = getchar();

if(inputChar == 'a'){
    system("cls");
coins++;
printf("Coins: %d\n", coins);

inputChar = 0;
}





}



}
