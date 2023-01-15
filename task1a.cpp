#include<iostream>
using namespace std;
char calculategrade(int number1);
int main()
{
    int num1;
    char grade1;
    cout << "Enter marks: ";
    cin >>num1;
    grade1 = calculategrade(num1);
    cout << "Grade is: " << grade1;
}

char calculategrade(int number1)
{
    char grade;
    if(number1 < 50)
    {
        grade = 'F';
    }
    else if(number1 >= 50 && number1 <= 60)
    {
        grade = 'E';
    }
    else if(number1 >= 61 && number1 <= 70)
    {
        grade = 'D';
    }
    else if(number1 >= 71 && number1 <= 80)
    {
        grade = 'C';
    }
    else if(number1 >=81 && number1 <=85)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    } 
    return grade;
}