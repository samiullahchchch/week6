#include<iostream>
using namespace std;
float lowestPrice(int number1,string daynight);
int main()
{
    int number2;
    string daynight1;
    float result ;
    cout << "Enter number of kilometers: ";
    cin >> number2;
    cout << "Enter day or night: ";
    cin >> daynight1;
    result = lowestPrice(number2,daynight1);
    cout << "Cheapest Price is: " << result; 
}
float lowestPrice(int number1,string daynight)
{
    float answer;
    if(number1>=20  && number1<100)
    {
        answer = 0.09 * number1;
    }
    else if(number1>=100)
    {
        answer = 0.06 * number1;
    }
    else
    {
        if(daynight == "day")
        {
            answer = 0.70 + (0.79 * number1);
        }
        else if(daynight == "night")
        {
            answer = 0.70 + (0.90 * number1);
        }
    }
    return answer;
}