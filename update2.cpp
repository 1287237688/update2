#include<stdio.h>
#include<string.h>
struct Student
{
int num;
char name[20];
char sex[10] ;
char major[20]; 
char college[20]; 
};
int main()
{
struct Student stu[5]={
{2018111,"�ϴ�","��","�������ѧ����ѧԺ","������"},
{2018112,"�϶�","Ů","�������ѧ����ѧԺ","���繤��"},
{2018113,"����","��","�������ѧ����ѧԺ","������"},
{2018114,"����","Ů","�������ѧ����ѧԺ","�Ʒ���"},
{2018115,"����","��","�������ѧ����ѧԺ","�������"}
};
struct Student temp;
const int n=5;
int i;
for(i=0;i<n;i++)
printf("%8d %4s %4s %8s %4s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].college,stu[i].major);
return 0;
}
