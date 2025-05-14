#include "card.h"

Card::Card(Rank rank, Color color)
{
    m_rank = rank;
    m_color = color;
}

void Card::DisplayCard()const
{

        switch (m_rank)
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
        
        switch (m_color)
        {
        case clubs:     std::cout << " of clubs";     break;
        case diamonds:  std::cout << " of diamonds";  break;
        case hearts:    std::cout << " of hearts";    break;
        case spades:    std::cout << " of spades";    break;
        default:        std::cout << "???";           break;
        }
        std::cout << '\n';
}

Rank Card::getRank() const
{ return m_rank; }

void Card::setRank(Rank rank)
{
    m_rank = rank;
}

Color Card::getColor() const
{ return m_color; }

void Card::setColor(Color color)
{
    m_color = color;
}

int main()
{
    Card card1 {two, spades};
    card1.DisplayCard();
    
    return 0;
}