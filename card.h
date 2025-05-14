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