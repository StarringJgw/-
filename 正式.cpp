#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
typedef struct student{		//�����ṹ������student 
	char name[20];			//����������ѧ����Ϣ������ 
	char number[20];
	char sex;
	int chinese;
	int math;
	int english;
	//float avr;
	student *next;			//ָ���� 
}student;
void create (student **trans, int n,char *name,char *number,char *sex,int *chinese,int *math,int *english)	//�������� 
{
	int i; 
	student *loc_head, *tail;		// ����ͷβָ��
	loc_head=(student *)malloc(sizeof(student)); //Ϊͷָ����䶯̬�ռ�
	tail=loc_head;			//ʹβָ����ͷָ��ָ��Ŀ����ͬ
	for(i=1;i<=n-1;i--)		//ѭ��n-1�Σ�nΪ�༶������ʹ�������n����� 
	{
		
		strcpy(tail->name,name);
		strcpy(tail->number,number);
		tail->sex=*sex;
		tail->chinese=*chinese;
		tail->math=*math;
		tail->english=*english;
		//tail->avr=*avr;
		tail->next=(student *)malloc(sizeof(student)); //������һ����� 
		tail=tail->next;		//ʹtail�ƶ�����һ����� 
	}
	*trans=loc_head;		//�������õ������� 
}
int main (void)
{
	int n,i;
	scanf("%d",&n);
	char *name[n],*number[n],*sex[n];
	int *chinese[n],*math[n],*english[n];
	float *avr[n];
	getchar();
	for(i=0;i<n;i++)											//Ϊ�����鸳ֵ 
	{
		name[i]=(char *)malloc(20*sizeof(char));
		number[i]=(char *)malloc(20*sizeof(char));
		sex[i]=(char *)malloc(sizeof(char));
		chinese[i]=(int *)malloc(sizeof(int));
		math[i]=(int *)malloc(sizeof(int));
		english[i]=(int *)malloc(sizeof(int));
		avr[i]=(float *)malloc(sizeof(float));
		gets(name[i]);
		gets(number[i]); 
		scanf("%c\n%d\n%d\n%d",&sex[i],&chinese[i],&math[i],&english[i]);
	//	printf("%s\t%s\t%c\t%d\t%d\t%d",name[i],number[i],sex[i],chinese[i],math[i],english[i]);
	}
	student *s1;
	create(&s1,n,name,number,sex,chinese,math,english);
return 0;
}

