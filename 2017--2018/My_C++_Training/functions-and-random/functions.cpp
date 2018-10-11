#include <iostream>
using namespace std;

void sayWordsWithTheName(string username = "Captain"){
    cout << "Hello, " << username <<", nice to meet you." << endl;
    if(username == "Harshita" || username == "Melissa"){
        cout << username << ", why are you veiwing my code?" << endl;
    } else if(username == "Tommy"){
        cout << username << ", are you my brother? ";
        string relation;
        cin >> relation;
        if(relation == "yes" || relation == "Yes"){
            cout << "Wow, you are my brother, " << username << "." << endl;
        } else if(relation == "no" || relation == "No"){
            cout << "Oh, I guess you are a different " << username << "." << endl;
        } else {
            cout << "Invalid answer.  Reload and try again.";
        }
    } else if(username == "Emily"){
        string creator;
        cout << "Are you the creator of this code? ";
        cin >> creator;
        if(creator == "yes" || creator == "Yes"){
            cout << "Wow, you are THE " << username << " that made this!  I am star-struck!" << endl;
        } else if(creator == "no" || creator == "No"){
            cout << "Oh, I guess you are a different " << username << "." << endl;
        }else {
            cout << "Invalid answer.  Reload and try again.";
        }
    } else {
        cout << "I hope you liked this code!";
    }
}

int main(){
    
    string name;
    cout << "Hi, what is your name? ";
    cin >> name;
    sayWordsWithTheName(name);

}