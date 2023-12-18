
// multi-level inheritence.

#include <iostream>
using namespace std;
class Family{
	private:
	protected:
	public:
		void food (){
			cout<<"Eat food twice a day"<<endl;
		}
		void sleep(){
			cout<<"sleep 7 hours a day"<<endl;
			
		}
		void walking(){
			cout<<"walk daily"<<endl;
		}
		
};
class Father:public Family{
	private:
	protected:
	public:
		void age(){
			cout<<"father age is greater than 50. "<<endl;

		}

		void asset(){
			cout<<"have 32 acre field "<<endl;
		}
		void vehicle(){
			cout<<"father using car "<<endl;
		}
	};
class Child:public Father{
	private:
	public:
		void vehicles (){
			cout<<"using bike"<<endl;
		}
		void study(){
			cout<<"student of Graduation."<<endl;
		}
};
int main(){
	Child ali;
	ali.food();
	ali.sleep();
	ali.walking();
	ali.vehicles();
	ali.study();
	ali.age();
	ali.asset();
	ali.vehicle();
	
}
