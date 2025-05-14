#include <iostream>
#include <string_view>

enum Color{
    clubs,
    diamonds,
    hearts,
    spades,
};

constexpr std::string_view getColorName(Color color)
{
    switch (color)
    {
    case clubs: return "clubs";
    case diamonds:   return "diamonds";
    case hearts:  return "hearts";
    case spades:  return "spades";
    default:    return "???";
    }
}

std::ostream& operator<<(std::ostream& out, Color color)
{
    return out << getColorName(color); // print our color's name to whatever output stream out
}

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

constexpr std::string_view getRankName(Rank rank)
{
    switch (rank)
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

std::ostream& operator<<(std::ostream& out, Rank rank)
{
    return out << getRankName(rank); // print our color's name to whatever output stream out
}

int main (){

for (int Color = 0; Color < 4; Color++) 
{
    for (int Name = 0; Name < 15; Name++) 
    {
        std::cout << Name << " " << Color << "\n";
    }            
}

    return 0;
}