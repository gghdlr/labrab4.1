#pragma once
using namespace std;
#include <iostream>
class MyMath
{
public:
	MyMath(int x, int y);
	MyMath();
	int y;
	int x;
	static int Add(int x, int y);
	static int Sub(int x, int y);
	static int Mult(int x, int y);
	static int Div(int x, int y);
	static void resetCounter() {
		counter = 0;
	}
	static int counter;
};

