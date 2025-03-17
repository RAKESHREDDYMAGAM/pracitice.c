#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int key = 30;
    int size = sizeof(a) / sizeof(a[0]);
    
    int index = binarySearch(a, size, key);
    
    if (index != -1) {
        printf("Key found at index %d", index);
    } else {
        printf("Key not found");
    }
    
   return 0;
}
