#include <iostream>
#include <string>

using namespace std;

int main()
{
	//defines the different variables needed for the program
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;

	//starts the program with an intro
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	//gets the input from the user and sets it to the variable testToAnalyze
	getline(cin, textToAnalyze);

	//for loop for every character in the sentence
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//checks for vowels
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//this was --, but it should of been ++, which it is now, also adds 1 to vowels
			++vowels;
		}
		//checks for consonanats
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			//adds 1 to consonants, this was commented out so it wouldn't run
			++consonants;
		}
		//checks for numbers
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			//adds 1 to digits
			++digits;
		}
		//checks for spaces
		else if (textToAnalyze[i] == ' ')
		{
			//adds 1 to spaces
			++spaces;
		}
		//anything else is unknown
		else
		{
			//adds 1 to unknown characters
			++unknownCharacters;
		}
	}

	//sets length to length of sentence, and the check sum equal to all the parts
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	//displays the different varaibles in the console
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//checks if the number of characters is equal to the length, if so, it tells you good job, if not, something is wrong
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	//pauses the console/code hunter and asks for input to resume
	system("pause");

	return 0;
}
