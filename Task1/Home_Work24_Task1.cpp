//﻿Task 1. Given a letter string that contains the sequence of 
//characters s0, ..., sn, ... 
//Calculate the length of the longest word in this sequence. 
//A word is a group of symbols that are arranged consecutiveand 
//distinct from spacesand punctuation marks.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = ".hello World";

	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] = char(46))
		{
			str[i + 1] = toupper(str[i + 1]);
			break;
		}
	}

	cout << str << endl;
}
