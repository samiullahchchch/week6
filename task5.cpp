#include <iostream>
using namespace std;
float check(string screen1, float rows,float columns);

  main()
{
  float rows1, columns1,result1,result2;
  string screen;
  cout<<"Enter the type of screen "<<endl; 
  cin>>screen;
  cout<<"Enter the number of rows "<<endl; 
  cin>>rows1;
  cout<<"Enter the type of screen "<<endl; 
  cin>>columns1;
  result1 = check(screen,rows1,columns1);
  cout<<result1;
  result2 = check(screen,rows1,columns1);
  cout<<result2;   
 
}


  float check(string screen1, float rows,float columns)
{
  float result; 

 if (screen1 == "premier")
{
     result = rows * columns * 12.00; 
}  

else  if (screen1 == "middle")
{
     result = rows * columns * 7.50; 
}  

else if (screen1 == "normal")
{
     result = rows * columns * 5.00; 
}  

return result;

}