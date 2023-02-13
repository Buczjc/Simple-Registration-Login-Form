#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>
#include <stdio.h>
using namespace std;

void Loading_Bar();

int main() {

	system("color 5A");

	string name = "";
	string pass = "";


	cout << " [   REGISTRATION FORM   ] " << endl;
	cout << "\n";
	cout << "Enter a username : ";
	cin >> name;

	int lenght = name.length();

	while (lenght <= 3 || lenght >= 12)
	{
		system("cls");
		cout << " [   REGISTRATION FORM   ] " << endl;
		cout << "\n";
		if (lenght <= 3)
		{
			cout << "[  The username you entered is too short  ]" << endl;
		}
		else
		{
			cout << "[   The username you entered is too long   ]" << endl;
		}
		cout << "Enter a username : ";
		cin >> name;
		lenght = name.length();
	}

	system("cls");
	cout << " [   REGISTRATION FORM   ] " << endl;
	cout << "\n";
	cout << "Enter a username : " << name << endl;


	cout << "Enter a password : ";
	cin >> pass;

	int pass_length = pass.length();

	while (pass_length <= 6)
	{
		system("cls");
		cout << " [   REGISTRATION FORM   ] " << endl;
		cout << "\n";
		cout << "Enter a username : " << name << endl;
		cout << "\n";
		cout << "[   The password you entered is too short   ]" << endl;
		cout << "Enter a password : ";
		cin >> pass;
		pass_length = pass.length();
	}

	//loading screen
	system("cls");
	Loading_Bar();


	system("cls");
	cout << "[  Your account has been registered!  ]";
	cout << "\n\n";
	system("pause");
	system("cls");

	string user;
	string code;

	cout << "[   LOG IN FORM   ]\n";
	cout << "Enter a username : ";
	cin >> user;
	cout << "Enter a password : ";
	cin >> code;

	system("cls");

	if (user == name && code == pass)
	{
		cout << "  Welcome " << name << endl;
	}
	else if (user == name && code != pass)
	{
		cout << "Wrong password";
	}
	else
	{
		cout << "No user has been registered";
	}

	return 0;
}

void Loading_Bar()
{
	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	int bar1 = 177, bar2 = 219;

	cout << "\n\n\n\t\t\t\tRegistering Please Wait....";
	cout << "\n\n\n\t\t\t\t";

	for (int i = 0; i < 25; i++)
	{
		cout << (char)bar1;
	}

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 100;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &cursorInfo);

	cout << "\r";
	cout << "\t\t\t\t";
	for (int i = 0; i < 25; i++)
	{
		cout << (char)bar2;
		Sleep(150);
	}
}