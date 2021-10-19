#include <iostream>

#include <string>

using namespace std;

class Vehicle {
    string vehicleName;

    int noOfWheels;

protected:
    Vehicle(string s, int w) : vehicleName(s), noOfWheels(w) { }
    public:
    static void vehicleDetails(const Vehicle&); // LINE-1
};

class Twowheeler : public Vehicle { public:

    Twowheeler(string n) : Vehicle {string n,intw}           // LINE-2
};

class Threewheeler : public Vehicle { public:

    Threewheeler(string n) : Vehicle {string n,int w }         // Line-3
};
void vehicleDetails(const Vehicle &v) {
    cout << v.vehicleName << ": ";
    if (v.noOfWheels == 2)
        cout << "Two Wheeler";
    else
        cout << "Three Wheeler";
}

int main() {
    string s;
    int n;
    Vehicle *v;

    cin >> s >> n;

    if (n == 2)
        v = new Twowheeler(s);
    else
        v = new Threewheeler(s);

    vehicleDetails(*v);

    return 0;
}
