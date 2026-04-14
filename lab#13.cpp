// 4 / 14 / 2026
//Daniel Suarez
// This program that performs the Bubble Sort on a vector of ints. It should display the vector contents before it begins the sort, and again after each pass of the sort, thus showing the sort as it progresses

#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
// This program that performs the Bubble Sort on a vector of ints. It should display the vector contents before it begins the sort, and again after each pass of the sort, thus showing the sort as it progresses

// Function Prototypes
void fillVector(vector<int>& vec);
void bubbleSort(vector<int>& vec);
// This program that performs the Bubble Sort on a vector of ints. It should display the vector contents before it begins the sort, and again after each pass of the sort, thus showing the sort as it progresses

int main() 
{
	// Create a vector s 25
	vector<int> myNumbers(25);

	// Fill it with random integers by calling function
	fillVector(myNumbers);

	// Sort the vector
	bubbleSort(myNumbers);

	return 0;
}

// Fill the vector with random integers between 0 - 99
void fillVector(vector<int>& vec)
{
	// Random number generator using the current time
	srand(time(0));

	for (int i = 0; i < vec.size(); i++)
	{
		
		vec[i] = rand() % 100;
	}
}

// Perform Bubble Sort and print

void bubbleSort(vector<int>& vec)
{
	// Display the vector before it beggins the sort
	cout << "Before sorting:" << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		// each number takes up exactly 3 spaces
		cout << setw(3) << vec[i];
	}
	cout << endl << endl;

	// Bubble Sort Logic
	int n = vec.size();
	bool swapped;

	for (int i = 0; i < n - 1; i++)
	{

		//Keep track of whether we made a swap in this pass
		swapped = false;

		for (int j = 0; j < n - i - 1; j++)
		{

			if (vec[j] > vec[j + 1])
			{
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
				swapped = true;
			}
		}

		//Display the contents each pass
		cout << "Pass " << i + 1 << ":" << endl;
		for (int k = 0; k < vec.size(); k++)
		{
			cout << setw(3) << vec[k];
		}
		cout << endl;

		
	}
}