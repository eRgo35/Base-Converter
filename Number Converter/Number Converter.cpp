// Start 8:38PM 7/9/2019

// Finish 9:09 7/9/2019

/*
 * Michael Czyz
 * GNU v3
 * Available at github.com/eRgo35/Base-Converter
 * And also on YouTube
 */

// Some includes
#include <iostream>
#include <string.h>
#include <stdio.h>


// I don't like typing std:: meh;
using namespace std;

// Function Time!

// Some logic to convert 10 to A and so on..
char reVal(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

// Function to reverse a string
void strev(char* str)
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

// Converter
char* decToAny(char res[], int base, int number)
{
	int index = 0;

	while (number > 0)
	{
		res[index++] = reVal(number % base);
		number /= base;
	}
	res[index] = '\0';

	strev(res);

	return res;
}

int main() {
	char again;
	do {
		// Declarations
		int number, base; // Max 10 digits possible :(
		char res[100];

		// Retrieve information
		cout << "Enter a number: ";
		cin >> number;
		cout << "Enter a base: ";
		cin >> base;

		// Convert a number
		printf("Equivalent of %d in base %d is %s\n", number, base, decToAny(res, base, number));

		// Close a program
		cout << "Do you want to quit? (y/n): ";
		cin >> again;

	} while (again != 'y');
	return 0;
}

