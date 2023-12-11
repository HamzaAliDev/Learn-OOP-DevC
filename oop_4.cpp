// practise of constructor , passing parameters , constructor overloading

#include <iostream>
using namespace std;
class fun{
	private:
	public:
		fun()
		{
			cout<<"object is created....."<<endl;
		}
		fun(int x,int y)
		{
			cout<<"the sum is: "<< x + y<<endl;
		}
		fun(int z)
		{
			cout<<"the value is "<<z<<endl;
		}
};
int main(){
	fun f1,f2,f3,f4,f5;
	int a,b;
	cout<<"Enter two values : ";
	cin>>a>>b;
	fun s1(a,b);
	fun a1(39),a2(44),a3(56);
	return 0;
}
