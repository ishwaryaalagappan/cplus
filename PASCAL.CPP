/* To print the * in a pascal triangle format */

#include<iostream.h>
#include<conio.h>

void main()
  {
    int i,j,n;
    clrscr();
    cout<<"PASCAL TRIANGLE"<<endl;
    cout<<"==============="<<endl;

/* To get the number of lines to be printed */

    cout<<"Enter the no. lines to be printed:"<<endl;
    cin>>n;

/* Initialization of for loop */

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
	 {
	    cout<<"*";
	 }
	      cout<<endl;
     }

     getch();
}
