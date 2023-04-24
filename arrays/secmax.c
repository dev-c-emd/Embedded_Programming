#include <stdio.h>

int find_second_max(int arr[], int size) {
    int max1 = arr[0];
    int max2 = arr[1];
    
    for (int i = 2; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    
    return max2;
}

int main() {
    int arr[] = {1, 3, 5, 2, 7, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int second_max = find_second_max(arr, size);
    
    printf("The second maximum element is %d\n", second_max);
    
    return 0;
}
