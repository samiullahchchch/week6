#include<iostream>
using namespace std;
float checking(string city1, string items1, int num2);
int main()
{
	string city, items;
	int num1;
	cout << "Enter name of item: ";
	cin >> items;
	cout << "Enter name of city: ";
	cin >> city;
	cout << "Enter number of items required: ";
	cin >> num1;
	float result = checking(city, items, num1);
	cout << result;
	
}
float checking(string city1, string items1, int num2)
{
	float result1;
	if (city1 == "sofia")
	{
		if (items1 == "coffee")
		{
		result1 = num2 * 0.50;
		}
		if (items1 == "water")
		{
		result1 = num2 * 0.80;
		}
		if (items1 == "beer")
		{
		result1 = num2 * 1.20;
		}
		if (items1 == "sweets")
		{
		result1 = num2 * 1.45;
		}
		if (items1 == "peanuts")
		{
		result1 = num2 * 1.80;
		}
	}
	if (city1 == "plovdiv")
	{
		if (items1 == "coffee")
		{
		result1 = num2 * 0.40;
		}
		if (items1 == "water")
		{
		result1 = num2 * 0.70;
		}
		if (items1 == "beer")
		{
		result1 = num2 * 1.15;
		}
		if (items1 == "sweets")
		{
		result1 = num2 * 1.30;
		}
		if (items1 == "peanuts")
		{
		result1 = num2 * 1.50;
		}
	}
	if (city1 == "varna")
	{
		if (items1 == "coffee")
		{
		result1 = num2 * 0.45;
		}
		if (items1 == "water")
		{
		result1 = num2 * 0.70;
		}
		if (items1 == "beer")
		{
		result1 = num2 * 1.10;
		}
		if (items1 == "sweets")
		{
		result1 = num2 * 1.35;
		}
		if (items1 == "peanuts")
		{
		result1 = num2 * 1.55;
		}
	}
	return result1;
}