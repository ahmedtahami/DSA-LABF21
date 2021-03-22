#include "Calculator.h"
#include<iostream>
using namespace std;
template <class T>
Calculator<T>::Calculator(T num1, T num2) {
	this->num1 = num1;
	this->num2 = num2;
}
template <class T>
T Calculator<T>::Add() {
	return num1 + num2;
}
template <class T>
T Calculator<T>::Multiply() {
	return num1 * num2;
}
template <class T>
T Calculator<T>::Subtract() {
	return num1 - num2;
}
template <class T>
T Calculator<T>::Divide() {
	if (num2 == 0)
	{
		cout << "Divide By Zero Exception" << endl;
		exit(-1);
	}
	return num1 / num2;
}
template <class T>
void Calculator<T>:: Display() {
	cout << "Value of Num1 : " << num1 << endl;
	cout << "Value of Num2 : " << num2 << endl;
}
template <class T>
Calculator<T>::~Calculator() {
	num1 = 0;
	num2 = 0;
}