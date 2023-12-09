//simple program using class and show marks of three subjects.

#include <iostream>
using namespace std;

class Marks{
	private:
		int m,n,o;
	public:
		void funIn(){
			cout<<"Enter the marks of three subjects :";
			cin>>m>>n>>o;
		};
		int sum(){
			int add = m+n+o;
			return add ;	
		};
		float funAve(){
			return (m+n+o)/3.0;
		};
};
int main(){
	
	int a;
	float b;
	Marks student1;
	student1.funIn();
	a = student1.sum();
	b = student1.funAve();
	cout<<"sum: "<<a<<endl
		<<"Average: "<<b;
	
}
