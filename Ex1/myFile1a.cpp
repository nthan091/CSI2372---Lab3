
#include <iostream>
using namespace std; 

enum Colour {club, diamond, spades, heart};
enum Face {seven, eight, nine, ten, jack, queen, king, ace};

struct Card {
    Colour colour;
    Face face; 
};

int main()
{
    Card game[32]; //create a variable called game of type card

    //populate the game variable
    //each element is an object that has 2 properties: colour and face

    //cout << 

    //maybe not
    for (int i = 0; i < 5; i++) {
        for int(j = 0; j < 9; j++) {
            game[i * j] = Colour(i), Face(j);
            cout << "game: " << game[i * j] << endl; 
            //cout << endl; 
        } //closes for loop that counts the face
    }//closes for loop that counts the colour




}

//build a deck of 32 cards
//the game is represented by an array of 32 distinct elements
//each of the card type

//enum is a user defined data type where you can specify the set 
//values for a variable 
//the variable can only take on out of that set of values
