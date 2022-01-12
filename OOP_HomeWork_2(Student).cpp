#include "Student.h"
#include "Group.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	

	Group A(5);
	A.Show_Group();
	Group B(3, " лассные", "Ёкономика");
	B.Show_Group();
	A.Sum_group(B);
	A.Show_Group();
	
	

	
	
	
	
	
	return 0;
}