//  simple program input name, roll no., and marks then print on screen. 

#include <iostream>
using namespace std;
class Result{
	private:
		int roll_no;
		string name;
		int marks[3];
	public:
		void input(){
			cout<<"Enter your Roll no. ";
			cin>>roll_no;
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your marks of three subject: ";
			for(int i=0; i<3; i++){
				cin>>marks[i];
			}
		};
		void show(){
			cout<<"Roll_no: "<<roll_no<<endl
				<<"Name: "<<name<<endl;
				for(int j=0; j<3; j++){
					cout<<"marks of "<<j<<" subject: "<<marks[j]<<endl;
				}
				
		}
};
int main(){
	Result std1;
	std1.input();
	std1.show();
	
	return 0;
	
}
