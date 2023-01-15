#include<iostream>
using namespace std;
float requiredamount(float,string,int);
float leftamount(float,int);  
main()
{
  float result1,result2,budget;
  string category;
  int num1;
  float required;
  cout << "Enter the budget:";
   cin >> budget;
   cout << "Enter the category:";
   cin >> category; 
   cout << "Enter the number:";
   cin >> num1;
   result1 = requiredamount(budget,category,num1);
   result2 = leftamount(budget,num1);
   if(result1>result2 )
   {
       required = result1 - result2;
       cout<<"Not enough money, You required: "<<required<<endl;
   }
   else
   {
       required=result2-result1;
       cout<<"No required amount..You have left amount: "<<required<<endl;
   }
}
float requiredamount(float budget,string category,int num1)
{
    float required;
     if(category=="vip") 
     {
     required=num1*499.99;
     }
     else
     {
     required=num1*249.99;
     }
     return required;
}
float leftamount(float budget,int num1)
{
    float left;
    if(num1>=1||num1<=4)
    {
    left=budget-(budget*(75.0/100));
    }
    else if(num1>=5||num1<=9)
    {
    left=budget-(budget*(60.0/100));
    }
    else if(num1>=10||num1<=24)
    {
    left=budget-(budget*(50.0/100));
    }
    else if(num1>=25||num1<=49)
    {
    left=budget-(budget*(0.4));
    }

    else if(num1>49) 
    {
    left=budget-(budget*(25.0/100));
    }
    return left;
}  
