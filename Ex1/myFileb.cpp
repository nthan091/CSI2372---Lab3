
#include <iostream>
using namespace std;

enum Colour { club, diamond, spades, heart };
enum Face { seven, eight, nine, ten, jack, queen, king, ace };

struct Card {
    Colour colour;
    Face face;
}; //closes struct

typedef Card Hand[5]; 

bool testPair(const Hand& h) {

    cout << "testpair method: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "i face " << h[i].face << endl;
        for (int j = i + 1; j < 4; j++) {
            cout << "j face " << h[i + j].face << endl;
            if (h[i].face == h[i + j].face) {
                return true;
            }
        } //closes inner for loop
    } //closes outer for loop

    cout << "exiting testpair: " << endl;
    return false;


} //closes testPair method




int main()
{
    //Card game[32]; //create a variable called game of type card

    //populate the game variable


    struct Card c1 = { diamond, seven };
    struct Card c2 = { diamond, eight };
    struct Card c3 = { diamond, nine };
    struct Card c4 = { diamond, ten };
    struct Card c5 = { diamond, jack };
    struct Card c6 = { diamond, queen };
    struct Card c7 = { diamond, king };
    struct Card c8 = { diamond, ace };

    struct Card c9 = { club, seven };
    struct Card c10 = { club, eight };
    struct Card c11 = { club, nine };
    struct Card c12 = { club, ten };
    struct Card c13 = { club, jack };
    struct Card c14 = { club, queen };
    struct Card c15 = { club, king };
    struct Card c16 = { club, ace };

    struct Card c17 = { spades, seven };
    struct Card c18 = { spades, eight };
    struct Card c19 = { spades, nine };
    struct Card c20 = { spades, ten };
    struct Card c21 = { spades, jack };
    struct Card c22 = { spades, queen };
    struct Card c23 = { spades, king };
    struct Card c24 = { spades, ace };

    struct Card c25 = { heart, seven };
    struct Card c26 = { heart, eight };
    struct Card c27 = { heart, nine };
    struct Card c28 = { heart, ten };
    struct Card c29 = { heart, jack };
    struct Card c30 = { heart, queen };
    struct Card c31 = { heart, king };
    struct Card c32 = { heart, ace };


    Card game[32] = { c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32 };

    bool testPair(const Hand&);
    Hand myHand = { c1, c21, c3, c17, c5 };
    cout << "\nI have at least: " << testPair(myHand) << " pair" << endl;
    return 0;

} //closes main method



//build a deck of 32 cards
//the game is represented by an array of 32 distinct elements
//each of the card type

