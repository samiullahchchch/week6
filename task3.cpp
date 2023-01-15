#include <iostream>
using namespace std;
string checktitke(int age , char gender);


  main()
{
 int age;
 char gender;
 string result1;
 cout<<"Enter the age ::"<<endl;
 cin>>age;
 cout<<"Enter the gender ::"<<endl;
 cin>>gender;
 result1 = checktitke(age,gender);
 cout<<result1; 

}




string checktitke(int age , char gender)
{
  string result;
 if(age >= 16 && gender == 'm')
{
  result =  "Mr.";
}
 
else if(age < 16 && gender == 'm')
{
  result =  "Master.";
}

else if(age >= 16 && gender == 'f')
{
  result =  "Ms.";
}

else if(age < 16 && gender == 'f')
{
  result =  "Mass.";
}

return result;


}










