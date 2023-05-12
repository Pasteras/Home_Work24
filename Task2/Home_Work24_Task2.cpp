/*Task 2.Given a letter string that
contains the sequence of characters s0, ...,sn, ...
If the word is written after a period, then replace the first
letter in this word with the appropriate uppercase letter.*/

#include <iostream>
#include <string.h>
#include <cstring>
#include <string>

using namespace std;

void Str(string* slova, string &max);
void ShowStr(string* slova);

int main()
{
    int len;
    string slova[]{"Car", "Table", "T-short", "Dollar"};
    string max = slova[0];
    ShowStr(slova);
    Str(slova, max);
}

void Str(string* slova, string &max)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (slova[i].length() > max.length())
            {
                max = slova[i];
            }
        }
    }
    cout << "The longest word: " << max << endl;
}

void ShowStr(string* slova)
{
    for (int i = 0; i < 4; i++)
    {
        cout << slova[i] << endl;
    }
    cout << endl << endl;
}