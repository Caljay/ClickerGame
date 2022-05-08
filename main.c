#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Gameloop.h"

void welcome(void){
    system("cls\n");
printf("Welcome to Clicker Game\n");


}


int main(void){


welcome(); //welcomes the user

StartGame();

getchar();
return 0;
}