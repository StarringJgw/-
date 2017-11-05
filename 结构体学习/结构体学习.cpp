#include <stdio.h>

int main (void)
{
	struct student{
		char name[10];
		char sex ;
		int score;
	};
	struct student s1,s2,s3;
	scanf("%s\n%c\n%d",&s1.name,&s1.sex,&s1.score);
	printf("%s%c%d",s1.name,s1.sex,s1.score);
return 0;
}

