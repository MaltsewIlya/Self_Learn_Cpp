#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first_name;
	int age;
	int year;
	
	cout << "Enter your name... ";
	cin >> first_name;
	cout << "Welcome, " << first_name << endl;
	cout << "Enter this year... ";
	cin >> year;
	if (year <= 0)	//провер€ем введен ли год верно, если нет запрашиваем ввести год снова;
	{
		cout << "Enter the correct year... ";
		cin >> year;
	}
	cout << "Enter your age... ";
	cin >> age;
	if (age < 0 || age >= year)	//провер€ем введен ли возраст верно, если нет запрашиваем ввести год снова;
	{
		cout << "Enter the correct age... ";
		cin >> age;
	}
	int born = year - age; // –асчитываем год рождени€ от полученных данных от пользовател€;
	cout << "You were born, " << born << " year" << endl;
		
}