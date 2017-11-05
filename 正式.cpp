#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
typedef struct student{		//声明结构体类型student 
	char name[20];			//数据域（声明学生信息变量） 
	char number[20];
	char sex;
	int chinese;
	int math;
	int english;
	//float avr;
	student *next;			//指针域 
}student;
void create (student **trans, int n,char *name,char *number,char *sex,int *chinese,int *math,int *english)	//创建链表 
{
	int i; 
	student *loc_head, *tail;		// 声明头尾指针
	loc_head=(student *)malloc(sizeof(student)); //为头指针分配动态空间
	tail=loc_head;			//使尾指针与头指针指向目标相同
	for(i=1;i<=n-1;i--)		//循环n-1次，n为班级人数，使得最后共有n个结点 
	{
		
		strcpy(tail->name,name);
		strcpy(tail->number,number);
		tail->sex=*sex;
		tail->chinese=*chinese;
		tail->math=*math;
		tail->english=*english;
		//tail->avr=*avr;
		tail->next=(student *)malloc(sizeof(student)); //创造下一个结点 
		tail=tail->next;		//使tail移动到下一个结点 
	}
	*trans=loc_head;		//将建立好的链表返回 
}
int main (void)
{
	int n,i;
	scanf("%d",&n);
	char *name[n],*number[n],*sex[n];
	int *chinese[n],*math[n],*english[n];
	float *avr[n];
	getchar();
	for(i=0;i<n;i++)											//为各数组赋值 
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

