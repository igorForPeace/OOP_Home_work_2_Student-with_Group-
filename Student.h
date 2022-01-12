#pragma once
#include "ALL_libraries.h"



class Student
{
private:
	char* surname;
	char* name;
	char* patronymic;
	int age;
	int* credits;
	bool exam;
	float average_rating;

public:
	Student();
	Student(const char* surname, const char* name, const char* patronymic);
	~Student();

	const char* Get_name();
	const char* Get_surname();
	const char* Get_patronymic();
	int Get_age()const;
	float Get_avegare_rating() const;
	void Show_credits() const;
	bool Get_exam() const;
	void Show_Student();





};

