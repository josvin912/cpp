#include <iostream>
#include <string>
using namespace std;

class Student {

    int _roll;

    string _name;
    mutable int _sem;        // LINE-1
public:
    Student(int roll, string name, int sem)
        : _roll(roll), _name(name), _sem(sem) { }

    void promote() const{ // LINE-2
        _sem++;
    }

    void display() const { // LINE-3
            cout << "[" << _roll << "] " << _name << " : " << _sem << endl;
    }
};

int main() {
    string a;
    int b, c;

    cin >> a >> b >> c;
    const Student s(b, a, c);

    s.promote();
    s.display();

    return 0;
}
