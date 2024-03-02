/*
CH-230-A
a5 p9.c
Aryan Panicker
apanicker@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

// Function to dynamically allocate memory for a 3D array of integers
int*** create3DArray(int rows, int cols, int depth) {
    int*** array = (int***)malloc(depth * sizeof(int**));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < depth; i++) {
        array[i] = (int**)malloc(rows * sizeof(int*));

        if (array[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        for (int j = 0; j < rows; j++) {
            array[i][j] = (int*)malloc(cols * sizeof(int));

            if (array[i][j] == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
        }
    }

    return array;
}

void read3DArray(int*** array, int rows, int cols, int depth) {
    for (int k = 0; k < depth; k++) {
        printf("Enter elements for section %d:\n", k + 1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &array[k][i][j]);
            }
        }
    }
}

// Function to print the 2D sections parallel to the "XOY axis"
void print2DSections(int*** array, int rows, int cols, int depth) {
    for (int k = 0; k < depth; k++) {
        printf("Section %d:\n", k + 1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", array[k][i][j]);
            }
            printf("\n");
        }
    }
}

// Function to deallocate memory for the 3D array
void free3DArray(int*** array, int rows, int cols, int depth) {
    for (int k = 0; k < depth; k++) {
        for (int i = 0; i < rows; i++) {
            free(array[k][i]);
        }
        free(array[k]);
    }
    free(array);
}

int main() {
    int rows, cols, depth;
    scanf("%d %d %d", &rows, &cols, &depth);
    int*** array = create3DArray(rows, cols, depth);
    read3DArray(array, rows, cols, depth);
    print2DSections(array, rows, cols, depth);
    free3DArray(array, rows, cols, depth);
    return 0;
}
