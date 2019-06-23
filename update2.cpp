#include<iostream>
using namespace std;
struct Student
{
string number;
string name;
string sex;
string major; 
string college; 
}student[5];
struct Judge
{
	string name;
	double score[5];
}judge[7];

int main()
{
	int n=0;
ofstream lin("/Users/s20181105305/Desktop/lin.txt");
    if (!lin.is_open())
    {
        cout<<"open error";
    }
    while(!lin.eof() && n<5)
	{
		lin >> student[n].number >> student[n].name>> student[n].sex>>student[n].major>>student[n].college; 
		n++;
	 } 
 lin.close();
 n=0;
 ofstream gen("/Users/s20181105305/Desktop/lin.txt");
    if (!gen.is_open())
    {
        cout<<"open error";
    }
    while(!gen.eof() && n<7)
	{
			gen >> judge[n].name >>judge[n].score[0];>>judge[n].score[1]>>judge[n].score[3]>>judge[n].score[4]>>judge[n].score[5];
		    n++;
	 } 
 gen.close();
return 0;
}
