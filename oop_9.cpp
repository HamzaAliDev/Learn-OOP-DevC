#include <iostream>
using namespace std;
class cal{
	public:
		int add(){
			cout<<"sum is = ";
			return 0;	
		}
		int add(int x,int y){
			cout<<"sum of x and y = ";
			return x+y;
		}
		float add(int a,float b){
			cout<<"sum of a and b ";
			return a+b;
		}
};
int main(){
	float z =1.5;
	cal c1;
	cout<<c1.add();
	cout<<c1.add(23,44);
	cout<<c1.add(24,2.5f);
}

