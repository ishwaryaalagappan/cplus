#include<iostream.h>
#include<conio.h>

/* Declaration of the class*/

class exam
{
   private:
   int sno,mark1,mark2;

   public:

/* calling of function */

     exam()
     {
	cout<<"enter the sno";
	cin>>sno;
	cout<<"Enter the mark 1: "<<endl;
	cin>>mark1;
	cout<<"Enter the mark 2: "<<endl;
	cin>>mark2;
     }

   void showdata()
   {
	cout<<"sno"<<sno<<endl<<"mark1"<<mark1<<endl<<"mark2"<<mark2<<endl;
   }
};

     void main()
     {

/* Declaring and calling the object */

	clrscr();
	exam e;
	e.showdata();
       getch();
     }
