/* This program is to find the area of Square given the side  in numeric format */

#include<iostream.h>
#include<conio.h>

/* Declaration of the class */

class square
{
	private:
	float side;
	float area;

	public:
	void getdata()
	{
		cout<<"To find the area of a SQUARE"<<endl;
		cout<<"Enter the side in numeric format:"<<endl;
		cin>>side;
	}

	void calculation()
	{
		area=side*side;
	}
	void showdata()
	{
		cout<<"The area of the Square is "<<area;
	}
};

void main()
{

/* Declaring and calling the object */

	clrscr();
	square s;
	s.getdata();
	s.calculation();
	s.showdata();
	getch();
}
