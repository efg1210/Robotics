#include <iostream>
using namespace std;

//defining a color
enum Color {
    RED,
    BLUE,
    GREEN,
    MAGENTA,
    HOT_DOG_RED,
    BUBBLE_GUM_PINK
};

enum Monster {
    ORC,
    ZOMBIE,
    GHOST,
    MINDFLAYER ,
    PHANTOM,
    DRAGON,
    VALG,
};

int main() {
    Color myFavoriteColor = BUBBLE_GUM_PINK;
    
    Monster inToG = Monster::VALG;
    
    cout << "myFavoriteColor: " << inToG << endl;
    
    return 0;
}