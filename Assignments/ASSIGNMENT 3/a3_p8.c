#include <stdio.h>
// Function to calculate the sum of an array
float calculateSum(float arr[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the avg. of an array
float calculateAverage(float arr[], int size) {
    if (size == 0) {
        return 0.0; // To avoid division by zero
    }
    float sum = calculateSum(arr, size);
    return sum / size;
}

int main() {
    float numbers[10];
    int count = 0;
    float num;
    printf("Enter up to 10 float numbers (enter -99.0 to stop):\n");
    while (count < 10) {
        scanf("%f", &num);
        if (num == -99.0) {
            break;
        }
        numbers[count] = num;
        count++;
    }
    float sum = calculateSum(numbers, count);
    float average = calculateAverage(numbers, count);

    printf("Sum of entered numbers (excluding -99.0): %.2f\n", sum);
    printf("Avg. of entered numbers (excluding -99.0): %.2f\n", average);

    return 0;
}
