#include <iostream>
#include <vector>
#include <string>

class Card{
private:
    enum Color{
        clubs,
        diamonds,
        hearts,
        spades,
    };

    Color colorName;

    enum Rank{
        two = 2, 
        three, 
        four, 
        five, 
        six,
        seven,
        eight,
        nine, 
        ten,
        Jack,
        Queen,
        King, 
        Ace,
    };
    
    Rank rankName;
    
public:

Color getColor(){
    return colorName;
}

void setcolor(Color col)
// set the suit of a card
{ colorName = col; }

Rank getRank(){
    return rankName;
}

void setRank(Rank r)

{ rankName = r; }

int cardConstructor( Color, Rank)
{

}


{
    switch (colorName)
    {
    case clubs:     return "clubs";
    case diamonds:  return "diamonds";
    case hearts:    return "hearts";
    case spades:    return "spades";
    default:        return "???";
    }
}


{
    switch (rankName)
    {
    case two: return "two";
    case three: return "three";
    case four: return "four";
    case five: return "five";
    case six: return "six";
    case seven: return "seven";
    case eight: return "eight";
    case nine: return "nine";
    case ten: return "ten";
    case Jack: return "Jack";
    case Queen: return "Queen";
    case King:   return "King";
    case Ace:  return "Ace";
    default:    return "???";
    }
}

};

class Deck{
private:

Card cards[52];
int remainingCard {};
int usedCard {};

        
public:

createNewDeck()
{
    for (  = 0; i < 4; i++) 
    {
        for (int j = 0; j < 15; j++) 
        {
           cards[j].setRank(i)
        }            
    }
}

};



int main (){

    
    return 0;
}