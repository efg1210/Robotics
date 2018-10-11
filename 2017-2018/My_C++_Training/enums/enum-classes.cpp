#include <iostream>
using namespace std;

//defining a color
//each value gets an integer value
enum class Color {
    RED,
    BLUE,
    GREEN,
    MAGENTA,
    HOT_DOG_RED,
    BUBBLE_GUM_PINK
};

enum class Monster {
    ORC,
    ZOMBIE,
    GHOST,
    MINDFLAYER,
    PHANTOM,
    DRAGON,
    VALG
};

int main() {
    Color myFavoriteColor = Color::BUBBLE_GUM_PINK;
    //cout << "myFavoriteColor: " << myFavoriteColor << endl;
    
    Monster VALG = Monster::VALG;
    
    //cannot compare a color and a monster
    if(myFavoriteColor == jeff){
        cout << "Colors and monsters can be equal" << endl;
    }else{
        cout << "Colors and monsters cannot be equal" << endl;
    }
    
    return 0;
}