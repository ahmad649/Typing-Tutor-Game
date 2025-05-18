using namespace std;
#include <chrono> // library for calculating time
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib> 
#include <stdlib.h> //for adding colors to text.
void easy_rules()
{
	int press;                                            //defining rules for easy function
	cout << "                                               RULES!!!\n";
	cout << "\nBefore you start beware that timer will reocrd the typing speed, so you should try to tpye at your best pace.\n";
	cout << "There will be 10 randomly generated words to type.\n";
	cout << "Hint : To pass the level your typing accuracy must be more than 60% and your typing speed must be greater than 15 wpm.";
	cout << "To start press 5\n";
	cin >> press;
	while (press != 5)
	{
		cout << "Wrong number entered. please press 5 to start\n";
		cin >> press;
	}
}
void medium_rules()
{
	int press;                                             //defining rules for medium function
	cout << "                                               RULES!!!\n";
	cout << "\nBefore you start beware that timer will reocrd the typing speed, so you should try to tpye at your best pace.\n";
	cout << "There will be 15 randomly generated words to type.\n";
	cout << "Hint : To pass the level your typing accuracy must be more than 60% and your typing speed must be greater than 15 wpm.";
	cout << "Beware of the capital letters.\n";
	cout << "To start press 5\n";
	cin >> press;
	while (press != 5)
	{
		cout << "Wrong number entered. please press 5 to start\n";
		cin >> press;
	}
}
void hard_rules()
{
	int press;                                            //defining rules for hard function
	cout << "                                               RULES!!!\n";
	cout << "\nBefore you start beware that timer will reocrd the typing speed, so you should try to tpye at your best pace.\n";
	cout << "There will be 20 randomly generated words to type.\n";
	cout << "Hint : To pass the level your typing accuracy must be more than 60% and your typing speed must be greater than 15 wpm.";
	cout << "Beware of the capital letters.\n";
	cout << "To start press 5\n";
	cin >> press;
	while (press != 5)
	{
		cout << "Wrong number entered. please press 5 to start\n";
		cin >> press;
	}
}
int menu()
{
	system("color 0F");
	int select;
	cout << "Welcome to typying tutor !!\n";
	cout << "\nAccording to your typing skills please select from following difficulty levels !\n";
	cout << " 1. Easy.       Press 1 for easy\n";
	cout << " 2. Medium      Press 2 for medium\n";             //asking user to choose an option
	cout << " 3. Hard        Press 3 for hard\n";

	cin >> select;
	while (!(select == 1 || select == 2 || select == 3))  //if wrong command entered 
	{
		cout << "You enetered the wrong option please re enter difficulty level !! \n";
		cout << " 1. Easy.       Press 1 for easy\n";
		cout << " 2. Medium      Press 2 for medium\n";
		cout << " 3. Hard        Press 3 for hard\n";
		cin >> select;
	}
	return select;
}
void hard()
{
	hard_rules();
	clock_t initial_time, final_time;
	system("color 04");      // for red colour 
	int mistakes = 0, total = 20;
	string user_word, hardword[28] = { "Irregardless","Disinterested","Lieutenant","Unabashed","Ambivalent","amorphous","Anachronistic","Mnemonics","Encapsulation","characteristics","Commutative","Lieutenant","sovereignty","Suburban","Stewardesses","August","Worcestershire","Squirrel","Choir","Anathema","Boatswain","Draught","Temperature","often","business","Candidate","Espresso","Foliage" };
	initial_time = clock();
	for (int x = 0; x < 20; x++)
	{
		srand((time(0)));
		int index = (rand() % 28);
		cout << "enter the word : " << hardword[index] << "\n";
		cin >> user_word;
		if ((user_word.length()) < (hardword[index].length()))
		{
			mistakes += 1;
		}
		else if (user_word.length() > hardword[index].length())
		{
			mistakes += 1;
		}
		else if (user_word.length() == hardword[index].length())
		{

			for (int i = 0; i <= hardword[index].length(); i++)
			{
				if (user_word[i] != hardword[index][i])
				{
					mistakes += 1;
					break;
				}
				
			}
		}
	}
	final_time = clock();
	float time_taken((float)final_time - (initial_time));
	time_taken = (time_taken / 1000);
	cout << " Game Over !!!\n" << "You got " << total - mistakes << " words correct out of " << total;
	cout << "\nYou took " << time_taken << "seconds to complete the level";
	cout << "\nYour typing speed in words per minute = " << ((total * 60) / time_taken);
	cout << "\nYour percentage accuracy is " << ((total - mistakes) * 5) << " %" << endl;
	if (((total - mistakes) * 5) < 60 || ((total * 60) / time_taken) < 15)
	{
		int press;
		cout << "You performed poorly!!!\n";
		cout << "Either your speed was less than 15 words per minute or your accuracy is less than 60 %";
		cout << "Do you want to repeat this level or do you want to exit the programme?\n";
		cout << "If you want to repeat this level then press 1.\n";
		cout << "if you want to exit the programme press 0.";
		cin >> press;
		while (!(press == 0 || press == 1))
		{
			cout << "Wrong number entered.\n";
			cout << "If you want to repeat this level then press 1.\n";
			cout << "if you want to exit the programme press 0.\n";
			cin >> press;
		}
		if (press == 0)
		{
			system("pause");
		}
		else if (press == 1)
		{
			hard();
		}
	}
	else
	{
		cout << "Congratulations! You perfomed good\n";
		cout << "You have mastered the typing tutor !!\n";
		system("pause");
	}
}
void medium()
{
	medium_rules();
	clock_t initial_time, final_time;
	system("color 03");      // for aqua colour 
	int mistakes = 0, total = 15;
	string user_word, easywords[30] = { "Knife","Asthma","Success","Antique","Institute","Calculus","Failure","Knight","Mystery","Yacht","Subtle"," Handkerchief","Business","Chevrolet","Meditate","Satellite","Envelope","Divulge","Coherent","Congurent","Majority","Oblique","Colonel","Commutative","Psychology","Kettle","Cougar","Commando","Identify","Positive" };
	initial_time = clock();
	for (int x = 0; x < 15; x++)
	{
		srand((time(0)));
		int index = (rand() % 30);
		cout << "enter the word : " << easywords[index] << "\n";
		cin >> user_word;
		if (user_word.length() < easywords[index].length())
		{
			mistakes += 1;
		}
		else if (user_word.length() > easywords[index].length())
		{
			mistakes += 1;
		}
		else if (user_word.length() == easywords[index].length())
		{

			for (int i = 0; i <= easywords[index].length(); i++)
			{
				if (user_word[i] != easywords[index][i])
				{
					mistakes += 1;
					break;
				}
				
			}
		}
	}
	final_time = clock();
	float time_taken((float)final_time - (initial_time));
	time_taken = (time_taken / 1000);
	cout << " Game Over !!!\n" << "You got " << total - mistakes << " words correct out of " << total;
	cout << "\nYou took " << time_taken << "seconds to complete the level";
	cout << "\nYour typing speed in words per minute = " << ((total * 60) / time_taken);
	cout << "\nYour percentage accuracy is " << ((total - mistakes) * 6.6667) << " %" << endl;
	if (((total - mistakes) * 6.6667) < 60 || ((total * 60) / time_taken) < 15)
	{
		int press;
		cout << "You performed poorly!!!\n";
		cout << "Either your speed was less than 15 words per minute or your accuracy is less than 60 %";
		cout << "Do you want to repeat this level or do you want to exit the programme?\n";
		cout << "If you want to repeat this level then press 1.\n";
		cout << "if you want to exit the programme press 0.";
		cin >> press;
		while (!(press == 0 || press == 1))
		{
			cout << "Wrong number entered.\n";
			cout << "If you want to repeat this level then press 1.\n";
			cout << "if you want to exit the programme press 0.\n";
			cin >> press;
		}
		if (press == 0)
		{
			system("pause");
		}
		else if (press == 1)
		{
			medium();
		}
	}
	else
	{
		int input;
		cout << "Congratulations! You perfomed good\n";
		cout << "Do you want to play hard level ? \n";
		cout << "If you want to play hard level then press 1.\n";
		cout << "if you want to exit the programme press 0.\n";
		cin >> input;
		while (!(input == 0 || input == 1))
		{
			cout << "Wrong number entered.\n";
			cout << "If you want to play medium level then press 1.\n";
			cout << "if you want to exit the programme press 0.\n";
			cin >> input;
		}
		if (input == 0)
		{
			system("pause");
		}
		else if (input == 1)
		{
			hard();
		}
	}
}
void easy()
{
	easy_rules(); // displaying the rules for easy category
	clock_t initial_time, final_time;
	system("color 0A");      // for green colour 
	int mistakes = 0, total = 10;
	string user_word, easywords[24] = { "table","mat","nose","shoe","life","copy","sports","bee","hard","small","half","sky","key","spare","dog","cat","door","trip","chair","laptop","rat","ball","movie","drama" };
	initial_time = clock();// will read and insert the microprocessor time at the start
	for (int x = 0; x < 10; x++)
	{
		srand((time(0)));
		int index = (rand() % 24);// generate a random number 
		cout << "enter the word : " << easywords[index] << "\n";
		cin >> user_word;
		if (user_word.length() < easywords[index].length())
		{
			mistakes += 1;
		}
		else if (user_word.length() > easywords[index].length())
		{
			mistakes += 1;
		}
		else if (user_word.length() == easywords[index].length())
		{

			for (int i = 0; i <= easywords[index].length(); i++)
			{
				if (user_word[i] != easywords[index][i])
				{
					mistakes += 1;
					break;
				}
			}
		}
	}
	final_time = clock();// will read and insert the final time after the loop has ended
	float time_taken((float)final_time - ((float)initial_time));// calculate the time taken in miliseconds
	time_taken = (time_taken / 1000);// to convert time into seconds
	cout << " Game Over !!!\n" << "You got " << total - mistakes << " words correct out of " << total;
	cout << "\nYou took " << time_taken << "seconds to complete the level";
	cout << "\nyour typing speed in words per minute = " << ((total * 60) / time_taken);//showing words per minute
	cout << "\nYour percentage accuracy is " << ((total - mistakes) * 10) << " %" << endl;// showing percentage accuracy

	if (((total - mistakes) * 10) < 60 || ((total * 60) / time_taken) < 15)// defining how the user performed
	{
		int press;
		cout << "You performed poorly!!!\n";
		cout << "Either your speed was less than 15 words per minute or your accuracy is less than 60 %.";
		cout << "Do you want to repeat this level or do you want to exit the programme?\n";
		cout << "If you want to repeat this level then press 1.\n";
		cout << "if you want to exit the programme press 0.";
		cin >> press;
		while (!(press == 0 || press == 1))
		{
			cout << "Wrong number entered.\n";
			cout << "If you want to repeat this level then press 1.\n";
			cout << "if you want to exit the programme press 0.\n";
			cin >> press;
		}
		if (press == 0)
		{
			system("pause");
		}
		else if (press == 1)
		{
			easy();
		}
	}
	else
	{
		int input;
		cout << "Congratulations! You perfomed good\n";
		cout << "\n";
		cout << "If you want to play medium level then press 1.\n";
		cout << "if you want to exit the programme press 0.\n";
		cin >> input;
		while (!(input == 0 || input == 1))
		{
			cout << "Wrong number entered.\n";
			cout << "If you want to play medium level then press 1.\n";
			cout << "if you want to exit the programme press 0.\n";
			cin >> input;
		}
		if (input == 0)
		{
			system("pause");
		}
		else if (input == 1)
		{
			medium();
		}
	}
}
int main()
{

	int select = menu();//calling menu function

	switch (select)
	{
	case 1:
		easy();//calling easy function
		break;
	case 2:
		medium();//calling medium function
		break;
	case 3:
		hard();//calling hard function
		break;
	}
}
