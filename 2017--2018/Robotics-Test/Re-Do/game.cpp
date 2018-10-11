#include <iostream>
#include <cstdlib>
using namespace std;

enum Item{
    TORCHES,
    HEALTH_POTIONS,
    ARROWS
};

void randomAssignItems(Item items[], int size){
    
}

int main(){
    
    srand(1000);
    Item items[100];
    randomAssignItems(items, 100);
    
    printArray(items, 100);
    
    return 0;
}