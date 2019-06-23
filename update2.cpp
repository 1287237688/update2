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
{2018111,"老大","男","计算机科学技术学院","网络编程"},
{2018112,"老二","女","计算机科学技术学院","网络工程"},
{2018113,"老三","男","计算机科学技术学院","大数据"},
{2018114,"老四","女","计算机科学技术学院","云分析"},
{2018115,"老五","男","计算机科学技术学院","软件工程"}
};
struct Student temp;
const int n=5;
int i;
for(i=0;i<n;i++)
printf("%8d %4s %4s %8s %4s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].college,stu[i].major);
return 0;
}
