#include <iostream>
using namespace std;

string checkspeed(float num1);



  main()
{
  float speed;
  string result1;
  cout<<"Enter the speed "<<endl;
  cin>>speed;
  result1 = checkspeed(speed);
  cout<<result1;

}


 string checkspeed(float num1)
{
 string result;
 if (num1 <= 10)
{
  result = "slow";   
}

else  if (num1 > 10 && num1 <= 50)
{
  result = "average";   
}

else  if (num1 > 50 && num1 <= 150)
{
  result = "fast";   
}

else  if (num1 > 150 && num1 <= 1000)
{
  result = "ulta fast";   
}

else  
{
  result = "extremely fast";   
}


return result;



}