#include <iostream>
#include"complex.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Complex c1(3,5);
	Complex c2(2,3);
	Complex c3;
	c3=c1+c2;//c3=c1.add(c2)
	c3.print();
	return 0;
}
