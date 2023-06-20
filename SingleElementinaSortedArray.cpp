#include <vector>

int singleNonDuplicate(std::vector<int>& arr) {

	// Left pointer
    int left = 0; 
	// Right pointer
    int right = arr.size() - 1;

    while (left < right) {

		 // Calculate the middle index
        int mid = left + (right - left) / 2;

        // Check if the middle index is even
        if (mid % 2 == 1) {

			// Adjust the middle index to be even
            mid--;
        }

        // Check if the middle element is equal to its next element
        if (arr[mid] != arr[mid + 1]) {

			// The single element is on the left side
            right = mid; 
        } 
		
		else {

			// The single element is on the right side
            left = mid + 2; 
        }
    }
    return arr[left]; // Return the single element
}
