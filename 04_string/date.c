#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    }date;

    date a,b;

    a.day=19;
    a.month=4;
    a.year=2000;

    b.day=01;
    b.month=5;
    b.year=2000;

    bool flag=true;

  if(a.day==b.day && a.month==b.month && a.year==b.year) flag=true;
  
  if (flag==true)
  {
  printf("They are same date");
  }
  else{
  printf("They are different date");
  }

    return 0;
}