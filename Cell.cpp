#include "Cell.h"

Cell::Cell(char c)
{
    if(c=='X'||c=='O'||c=='.')
        cell=c;
    else
        throw IllegalCharException(c);
}

Cell::Cell()
{
    cell='.';
}

ostream& operator<<(ostream& os, const Cell& c)
{
    os<<c.cell;
    return os;

}

char Cell::getChar()
{
    return cell;
}

Cell::operator char() const
{
    return cell;
}

Cell& Cell::operator=(char c)
{
    if(c=='O'||c=='X'||c=='.')
        cell = c;
    else
        throw IllegalCharException(c);
}
