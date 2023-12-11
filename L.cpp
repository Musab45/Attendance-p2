#include<iostream>
using namespace std;

bool attendance[5] = { true, true, true, true, true};

int main()
{
	char out_choice;
	char status;
	do
	{
		int in_choice;
		cout << "Menu" << endl;
		cout << "1. Take" << endl;
		cout << "2. Show" << endl;
		cout << "Enter choice:";
		cin >> in_choice;
		switch (in_choice)
		{
		//Take
		case 1:
			for (int i = 0; i <= 5; i++)
			{
				for (int j = i+1; j < 6; j++)
				{
					cout << "\nStudent" << j << ": " << endl;
					cout << "Status: ";
					cin >> status;
					switch (status)
					{
					case'p':
						attendance[i] = true;
						break;
					case'P':
						attendance[i] = true;
						break;
					case'a':
						attendance[i] = false;
						break;
					case'A':
						attendance[i] = false;
						break;
					default:
						cout << "\nWrong Entry!" << endl;
					}
					
				}
				break;
			}
			break;
		//Show
		case 2:
			for (int n = 0; n < 6; n++)
			{
				
				if (attendance[n])
				{
					cout << "Present" << endl;
				}
				else
				{
					cout << "Absent" << endl;
				}
				
			}
			break;
		}
		cout << "Return to Menu?(y/n): ";
		cin >> out_choice;
	} while (out_choice == 'y');
}