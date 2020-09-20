# pointers
// playing with pointers

#include<iostream.h>
#include<conio.h>
void main()
{
	int *p,arr[5];					//Pointer Declaration
	clrscr();
	p=arr;					//Assignment
	cout<<"Enter elements";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"You entered:";
	for(int n=0;n<5;n++)
	{
		cout<<*p<<endl;
		p++;		   //++ moves the pointer to next position
	}
	getch();
}
