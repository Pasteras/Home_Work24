/*﻿Task 1. Given a letter string that contains the sequence of 
characters s0, ..., sn, ... 
Calculate the length of the longest word in this sequence. 
A word is a group of symbols that are arranged consecutiveand 
distinct from spacesand punctuation marks.*/

#include <iostream>
#include <string>

using namespace std;

void Str1(string &str);

int main()
{
	string str = ".hello World";
	cout << str << endl;
	Str1(str);
}

void Str1(string &str)
{
	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] = char(46))
		{
			str[i + 1] = toupper(str[i + 1]);
			break;
		}
	}
	cout << endl << str << endl;
}