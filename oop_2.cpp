
// using class and find area of shapes.
#include <iostream>
using namespace std;
class circle{
	private:
		float radius;
	public:
		void get_radius(float r){
			radius = r;
		};
		void area(){
			float a = 3.14 * radius * radius;
			cout<<"Area is: "<<a<<endl;
		};
		void circum(){
			float b = 2 * 3.14 * radius;
			cout<<"Circumferencs is: "<<b;
		};
};
int main(){
	float x;
	circle cir1;
	cout<<"Enter the radius: ";
	cin>>x;
	cir1.get_radius(x);
	cir1.area();
	cir1.circum();
	return 0;
}
