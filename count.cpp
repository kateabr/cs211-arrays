#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i, nwhite, nother;
	i = 0;
	const int size = 10;
	int ndigit[size];
	int ndigit_length = 0;
	nwhite = nother = 0;

	char c;
	while ((c = src[i++]) != 0)
		if (c >= '0' && c <= '9')
			ndigit[ndigit_length++] = c - '0';
		else
		{
			if (c == ' ')
				++nwhite;
			else
				++nother;
		}
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < ndigit_length; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl;
}
