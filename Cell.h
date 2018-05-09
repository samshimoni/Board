#include <iostream>
#include "IllegalCharException.cpp"
using namespace std;
class Cell
{
    private:
        char cell;

    public:

        Cell(char c);
        Cell();
        friend ostream& operator<<(ostream& os, const Cell& c);
        Cell& operator=(char c);

        operator char() const;

        char getChar();

};
