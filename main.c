#include <stdio.h>
#include <stdlib.h>


#include "main2.h"

void welcome(void){
printf("Welcome to Clicker Game\n");
getchar();
system("cls\n");
printf("Coins: %d\n", 0);

}


int main(void){


welcome(); //welcomes the user

CallMe(); //bulk of the game




getchar();
return 0;
}