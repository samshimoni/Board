#include <string>
#include "Coordinate.h"
using namespace std;

class IllegalCoordinateException {

private:
    const Coordinate& c;

public:

   IllegalCoordinateException(const Coordinate& c): c(c){ }

    string theCoordinate() const
    {
        string s="";
        s+=to_string(c.getX());
        s+=", ";
        s+=to_string(c.getY());
       return s;
    }

};
