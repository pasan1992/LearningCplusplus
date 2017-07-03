#pragma once
#include<Advance/Classes.h>

void TestingClass::setvalue(const int value) {
	i = value;
}
const int TestingClass::getvalue() {
	return i;
}

void class2::setvalue(const int a) {
	ia = a;
}
int  class2::getvalue() const {
	printf("const version\n");
	return ia;
}

int  class2::getvalue() {
	printf("mutable version\n");
	return ia;
}