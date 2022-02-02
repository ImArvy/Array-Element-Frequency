/*
#include <iostream>
#include <vector>

using namespace std;

void countFrequency(vector<int> myVector, int numOfElements) {
	// Mark every elements in the vector as unvisited.
	vector<bool> isVisited(numOfElements, false);

	// Iterate over the input vector.
	for (int i = 0; i < numOfElements; i++) {
		// Check if current element has already been visited and if so, skip it.
		if (isVisited[i] == true) {
			continue;
		}

		// Count number of times an element occurs.
		int currentCount = 0;
		for (int j = 0; j < numOfElements; j++) {
			if (myVector[i] == myVector[j]) {
				isVisited[j] = true;
				currentCount++;
			}
		}
		// Output the element and the number of times it occured in the vector.
		cout << "  " << myVector[i] << "\t" << " " << currentCount << endl;
	}
}

int main() {
	// Get an int value from the user that will determine the length of the vector.
	int vectorSize; // best 1, worst 1
	cout << "Please enter the desired number of elements in your vector." << endl; // best 1, worst 1
	cin >> vectorSize; // best 1, worst 1

	cout << "\n"; // best 1, worst 1
	
	int intToAdd = 0; // best 1, worst 1
	vector<int> inputVector; // best 1, worst 1
	for (int i = 0; i < vectorSize; i++) { // best 1, worst n
		cout << "Enter an integer to add to the vector: "; // best 0, worst n
		cin >> intToAdd; // best 0, worst n
		inputVector.push_back(intToAdd); // best 0, worst n
	}

	cout << "\n"; // best 1, worst 1

	cout << "Number Count" << endl; // best 1, worst 1

	countFrequency(inputVector, vectorSize); // best 1, worst 1

	return 0; // best 1, worst 1
}
*/