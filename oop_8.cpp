// multi-level inheritence.

#include <iostream>
#include <conio.h>

using namespace std;
class Person{
	protected:
		int semester;
		string name;
	public:
		void input(){
			cout<<"enter your semester: ";
			cin>>semester;
			cout<<"Enter your name: ";
			cin>>name;
		}
		void output(){
			cout<<"your name is: "<<name<<endl;
			cout<<"your semester is: "<<semester<<endl;
		}
		
};
class Student:public Person{
	protected:
		int roll;
		int marks;
	public:
		void input(){
			Person::input();
			cout<<"enter your roll no. : ";
			cin>>roll;
			cout<<"enter your total marks: ";
			cin>>marks;
		}
		void output(){
			Person::output();
			cout<<"your roll no. is: "<<roll<<endl;
			cout<<"your total marks is: "<<marks<<endl;
		}
};
class Scholarship:public Student{
	private:
		int amount;
	public:
		void input(){
			Student::input();
			cout<<"Enter your scholarship amount: ";
			cin>>amount;
			
		}
		void output(){
			Student::output();
			cout<<"your scholarship amount is: "<<amount;
		}
};
int main(){
	Scholarship s1;
	s1.input();
	s1.output();
	
}
