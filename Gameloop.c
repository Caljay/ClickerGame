#include "Gameloop.h"

#include <stdio.h>
#include <stdlib.h>

#include "Buildings.h"
typedef enum {FALSE, TRUE} bool;

int coins = 0;


void TakeTurn(void){
 system("cls");
coins++;
printf("Coins: %d\n", coins);

}


void BuildingMenu(Building* allBuildings){

printf("What would you like to buy?\n");
printf("$%d Workers - Q\n", allBuildings[0].costPer);
printf("$%d Lawn Mower - W \n", allBuildings[1].costPer);

char inputChar = -1;

printf("Choose One...\n");

while(1){

inputChar = getchar();

if(inputChar == 'q'){
    printf("Buying worker\n");
    break;
}

}


MainLoop(allBuildings);
}

void StartGame(void){
Building* allBuildings = intialize();
MainLoop(allBuildings);
}



void MainLoop(Building* allBuildings){

printf("Coins: %d\n", coins);

char* inputChar = malloc(sizeof(char) * 2);

bool buildMenuNext = FALSE;

while(1){


inputChar[0] = getchar();

//take turn
if(inputChar[0] == 'a'){
   TakeTurn();
   inputChar[0] = -1;
}

//building menu
if(inputChar[0] == 'b'){

buildMenuNext = TRUE;
break;

inputChar[0] = -1;
}


}
free(inputChar);

if(buildMenuNext == TRUE){
    BuildingMenu(allBuildings);
}


}


