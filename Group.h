#pragma once
#include "ALL_libraries.h"
#include "Student.h"

class Group
{
private:
	int count_of_student;
	Student* student;
	char* name_of_group;
	char* specialization;
	int course;
public:
	Group();
	Group(int count_of_student);
	Group(int count_of_student, const char* name_of_group, const char* specialization);
	Group(const Group& original);
	~Group();

	void Set_count_of_student(int count_of_student);// мотод установки кол. студентов
	int Get_count_of_student() const;

	void Set_name_of_group(const char* name_of_group);// метод установки имени группы
	void Set_specialization(const char* specialization);// метод установки специализации группы
	

	void Set_course(int course);  // метод установки курса
	int Get_course() const;
	void Show_Group();  // показ всех студентов группы
	void Add_Student(); //метод добавления студента
	void Dismiss_for_exam(); // метод отчисления студентов за несдавший экз
	void Dismiss_for_credits(); // отчисления за неуспеваемость
	void Sum_group(const Group& original); // слияние групп
	
	

};

