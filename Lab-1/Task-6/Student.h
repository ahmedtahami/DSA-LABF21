#pragma once
class Student
{
private:
	char* regNo;
	double cgpa;
public:
	Student();
	Student(char*, double);
	void setRegNo(char*);
	void setCgpa(double);
	char* getRegNo();
	double getCgpa() const;
	char* deepCpy(char*);
	~Student();
};

