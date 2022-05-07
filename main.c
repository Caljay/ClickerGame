#include <stdio.h>
#include <time.h>

int coins = 0;
int main(void){

char inputChar;
printf("Welcome to Clicker Game\n");

while(1){

scanf("%c", &inputChar);


if(inputChar == 'a'){
coins++;
printf("Coins: %d\n", coins);

inputChar = 0;
}

}



getchar();
return 0;
}