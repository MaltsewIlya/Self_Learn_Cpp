#include<iostream>
#include<string>

using namespace std;

int main()
{
	int height, select;
	char symbol;
	

	cout << "Choise symbol... ";
	cin >> symbol;
	cout << "Height... ";
	cin >> height;
	cout << "Select type:" << endl
		 << "1. Square" << endl
		 << "2. The pyramid" << endl
		 << "3. Inverted pyramid" << endl
		 << "4. Rectangle" << endl;
	cin >> select;
	cout << endl;

	switch (select)
	{
	case 1:
		for (int i = 0; i < height; ++i)
		{
			for (int s = 0; s < height; ++s)
			{
				cout << " " << symbol;
			}
			cout << endl;
			cout << endl;
		}
		break;
	case 2:
		for (int i = 1; i <= height; i++)
		{
			for (int p = 0; p < 2 * height - i ; p++)
			{
				cout << " ";
			}
			for (int p = 0; p < 2 * i - 1; p++)
			{
				cout << symbol;
			}
			cout << endl;
		}
		break;
	case 3:
		for (int i = height; i >= 1; i--)
		{
			for (int p = 0; p < 2 * height - i; p++)
			{
				cout << " ";
			}
			for (int p = 0; p < 2 * i - 1; p++)
			{
				cout << symbol;
			}
			cout << endl;
		}
		break;
	case 4:
		for (int i = 0; i < height; ++i)
		{
			for (int s = 0; s < height * 2; ++s)
			{
				cout << " " << symbol;
			}
			cout << endl;
		}
		break;
	default:
		cout << "You select wrong type.";
		break;
	}
}
