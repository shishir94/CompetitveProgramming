/*
Bucket Sort :-
In this elements are stored in different buckets and then individual bucket is sorted and concenatated.

Size of bucket = (maixmum element in array - minimum element in array)/number of elements
bucket index of each element = (arr[i]-minimum element)/size of bucket.

After this each bucket is sorted individually using any sorting algorithm.


*/



/*
Radix Sort :-
In this we make 10 buckets if the elements are in the form of integers and 26 if the elements are string.
We make the size of each element equal by inserting 0 at the beginning.
We start from LSB till MSB is reached. We place each element in a bucket based on number at that index.
Finally after all these operations we get a sorted array.

Time Complexity :- 
*/
#include <iostream>
#include <vector>

// Function to find the maximum value in an array
int findMax(const std::vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to perform counting sort based on a specific digit
void countingSort(std::vector<int>& arr, int exp) {
    int n = arr.size();
    std::vector<int> output(n);
    int count[10] = {0};

    // Count occurrences of each digit
    for (int i = 0; i < n; ++i) {
        count[(arr[i] / exp) % 10]++;
    }

    // Modify the count array to represent the position of each digit in the output
    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];
    }
    for (int num1 : count) {
        std::cout << num1 << " ";
    }
    std::cout << std::endl;

    // Build the output array
    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        std::cout<<count[(arr[i] / exp) % 10] - 1<<" ";
        count[(arr[i] / exp) % 10]--;
    }
    std::cout<<std::endl;
    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Function to perform radix sort
void radixSort(std::vector<int>& arr) {
    int max = findMax(arr);

    // Perform counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

int main() {
    std::vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    radixSort(arr);
    
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
