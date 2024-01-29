#include <iostream>
using namespace std;

// Function to find the intersection of two arrays
void FindIntersection(int arr1[], int arr2[], int temp[],
					int m, int n, int& k)
{
	int i = 0, j = 0;
	// vector to store the intersection of the arr1[] and
	// arr2[]
	while (i < m && j < n) {
		// ith element can not be a common element
		if (arr1[i] < arr2[j]) {
			i++;
		}

		// jth element can not be a common element
		else if (arr2[j] < arr1[i]) {
			j++;
		}

		// if arr1[i] == arr2[j]
		else {
			temp[k] = arr1[i];
			i++;
			j++;
			k++;
		}
	}
}

int main()
{
	int n1, n2, n3;

	cout << "Enter the number of elements in array 1: ";
	cin >> n1;
	int arr1[n1];

	cout << "Enter " << n1 << " elements for array 1:\n";
	for (int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}

	cout << "Enter the number of elements in array 2: ";
	cin >> n2;
	int arr2[n2];

	cout << "Enter " << n2 << " elements for array 2:\n";
	for (int i = 0; i < n2; i++) {
		cin >> arr2[i];
	}

	cout << "Enter the number of elements in array 3: ";
	cin >> n3;
	int arr3[n3];

	cout << "Enter " << n3 << " elements for array 3:\n";
	for (int i = 0; i < n3; i++) {
		cin >> arr3[i];
	}

	// temp array to store the common elements of arr1 and
	// arr2 arrays
	int temp[200000];

	// ans array to store the common elements of temp and
	// arr3 arrays (i.e common elements of all 3 arrays)
	int ans[200000];

	int k = 0;

	// function call to find the temp array
	FindIntersection(arr1, arr2, temp, n1, n2, k);
	int tempSize = k;
	k = 0;

	// function call to find the ans array.
	FindIntersection(arr3, temp, ans, n3, tempSize, k);
	cout << "Common elements present in arrays are : \n";

	for (int i = 0; i < k; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}
output
Enter the number of elements in array 1: 3
Enter 3 elements for array 1:
1 2 3
Enter the number of elements in array 2: 3
Enter 3 elements for array 2:
2 3 4
Enter the number of elements in array 3: 3
Enter 3 elements for array 3:
3 4 5
Common elements present in arrays are :
3

