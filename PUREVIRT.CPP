/* SAMPLE PROGRAM FOR ABSTRACT CLASS */
#include<iostream.h>
#include<conio.h>

/* Declaration of class */

class book
{
  private:
    int x;

  public:
    book()
    {
      x=0;
    }
   
   /* Pure virtual function */

  virtual void getdata()=0;
  virtual void putdata()=0;
};

   void main()
   {
     clrscr();
     cout<<"HAPPY MORNING";
     getch();
   }
