#include<iostream>
using namespace std;
int calculate(string,int,int);
main()
{ 
   int total;
   string year;
   int holidays,days;
   cout << "Enter the year: ";
   cin >> year;
   cout << "Enter number of holidays: ";
   cin >> holidays;
   cout << "Enter the number of days in which he is travelling to home: ";
   cin >> days;
   total = calculate(year,holidays,days);
   cout << total;
}
 int calculate(string year,int holidays,int days)
{
    int total,week;
    float pp,ps,total1;
    pp=holidays*(2.0/3);
    week=48-days;
    ps=week*(3.0/4);
    total1 = ps+pp+days;
    if(year == "normal")
    {
        total1 = total1;
    }
    if(year == "leap")
    {
        total1 = total1 +((15.0/100)* total1);
    }
    return total1;
}
