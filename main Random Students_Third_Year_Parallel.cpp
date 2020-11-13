// Random Students.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <string>
#include <conio.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void greeting(void)
{
	cout << "Welcome to 7th batch Mechatroincs Student Picker" << endl;
	cout << "2019 Third Year-Parallel Edition" << endl;
	cout << "===================================================" << endl;
	cout << endl;
	cout << "Please choose how many students you want to pick:";
}

void generatingNames(int numberOfStudents)
{
	char* students[27][100]
	{
		"Ahmed Mohammed AlFeras",
		"Diaa Yahya Ganam",
		"Gamal Gamel AlAsri",
		"Rufeda Ali Khala",
		"Ahmed Mohammed Othman",
		"Ismail Ali AlGabri",
		"Shatha Ali AlKabodi",
		"Marwan Khaled AlDiani",
		"Malak Saleh Ali AlShami",
		"Sultan Ali Ahmed Saryah",
		"Ahmed Abdulkarem Amer",
		"Ahmed Ramzy Alherwi",
		"Essa Abdu Ahmed Saeed ",
		"Amjad Mohammed Ezi",
		"Mohammed Ahmed AlQaili",
		"Tarq Nage Omeer",
		"Najm Addin Fateh AlShuaibi",
		"Asaf Abdulrahman Qasem",
		"Mohammed Tarq AlAkhali",
		"Ahmed Hamod AlAsri",
		"Mohammed Khaled AlDilami",
		"Mohammed Yahya AlBeshari",
		"Zuhair Tarbosh",
		"Amat Alrahem Mohammed AlAwadi",
		"Hamza Ahmed AlNoa'a",
		"Abdulwahab Mohammed Theyab",
		"Fekri Qaseem"

	};
	int randNumbers{ 0 };
	int oldRandNumbers[27]{ 0 };
	cout << endl << "List of Names are" << endl << "====================" << endl;

	for (int i = 0; i < numberOfStudents; i++)
	{
	    srand(time(NULL));
		randNumbers = (rand() % (26 - 0 + 1)) + 0;

		int duplicate{ 0 };
		for (int j = 0; j < i; j++)
		{
			if (randNumbers == oldRandNumbers[j])
			{

				duplicate++;

			}

		}
		if (duplicate == 0)
		{
			oldRandNumbers[i] = randNumbers;
			cout << randNumbers + 1 << ". " << *(students +randNumbers) << endl;
		}
		else i--;

	}
	cout << endl;

}
int main()
{
	while (true)
	{


		greeting();

		int numberOfStudents{ 0 };
		while (numberOfStudents > 27 || numberOfStudents <= 0)
		{
			cin >> numberOfStudents;
			if (numberOfStudents > 0 && numberOfStudents <= 27)
			{
				break;
			}
			cout << "Please input a number between 1 and 27: ";
		}

		generatingNames(numberOfStudents);
		cout << "Press space to exit, or Enter to continue" << endl;
		int close;
		close= getche();
		if (close == 32)
		{
			break;
		}
	}
	system("pause");

	return 0;
}


