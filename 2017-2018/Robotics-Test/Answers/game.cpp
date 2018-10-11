#include <iostream>
#include <cstdlib>
using namespace std;

enum class ItemType{
    HEALTH_POT,
    TORCH,
    ARROW,
    GEM
};

void assignRadomItems(ItemType items[], unsigned int arraySize){
    for(int i = 0; i < arraySize; i++){
        
        int randomNum = rand() % 4;
        
        
        if(randomNum == 0){
            items[i] = ItemType::HEALTH_POT;
            cout << "Health Pot" << endl;
        }else if(randomNum == 1){
            items[i] = ItemType::TORCH;
            cout << "Torch" << endl;
        }else if(randomNum == 2){
            items[i] = ItemType::ARROW;
            cout << "Arrow" << endl;
        }else if(randomNum == 3){
            items[i] = ItemType::GEM;
            cout << "Gem" << endl;
        }
            }
}

int main(){
    
    srand(1000);
    
    int size = 1000;
    ItemType items[size];
    
    assignRadomItems(items, size);
    
    return 0;
}