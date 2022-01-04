#include "header.h"

using namespace std;

int main()
{
	bool meny = true;
	
	while(meny)
	{
		cout << "---Meny---" << endl;
		cout << "1. Allokera minnen i stycken om 1GiB." << endl;
		cout << "2. Allokera minnen i stycken om 1KiB." << endl;
		cout << "3. Output 1KiB in Bytes" << endl;
		cout << "4. Exit." << endl;

		int alt;
		cout << "Val: ";
		cin >> alt;

		if (alt == 1)
		{
			allokera_GiB();
			cin.ignore();
			cout << endl;
			cout << "Tryck enter för att komma tillbaka till menyn.." << endl;
			cin.ignore();
		}
		if (alt == 2)
		{
			allokera_KiB();
			cin.ignore();
			cout << endl;
			cout << "Tryck enter för att komma tillbaka till menyn.." << endl;
			cin.ignore();
		}
		if (alt == 3)
		{
			KiB_till_Bytes();
			cin.ignore();
			cout << endl;
			cout << "Tryck enter för att komma tillbaka till menyn.." << endl;
			cin.ignore();
		}
		if (alt == 4)
		{
			exit(-1);
		}
	}
	cin.get();
	return 0;
}
