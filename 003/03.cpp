#include<iostream>
#include <string>
using namespace std;

class Date
{
 public:
  Date( int, int, int );
  void setMonth( int );
  int getMonth();
  void setDay(int);
  int getDay();
  void setYear(int);
  int getYear();
  void displayDate();
 private:
  int month;
  int day;
  int year;
};
Date::Date( int m, int d, int y)
{
 if(m>=1&&m<=12)
  month=m;
 else
 {
  month=1;
 }
 day=d;
 year=y;
}
void Date::setMonth( int m)
{
 if(m>=1&&m<=12)
  month=m;
 else
 {
  month=1;
 }
}
void Date::setDay(int d )
{
 day = d;
}
void Date::setYear(int y )
{
 year=y;
}
int Date::getMonth()
{
 return month;
}
int Date::getDay()
{
 return day;
}
int Date::getYear()
{
 return year;
}
void Date::displayDate(){
 cout<<month<<"/"<<day<<"/"<<year<<endl;
}
int main()
{
 Date Date1(8,18,2019);
 cout<<"Date is ";
 Date1.displayDate();
 Date1.setMonth(0);
 Date1.setYear(2000);
 Date1.displayDate();
}

