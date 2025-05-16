#include <iostream>

enum Color{
    clubs,
    diamonds,
    hearts,
    spades,
};

enum Rank{
    two, 
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

public:

Rank m_rank;
Color m_color;

Rank getRank() const;
void setRank(Rank);

Color getColor() const;
void setColor(Color);
void DisplayCard();
void PrintRank();
void PrintColor();

};

class Deck{
private:

Card cards[52];

Rank m_rank;
Rank getRank() const;
void setRank(Rank);

Color m_color;
Color getColor() const;
void setColor(Color);

public:
Deck();
void DisplayDeck();
void PrintDeck();

};