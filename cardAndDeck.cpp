#include <iostream>
#include <vector>
#include <string>

enum Color{
    clubs,
    diamonds,
    hearts,
    spades,
};

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
class Card{
private:
    /*enum Color{
        clubs,
        diamonds,
        hearts,
        spades,
    };*/

    Color colorName;

    /*enum Rank{
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
    };*/
    
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

void Display()
{
    switch (rankName)
    {
    case two:   std::cout <<    "two";      break;
    case three: std::cout <<    "three";    break;
    case four:  std::cout <<    "four";     break;
    case five:  std::cout <<    "five";     break;
    case six:   std::cout <<    "six";      break;
    case seven: std::cout <<    "seven";    break;
    case eight: std::cout <<    "eight";    break;
    case nine:  std::cout <<    "nine";     break;
    case ten:   std::cout <<    "ten";      break;
    case Jack:  std::cout <<    "Jack";     break;
    case Queen: std::cout <<    "Queen";    break;
    case King:  std::cout <<    "King";     break;
    case Ace:   std::cout <<    "Ace";      break;
    default:    std::cout <<    "???";      break;
    } 
    
    switch (colorName)
    {
    case clubs:     std::cout << "clubs";     break;
    case diamonds:  std::cout << "diamonds";  break;
    case hearts:    std::cout << "hearts";    break;
    case spades:    std::cout << "spades";    break;
    default:        std::cout << "???";       break;
    }

}
};

class Deck{
private:

Card cards[52];
int remainingCard {};
int usedCard {};

        
public:

int createNewDeck()
{
    for (int i = 0; i < 52; i++)			// for each card in the deck:
    {
        switch((i % 13) + 2)
        {
            case 0:   cards[i].setRank(two);	break;
            case 1:   cards[i].setRank(three);	break;
            case 2:   cards[i].setRank(four);	break;
            case 3:   cards[i].setRank(five);	break;
            case 4:   cards[i].setRank(six);	break;
            case 5:   cards[i].setRank(seven);	break;
            case 6:   cards[i].setRank(eight);	break;
            case 7:   cards[i].setRank(nine);	break;
            case 8:   cards[i].setRank(ten);	break;
            case 9:   cards[i].setRank(Jack);	break;
            case 10:  cards[i].setRank(Queen);  break;
            case 11:  cards[i].setRank(King);	break;
            case 13:  cards[i].setRank(Ace);	break;
        }
        switch (i / 13)	 			// and a suit.
        {
        case 0:   cards[i].setcolor(clubs);	 	break;
        case 1:   cards[i].setcolor(diamonds);	break;
        case 2:   cards[i].setcolor(hearts);		break;
        case 3:   cards[i].setcolor(spades);		break;
        }
    }
}
};

int main (){

    return 0;
}