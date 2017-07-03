#pragma once
using std::string;

struct TestingStruct {
	int value1;
	int value2;
	int value3;
};

double varidicFunction(const int count, ...);
void functionPointer();
const string & returnType();
void func(int &num);
void funcConst(const int &num);
void iteratorfunc();

//void funcString(const string *st);