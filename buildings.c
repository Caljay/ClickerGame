 
typedef struct{

int coinsPer;
int costPer;
int amount;
char* name


} Building;

Building* intialize(void){
  
Building* allBuildings = malloc(sizeof(Building) * 2);

allBuildings[0].coinsPer = 5;
allBuildings[0].amount = 0;
allBuildings[0].costPer = 25;
allBuildings[0].name = "Worker";

allBuildings[1].coinsPer = 7;
allBuildings[1].amount = 0;
allBuildings[1].costPer = 50;
allBuildings[1].name = "Lawn Mower";


return allBuildings;
}