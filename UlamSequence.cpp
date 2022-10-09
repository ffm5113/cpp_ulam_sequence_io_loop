// Source(s) of logic assistance:  
// Gaddis, T. (2018). Starting out with C++: From control structures through objects. Pearson. 
// https://docs.microsoft.com/en-us/cpp/standard-library/iomanip-functions?view=msvc-170

#include <iostream> // To use cin/cout
#include <iomanip>  // To access setw for output width
#include <cmath>    // To access power function for calculations
using namespace std;

// Constant Variable Initialization
const string TITLE = "Ulam Sequence Program";
const string AUTHOR_LINE = "By Forrest Moulin";

int main()
{
	int userInput = 0;

	cout << TITLE << endl
		<< AUTHOR_LINE << endl << endl;

	// Loop until user enters integer >= 2
	while (userInput < 2)
	{
		cout << "Please enter an integer >= 2:" << endl << endl;

		cin >> userInput;

		if (userInput < 2)
		{
			cout << endl << "Invalid entry." << endl;
		}
		else {
			cout << endl << "The Ulam Sequence starting from " << userInput << ":" 
				<< endl << userInput << " ";
			while (userInput != 1) {
				// Even values
				if ((userInput % 2) == 0)
				{
					userInput /= 2;
				}
				// Odd values
				else
				{
					userInput = userInput * 3 + 1;
				}
				// Print value on each while iteration
				cout << userInput << " ";
			}
			cout << endl;
			// Break the loop once completed
			break;
		}
	}
}
/*
* CONSOLE OUTPUT
* Ulam Sequence Program
* By Forrest Moulin
*
* Please enter an integer >= 2:
*
* -1
*
* Invalid entry.
* Please enter an integer >= 2:
*
* 0
*
* Invalid entry.
* Please enter an integer >= 2:
*
* 20
*
* The Ulam Sequence starting from 20:
* 20 10 5 16 8 4 2 1
*/
