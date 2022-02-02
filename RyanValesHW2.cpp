/*
Ryan Vales
CSCI 3400
HW2
*/
#include<iostream>

using namespace std;

// Function getArraySize takes user input for size of array and returns value as an int 
int getArraySize() {
	int n; // 1
	cout << "Please enter the size of the array: "; // 1
	cin >> n; // 1
	return n;
}

// Function fillInputArray takes user input for values in array and returns array as an int*
int* fillInputArray(int n) {
	int* arr = new int[n]; // 1
	for (int i = 0; i < n; i++) { // n
		cout << "Enter an integer to add to the array: "; // n
		cin >> arr[i]; // n
	}
	return arr; // 1
}

// Function fillCountedArray initializes values in array to zero and returns array as int*
int* fillCountedArray(int n) {
	int* arr = new int[n]; // 1
	for (int i = 0; i < n; i++) { // n
		arr[i] = 0; // n
	}
	return arr; // 1
}

// Function countFrequency counts how many times each element in an array occurs and outputs the value of the element and its frequency
void countFrequency(int inputArr[], int countedArr[], int n) {
	cout << "Number Count" << endl; // Output formatting

	int count; // Declare temp variable count to track the frequency of elements in the array
	for (int i = 0; i < n; i++) { // Iterate over inputArr and countedArr
		if (countedArr[i] == 0) { // If the element at index i has not yet been counted
			count = 0; // Reset the frequency counter to 0
			for (int j = 0; j < n; j++) { // Iterate over inputArr and countedArr to check if value at index i from outer loop repeats itself at any index j in inner loop
				if (inputArr[i] == inputArr[j]) { // If the value at index i repeats itself at index j
					count += 1; // Increment the frequency counter
					countedArr[j] = 1; // Assign value of 1 to element in countedArr at index j to note it has been counted
				}
			}
			cout << "  " << inputArr[i] << "\t" << " " << count << endl; // After exiting the inner loop, output the value at inputArr[i] and how many times it occurs
		}
	}
}

// Main function
int main() {
	int numOfElements = getArraySize(); // 1
	
	int* inputArray = fillInputArray(numOfElements); // 1
	int* countedArray = fillCountedArray(numOfElements); // 1

	countFrequency(inputArray, countedArray, numOfElements); // 1

	delete[] inputArray, countedArray; // 1

	return 0; // 1
}
