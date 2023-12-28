// practice of gotoxy on asteric.

#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y){
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) ,pos);
}
void pattern(){
	int e=55,f=10;
int i,j;
for(i=1;i<=4;i++)
  {

	gotoxy(e,f);
    for(j=1;j<=i;j++)
//    gotoxy(e,f);
	cout<<'*'<<" ";
    cout<<endl;
    e--;
    f++;

  }
int x,y,z, a=3;
	e= e +2;
for(x=1;x<=3;x++)
   {

	gotoxy(e,f);
      for(z=1;z<=a;z++)
	cout<<"*"<<" ";
      cout<<endl;
      a--;
    e++;
	f++;  
   }
}
int main(){

pattern();

}
