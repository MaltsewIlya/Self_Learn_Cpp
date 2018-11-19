#include<iostream>

using namespace std;



int main()
{
	char checking;
	
	cout << endl;
	cout << "Check for ingredients:\n"
		<< "1. 4 pork chops\n"
		<< "2. salt and pepper to taste\n"
		<< "3. 1 pinch garlic salt, or to taste\n"
		<< "4. 1 onion, chopped\n"
		<< "5. 1/2 pound fresh mushrooms, sliced\n"
		<< "6. 1 (10.75 ounce) can condensed cream of mushroom soup" << endl;
	cout << "You have all ingredients (y\\n)? ";
	cin >> checking;
	while (checking != 'n' && checking != 'y')
	{
		cout << "I do not know your answer.\n" << "You have all ingredients (y\\n)? ";
		cin >> checking;
	}
	if ( checking == 'y' ) {
		cout << "Ready to cooking.\n" << endl
			 << "1. Season pork chops with salt, pepper, and garlic salt to taste.\n" << endl
			 << "2. In a large skillet, brown the chops over medium-high heat.\n"
			 << "Add the onion and mushrooms, and saute for one minute.\n"
			 << "Pour cream of mushroom soup over chops.\n"
			 << "Cover skillet, and reduce temperature to medium-low.\n"
			 << "Simmer 20 to 30 minutes, or until chops are cooked through.\n";
	}
	else {
		cout << "Go buy ingredients!\n";
	} 
	
}
