// simple concept of inheritence in c++.

#include <iostream>
using namespace std;
class Human{
	protected:
		string name,dish;
		int age,hour;
		long meter;
	public:
		void walk()
		{
			cout<<"what is your name? ";
			cin>>name;
			cout<<"what is your age? ";
			cin>>age;
			cout<<"how much you walk daily in meters? ";
			cin>>meter;
			cout<<"Your name is :     "<<name<<endl
				<<"Your age is  :     "<<age<<endl
				<<"Daily walking:     "<<meter<<'m';
		}
		void sleep()
		{
			cout<<"what is your name? ";
			cin>>name;
			cout<<"what is your age? ";
			cin>>age;
			cout<<"how many hours you sleep daily? ";
			cin>>hour;
			cout<<"Your name is  :     "<<name<<endl
				<<"Your age is   :     "<<age<<endl
				<<"Daily sleeping:     "<<hour<<'h';

		}
		void eat()
		{
			cout<<"what is your name? ";
			cin>>name;
			cout<<"what is your age? ";
			cin>>age;
			cout<<"which dish you like to eat daily? ";
			cin>>dish;
			cout<<"Your name is :     "<<name<<endl
				<<"Your age is  :     "<<age<<endl
				<<"You like eating:   "<<dish;
		}
};
class childHuman : public Human{
	private:
		string language,ip,game;
	public:
		void programmer()
		{
			cout<<"what is your name? ";
			cin>>name;
			cout<<"what is your age? ";
			cin>>age;
			cout<<"what is your favourite programming language? ";
			cin>>language;
			cout<<"Your name is   :        "<<name<<endl
				<<"Your age is    :        "<<age<<endl
				<<"programming language:   "<<language;
		}
		void hacker()
		{
			cout<<"what is your name? ";
			cin>>name;
			cout<<"what is your age? ";
			cin>>age;
			cout<<"Enter your IP address then i will hack your system: ";
			cin>>ip;
			cout<<"Your name is :     "<<name<<endl
				<<"Your age is  :     "<<age<<endl
				<<"I hacked your system";
		}
		void player()
		{
			cout<<"what is your name? ";
			cin>>name;
			cout<<"what is your age? ";
			cin>>age;
			cout<<"Which game you like the most: ";
			cin>>game;
			cout<<"Your name is  :     "<<name<<endl
				<<"Your age is   :     "<<age<<endl
				<<"favourite game:     "<<meter<<'m';
		}
};
int main(){
	childHuman c1;
	c1.walk();
	c1.programmer();
	c1.hacker();
}
