#pragma once
#include <iostream>

using namespace std;

// Class that represent a point in Board
class Coordinate
{
    private:
            int xVal, yVal;

    public:
        //Mainlly Constructors

        Coordinate()
        {
            xVal = 0;
            yVal = 0;
        }


        Coordinate(int x, int y)
        {
            xVal = x;
            yVal = y;
        }

        Coordinate(const Coordinate& p)
        {
            xVal = p.xVal;
            yVal = p.yVal;
        }

        //gets

        int getX() const
        {
            return xVal;
        }

        int getY() const
        {
            return yVal;
        }

};
