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

Card(Rank rank, Color color);
Rank m_rank;
Rank getRank() const;
void setRank(Rank);
Color m_color;
Color getColor() const;
void setColor(Color);
void DisplayCard() const;


};

class Deck
{
private:

public:

Deck( Card cards[52], Rank rank, Color color);
Card cards[52];
Card DealCard();
void DisplayDeck() const;

};