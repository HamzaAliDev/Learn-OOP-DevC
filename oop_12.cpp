
// get and push function.

#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int count ;
	char ch;
	cout<<"write text: ";
	while(ch != '\n'){
		cin.get(ch);
		cout.put(ch);
		count ++;
	}
	return 0;
}
