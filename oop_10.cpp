#include <iostream>
using namespace std;
class Parent{
	protected:
		int a;
	public:
		Parent(int p){
			a = p;
		}
		void show(){
			cout<<"num is: "<<a<<endl;
		}
};
class Child : public Parent{
	private:
		char ch;
	public:
		Child(char q,int r) : Parent(r){
			ch = q;
		}
		void show(){
			Parent :: show();
			cout<<"ch = "<<ch<<endl;
		}
};
int main(){
	Child obj('@',244);
	obj.show();
}
