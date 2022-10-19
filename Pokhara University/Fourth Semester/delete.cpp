// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
class Teacher{
	string name,specs;
	float salary;
	public:
		Teacher()
		{

		}
		Teacher(string n,string spec,float sal)
		{
			name = n;
			specs = spec;
			salary = sal;
		}
		void display()
		{
			cout<<"naem"<<name<<endl;
			cout<<"specs"<<specs<<endl;
			cout<<"sal"<<salary<<endl;
		}
};
class Student
{
	string name,faculty;
	int regnum;
	public:
		Student()
		{

		}
		Student(string na,string fac,int reg)
		{
			name = na;
			faculty = fac;
			regnum = reg;

		}
		void display()
		{
			cout<<"name"<<name<<endl;
			cout<<"fac"<<faculty<<endl;
			cout<<"reg"<<regnum<<endl;
		}
};
class TA:public Teacher, public Student
{
	int wyears;
	public:
		TA()
		{
		}
		TA(string name,string specs, float salary,string na, string faculty,int regnum,int wy):Teacher(name,specs,salary),Student(na,faculty,regnum)
		{
			wyears = wy;
		}
		void display()
		{
			Teacher::display();
			Student::display();
			cout<<"working"<<wyears<<endl;
		}
};
int main()
{
	TA obj("Kshitiz","TYPER",122.3,"KOKO","comouter",22,3);
	obj.display();
	obj.Teacher::display();
	return 0;
}/*
class B;
class A{
	int a;
	public:
		A(){
		}
		A(int x)
		{
			a = x;
		}
		friend void swap(A,B);
};
class B{
	int b;
	public:
		B()
		{

		}
		B(int y)
		{
			b = y;
		}
		friend void swap (A,B);
};
void swap(A a, B b)
{
	int temp = x.a;
	x.a = y.b;
	y.b = temp;

}
int main()
{
	A onj(1);
	B obj(2);
	swap(onj,obj);

}*/
