// PerformanceTask.cpp : Defines the entry point for the application.
//

#include "PerformanceTask.h"

using namespace std;

int main()
{
	char btnInput = 0;
	char tempInput = 0;

	cout << "Ayala High School\n";
	cout << "Chino Hills, CA\n";
	cout << "AP CSP\n";
	cout << endl;
	cout << "-----------------------------------------------\n";
	cout << "Play our Math Speed Game\n";
	cout << "-----------------------------------------------\n";
	cout << endl;

	while (btnInput != 'q')
	{
		cout << "-----------------------------------------------\n";
		cout << "Game Menu" << endl;
		cout << "-----------------------------------------------\n";
		cout << "Press 'l' for Leaderboard\n";
		cout << "Press 'p' to Play Game\n";
		cout << "Press 'q' to Exit\n";
		cout << "-----------------------------------------------\n";
		cout << "Press key: ";
		cin >> btnInput;

		switch(btnInput)
		{
			case 'l':
				// do something here
				cout << "\n\n Must implement leaderboard \n\n";
				cout << "\n\n Press any key to continue \n\n";
				cin >> tempInput;
				break;

			case 'p':
				cout << "\n\n Must implement the actual game \n\n";
				cout << "\n\n Press any key to continue \n\n";
				cin >> tempInput;
				// do something here
				break;

			default:
				cout << "\n\nInvalid Input !!!!\n\n";
				break;

		}

	}
	cout << endl;
	cout << "Exiting Game." << endl << endl << endl << endl;
	return 0;
}
