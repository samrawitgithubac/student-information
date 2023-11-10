#include <iostream>
#include<string>
#include<iomanip>
#include<cctype>
using namespace std;
void studentinformation(int,int,string,string);
void GRADE_SYSTEM(float,float,float,float,float);
string calculategrade(float mark);
 float fun(string grade);

int main()

{
    int semster,academicyear;
float mark=0,english=0,physics=0,maths=0,credithours=3,totalgrade,CGPA;
    string name,ID,course,grade;
cout<<"******************************************************"<<endl<<endl<<endl;
    cout<<"ENTER YOUR FULL NAME PLEASE:";
  getline(cin,name);
  cout<<"ENTER YOUR ID NUMBER:";
  cin>>ID;
  cout<<"ENTER YOUR ACADEMIC YEAR:";
  cin>>academicyear;
  cout<<"ENTER YOUR SEMSTER:";
  cin>>semster;
  cout<<endl<<endl;
  studentinformation(semster,academicyear,name,ID);

  cout<<"ENTER YOUR TOTAL MARK MATHS=";
  cin>>maths;
   mark+=maths;
  cout<<"ENTER YOUR TOTAL MARK PHYSICS=";
  cin>>physics;
   mark+=physics;
  cout<<"ENTER YOUR TOTAL MARK ENGLISH=";
  cin>>english;
   mark+=english;
cout<<endl;
   grade=calculategrade(mark);


CGPA=3*(fun(calculategrade(maths))+fun(calculategrade(english))+fun(calculategrade(physics)))/9;
GRADE_SYSTEM(maths,physics,english,credithours,CGPA);
    return 0;
}
void studentinformation(int semster,int academicyear,string name,string ID)
{
cout<<"*********STUDENT INFORMATION********"<<endl;
for(char&c:name)
{
    c=toupper(c);
}
cout<<"YOUR NAME IS:"<<name<<endl;
for(char&c:ID)
{
    c=toupper(c);
}
cout<<"YOUR ID IS:"<<ID<<endl;
cout<<"YOUR ACADEMIC YEAR IS:"<<academicyear<<"\tYEAR"<<endl;
cout<<"YOUR SEMISTER IS:"<<semster<<"\tSEMISTER"<<endl;


cout<<"********************************************************************************************************"<<endl<<endl;
}
string calculategrade(float mark)
{
    if(mark>=80)
    {
        return "A";

    }
    else if(mark>=70)
    {
        return "B";
    }
    else if(mark>=60)
    {
        return "C";
    }
    else if(mark>=40)
    {
        return "D";
    }
    else
    {
        return "F";
    }


}
    float fun(string grade)
    {

        if(grade=="A")
        {

            return 4.0;


        }
        else if(grade=="B")
        {
            return 3;
        }
         else if(grade=="C")
        {
            return 2;
        }
        else if(grade=="D")
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

void GRADE_SYSTEM( float maths,float physics,float english,float credithours,float CGPA)
{
  cout<<"***********GRADING SYSTEM*************"<<endl;

  cout<<left<<setw(15)<<"COURSE"<<setw(15)<<"TOTALMARK"<<setw(15)<<"GRADE"<<setw(15)<<"CREDITHOURS"<<setw(20)<<"GRADEPOINT"<<setw(20)<<"CGPA"<<endl;
  cout<<left<<setw(15)<<"MATHS"<<setw(15)<<maths<<setw(15)<<calculategrade(maths)<<setw(15)<<credithours<<setw(20)<<fun(calculategrade(maths))<<setw(20)<<CGPA<<endl;
  cout<<left<<setw(15)<<"PHYSICS"<<setw(15)<<physics<<setw(15)<<calculategrade(physics)<<setw(15)<<credithours<<setw(20)<<fun(calculategrade(physics))<<endl;
  cout<<left<<setw(15)<<"ENGLISH"<<setw(15)<<english<<setw(15)<<calculategrade(english)<<setw(15)<<credithours<<setw(20)<<fun(calculategrade(english))<<endl;

}
