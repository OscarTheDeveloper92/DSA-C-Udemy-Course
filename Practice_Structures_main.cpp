#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle //definition of structure
{
	int length;
	int breadth;
	char x;

};


int main()
{
	struct Rectangle r1 = { 10, 5 }; //declaration and initialization

	r1.length = 15; //accessing members via dot operators
	r1.breadth = 7;

	cout << r1.length << endl;
	cout << r1.breadth << endl;

	return 0;
}
