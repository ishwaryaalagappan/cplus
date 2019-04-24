/* This program is to get and print BIODATA */

#include<iostream.h>
#include<conio.h>

/* Declaration of the class */

class biodata
{
    private:

	char name[20],bldgrp[20],gender[10];
	char fname[30],mname[30];
	char occupation[40];
	char dob[20];

    public:

    void getdata()
    {

/* Get the input from the user */

	    cout<<"ENTER THE DETAILS"<<endl;
	    cout<<"================="<<endl;
	    cout<<"Enter your name:";
	    cin>>name;
	    cout<<endl<<"Enter your blood group:";
	    cin>>bldgrp;
	    cout<<endl<<"Enter your Father's name:";
	    cin>>fname;
	    cout<<endl<<"Enter your Mother's name:";
	    cin>>mname;
	    cout<<endl<<"Enter your gender:";
	    cin>>gender;
	    cout<<endl<<"Enter the date of birth (dd/mm/yyyy):";
	    cin>>dob;
    }

    void showdata()
    {

/* Display the inputs received from the user */

	    cout<<"BIODATA"<<endl;
	    cout<<"======="<<endl;
	    cout<<"Name          :"<<name<<endl;
	    cout<<endl<<"Blood group   :"<<bldgrp;
	    cout<<endl<<"Father's name :"<<fname;
	    cout<<endl<<"Mother's name :"<<mname;
	    cout<<endl<<"Gender        :"<<gender;
	    cout<<endl<<"Date of birth :"<<dob;
    }

};

    void main()
    {

/* Declaring and calling the object */

	    clrscr();
	    biodata b;
	    b.getdata();
	    b.showdata();
	    getch();

    }
