#include "deck.h"
#include "card.h"

Deck::Deck()
{
    for (int i = 0; i < 52; i++)// for each card in the deck:
    {
        switch(i % 13)//set a Rank
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
        switch (i / 13)	 			// and a Color.
        {
        case 0:   cards[i].setColor(clubs);	 	break;
        case 1:   cards[i].setColor(diamonds);	break;
        case 2:   cards[i].setColor(hearts);		break;
        case 3:   cards[i].setColor(spades);		break;
        }
    }
}

Rank Deck::getRank() const
{ return m_rank; }

void Deck::setRank(Rank rank)
{
    m_rank = rank;
}

Color Deck::getColor() const
{ return m_color; }

void Deck::setColor(Color color)
{
    m_color = color;
}

void Deck::DisplayDeck()const
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

int main()
{
    Deck deck1{};
    deck1.
    return 0;
}