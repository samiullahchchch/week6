#include <iostream> 
using namespace std;

int checking(string day , string month, int amount);


   main()
{
  int amount, result;
  string day, month;
  cout<<"enter the day"<<endl;
  cin>>day;
  cout<<"enter the month"<<endl;
  cin>>month;
  cout<<"enter the amount"<<endl;
  cin>>amount;
  result = checking(day,month,amount);
  
  cout<<result; 


}





int checking(string day , string month, int amount)
{
  float dis;
  int payable;
  if (day == "sunday")
{
  if (month == "october")
{
  dis = amount * 0.1;
  payable = amount - dis;
  
}

 else
{
  dis = amount * 0.05;
  payable = amount - dis;
  
}
 return payable;

}
}

  










