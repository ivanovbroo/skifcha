#include <iostream>

using namespace std;

int getYesNo(const char* question) //check answer yes or no
{
tryAgain:
	cout << question;

	char answer[128];
	
	cout << "[You]: ";
	cin >> answer;

	if (answer[0] == 'y' && answer[1] == 'e' && answer[2] == 's' || answer[0] == 'Y' && answer[1] == 'E' && answer[2] == 'S')
	{
		return true;
	}
	else
	{
		if (answer[0] == 'n' && answer[1] == 'o' || answer[0] == 'N' && answer[1] == 'O')
		{
			return false;
		}
		else
		{
			cout << "\n[Console:] To answer, use the keyboard input ONLY \"YES|yes\" or \"NO|no\"\n\n";
			goto tryAgain;					
		}
	}
}

int getGuilt() //repeating the cycle until the answer is true
{
	bool guilt(false);
	while (guilt == false)
	{
		cout << "[Detective]: I have a bad news... . ";
		guilt = getYesNo("Can you blame others?\n");

		if (guilt == false)
		{
			cout << "[Detective]: Sorry, you have to blame someone." << endl;
		}
	}
	return 0;
}

int main()
{
	cout << "[Detective]: Hey, I'm a local detective, I want to ask you some questions."     << endl;
	cout << "\n[Console:] To answer, use the keyboard input ONLY \"YES|yes\" or \"NO|no\"\n" << endl;
	
	if (getYesNo("[Detective]: Is there a problem?\n"))
	{
		if (getYesNo("[Detective]: Are you involved?\n"))
		{
			if (getYesNo("[Detective]: Not worth it! Does anyone know about this?\n"))
			{
				getGuilt();
				cout << "[Detective]: No problem! RUUUN!!!" << endl;
			}
			else
			{
				cout << "[Detective]: Don't tell anybody! No problem!" << endl;
			}
		}
		else
		{
			if (getYesNo("[Detective]: Was it hung on you?\n"))
			{
				getGuilt();
				cout << "[Detective]: No problem! RUUUN!!!" << endl;
			}
			else
				cout << "[Detective]: Sit still! No problem!" << endl;
		}
	}
	else
	{
		cout << "[Detective]: Don't worry... . No problem!" << endl;
	}
	cout << "\nTo exit the program, press any key on the keyboard!\n" << endl;

	system("PAUSE");
	return 0; 
}
