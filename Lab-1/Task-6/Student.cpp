#include "Student.h"
Student::Student() {
	regNo = nullptr;
	cgpa = 0;
}
Student::Student(char* regNo, double cgpa) {
	this->regNo = deepCpy(regNo);
	this->cgpa = cgpa;
}
void Student::setRegNo(char* regNo) {
	this->regNo = deepCpy(regNo);
}
void Student::setCgpa(double cgpa) {
	this->cgpa = cgpa;
}
char* Student::getRegNo() {
	return deepCpy(regNo);
}
double Student::getCgpa() const {
	return cgpa;
}
char* Student::deepCpy(char* arr) {
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
		count++;
	char* temp = new char[count + 1];
	for (int i = 0; i < count; i++)
		temp[i] = arr[i];
	temp[count] = '\0';
	return temp;
}
Student::~Student() {
	regNo = nullptr;
	cgpa = 0;
}