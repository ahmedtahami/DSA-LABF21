#pragma once
template <class T>
class Calculator
{
private:
	T num1;
	T num2;
public:
	Calculator(T num1, T num2);
	T Add();
	T Multiply();
	T Subtract();
	T Divide();
	void Display();
	~Calculator();
};

