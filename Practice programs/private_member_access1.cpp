#include <iostream>

#include <cmath>

using namespace std;

class Coordinate {

    int x, y, z;

public:
    Coordinate(int _x, int _y, int _z = 0) : 
        x(_x), y(_y), z(_z) {    }
             double dist(Coordinate &c1, Coordinate &c2); // LINE-1
};

class TwoDCoordinate : public Coordinate {

public:

    TwoDCoordinate(int _x1,int _y1) : // LINE-2

        Coordinate(_x, _y, _z) { }        
};

class ThreeDCoordinate : public Coordinate {

public:

    ThreeDCoordinate(int x2,int y2,int z2) : // LINE-3

        Coordinate(_x, _y, _z) { } 
};
double dist(Coordinate &c1, Coordinate &c2) {
    return sqrt(pow((c1.x - c2.x), 2) + 
                pow((c1.y - c2.y), 2) + 
                pow((c1.z - c2.z), 2));
}

int main() {
    int x1, y1, x2, y2, z2;
    cin >> x1 >> y1 >> x2 >> y2 >> z2;

    TwoDCoordinate t1(x1, y1);
    ThreeDCoordinate t2(x2, y2, z2);

    cout << dist(t1, t2) << endl;

    return 0;
}
