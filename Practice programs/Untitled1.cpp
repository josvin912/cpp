#include <iostream>
using namespace std;

#define PI 3.14

class Volume {
public:
    double getValue(int r) { return (4 * PI * r * r * r / 3); }
};

class SurfaceArea {
public:
    double getValue(int r) { return 4 * PI * r * r; }
};
class Sphere : public Volume{  // LINE-1
    int _r;
public:
    Sphere(int a) : _r(a) { }
    double getVolume() { return (4 * PI * _r * _r * _r / 3); }      // LINE-2
    double getSurfaceArea() { return (4 * PI * _r * _r); } // LINE-3    
};
int main() {
    int a;
    cin >> a;

    Sphere s(a);
    cout << s.getVolume() << ", " << s.getSurfaceArea();

    return 0;
}
