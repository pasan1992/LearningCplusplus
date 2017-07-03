#pragma once
#include <cstdio>
#include<iostream>
#include "func.h"
#include "Advance/jump.h"
#include "Advance/OperatorOverloading.h"
#include "Advance\ClassMethodImplmentation.h"

using namespace std;

//void funcString(const string &st);

int main(int argc, char ** argv)
{
	/*
	//Pointers
	int x = 10;
	int *ip;
	ip = &x;
	printf("x is %d\n", x);
	printf("ip is %d\n", *ip);
	x = 3;
	printf("ip is %d\n", *ip);


	//refernce
	int &y = x;
	y = 4;
	*ip = 14;
	printf("y is %d\n", y);
	printf("x is %d\n",x);
	//arrays
	int ar[10];
	ar[0] = 1;
	*ar = 10;
	*/
	//Conditions & looping
	/*
	int x = 42;
	int y = 10;

	printf("gearter value is %d\n", x > y ? x : y);

	switch (x)
	{
	case 1:
	printf("one\n");
	break;
	case 42:
	printf("tow\n");
	break;

	default:
	break;
	}

	//Looping
	char s[] = "string";
	for (char *cp = s; *cp; ++cp) {
	printf("element %c\n", *cp);
	}

	printf("\n\n");

	for (char a : s) {
	printf("element %c\n", a);
	}

	int a[] = { 1,2,3,4,5 };

	printf("array using pointers %d\n", *a);

	for (int *i = a; *i; i++) {
	printf("new way %d\n", *i);
	}

	for (int i : a) {
	printf("num %d\n", i);
	}

	*/
	//pass by reference
	/*
	
	int x = 10;
	func(x);

	printf("number outside %d\n", x);
	string st = "hello how are you";
	cout << "string " << st.c_str() << endl;
	printf("string ouside %s\n", st.c_str());
	funcString(st);

	for (int i = 0; i < 5; i++) {
		iteratorfunc();
	}

	printf("there is the static string %s\n", returnString().c_str());


	int &y = x;
	y = 4;

	printf("y is %d\n", y);
	printf("x is %d\n", x);
	*/
	//Testing
	/*int x = 10;
	func(x);
	int *y = &x;
	int &z = x;
	//*y++;
	z++;
	printf("new *y is %d", *y);*/
	//more on return types
	/*
	printf("message is %s\n", returnType().c_str());
	const string &st = returnType();
	printf("message is %s\n", returnType().c_str());
	int x = 10;
	int &y = x;
	printf("this is %d\n", ++y);
	printf("this is %d\n", ++y);
	*/

	//Function Pointers
	/*
	void (*fp)() = functionPointer;
	fp();

	A a(7);
	A b(42);
	printf("add em up! %d\n", a + b);
	*/
	

	//Jump function
	/*
	while (jump(prompt()));
	puts("\nDone.");
	*/
	/*
	double value = varidicFunction(3, 1.2, 3.3, 4.2);
	printf("vardict add avarage function %lf", value);
	*/
	
	TestingClass testclass;
	testclass.setvalue(10);
	printf("get value %d\n", testclass.getvalue());
	TestingStruct testStruct = { 1,2,3 };
	TestingStruct *tp = &testStruct;
	printf("data members of struct are %d , %d and %d \n", tp->value1, tp->value2, tp->value3);
	printf("data members of struct are %d , %d and %d \n", testStruct.value1, testStruct.value2, testStruct.value3);

	class2 cls;
	cls.setvalue(12);
	const class2 cls2 = cls;
	printf("using const methods %d\n", cls.getvalue());
	printf("using const methods %d\n", cls2.getvalue());




	int num;
	cin >> num;
	return 0;
}



double varidicFunction(const int count, ...) {
	va_list ap;
	int i;
	double total = 0.0;

	__crt_va_start(ap, count);

	for (i = 0; i < count; ++i) {
		total += __crt_va_arg(ap, double);
	}
	__crt_va_end(ap);
	return total / count;

}
void functionPointer() {
printf("hello this is a function pointer\n");
}
const string & returnType() {
	static string s = "this is a static string";
	return s;
}
void func(int &num) {
	num++;
	printf("number in fuction %d\n", num);
}
void funcConst(const int &num) {
	printf("number in fuction %d\n", num);
}
void funcString(const string &st) {
	printf("string is %s\n", st.c_str());
}
void iteratorfunc() {
	static int i = 0;
	i++;
	printf("number %d\n", i);
}

