// practise of  define member function outside the class

#include <iostream>
using namespace std;
class Array{
	private:
	    int a[5];
	public:
		void fill();
		void display();
		void max();
		void min();
	
};
void Array::fill()
	{
		for(int i=1; i<=5; i++)
		{
			cout<<"Enter "<<i<<" value :";
			cin>>a[i-1];
		}
	}
void Array::display()
	{
		for(int x=1; x<=5; x++)
			cout<<"the "<<x<<" value is "<<a[x-1]<<endl;
	}
void Array::max()
	{	
		int maxi = a[0];
		for(int y=0; y<=4; y++)
		{
			if(a[y] > maxi)
				maxi = a[y];
		}
		cout<<"the maximum value is: "<<maxi<<endl;
	}
void Array::min()
	{	
		int min = a[0];
		for(int z=0; z<=4; z++)
		{
			if(a[z] < min)
				min = a[z];
		}
		cout<<"the minimum value is: "<<min<<endl;
	}

int main(){
	Array s1;
	s1.fill();
	s1.display();
	s1.max();
	s1.min();
	return 0;
}
