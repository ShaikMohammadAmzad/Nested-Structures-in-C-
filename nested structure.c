#include<stdio.h>
struct result
{
	int marks;
	
};
struct student
{
	int regdno;
	
	struct result r1;
	
}s1;

int main()
{
	s1.regdno=7131;
	s1.r1.marks=100;
	
	printf("%d\n",s1.regdno);
	printf("%d",s1.r1.marks);
	
	
	return 0;
}
