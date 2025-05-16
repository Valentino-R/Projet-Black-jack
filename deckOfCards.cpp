#include "deckOfCards.h"

void Card::DisplayCard()
{
    PrintRank();
    PrintColor();
    std::cout << '\n';
}

void Card::PrintRank()
{
    if (m_rank == two)
    {
        std::cout << "Two of ";
    }
    else if (m_rank == three)
    {
        std::cout << "Three of ";
    }
    else if (m_rank == four)
    {
        std::cout << "Four of ";
    }
    else if (m_rank == five)
    {
        std::cout << "Five of ";
    }
    else if (m_rank == six)
    {
        std::cout << "Six of ";
    }
    else if (m_rank == seven)
    {
        std::cout << "Seven of ";
    }
    else if (m_rank == eight)
    {
        std::cout << "Eight of ";
    }
    else if (m_rank == nine)
    {
        std::cout << "Nine of ";
    }
    else if (m_rank == ten)
    {
        std::cout << "Ten of ";
    }
    else if (m_rank == Jack)
    {
        std::cout << "Jack of ";
    }
    else if (m_rank == Queen)
    {
        std::cout << "Queen of ";
    }
    else if (m_rank == King)
    {
        std::cout << "King of ";
    }
    else
    {
        std::cout << "Ace of ";
    }    
}

void Card::PrintColor()
{
    if (m_color == clubs)
    {
        std::cout << "Clubs";
    }
    else if (m_color == diamonds)
    {
        std::cout << "Diamonds";
    }
    else if (m_color == hearts)
    {
        std::cout << "Hearts";
    }
    else
    {
        std::cout << "Spades";
    }
    
}

void Card::setRank(Rank rank)
{ m_rank = rank; }

Rank Card::getRank() const
{ return m_rank; }

void Card::setColor(Color color)
{ m_color = color; }

Color Card::getColor() const
{ return m_color; }

Deck::Deck()
{
    for (int col = (int)clubs; col <= (int)spades; col++)
    {
        for (int row = (int)two; row < (int)Ace; row++)
        {
            Card card;
            int index = (13 * col) + row - 1;
            cards[index] = card;
            card.m_rank = (Rank)row;
            card.m_color = (Color)col; 
        } 
    }
}

Rank Deck::getRank() const
{ return m_rank; }

void Deck::setRank(Rank rank)
{ m_rank = rank; }

Color Deck::getColor() const
{ return m_color; }

void Deck::setColor(Color color)
{ m_color = color; }

void Deck::DisplayDeck()
{
    for (int col = (int)clubs; col <= (int)spades; col++)
    {
        for (int row = (int)two; row <= (int)Ace; row++)
        {
            int index = (13 * col) + row - 1;
            cards[index].DisplayCard();
        }
    }
}

int main()
{
    Deck deck1;
    deck1.DisplayDeck();

    return 0;
}