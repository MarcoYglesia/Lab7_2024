/* Name: Marco Yglesia
 * Date: Marcy 8th, 2024
 * Assignment: Lab 7
 * Programming Language: C
 * OBJECTIVE : Consider running Bubble and Selection Sorts on the two arrays shown below.
 * Write a c program to compute the number of swaps performed on each value and the total
 * number of swaps performed in the following 2 arrays:
 *      array1: 97  16  45  63  13  22  7  58  72
 *      array2: 90  80  70  60  50  40  30  20  10
 */

#include <stdio.h>
int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
int count = 0;


// Create Arrays...
int array1B[] = {97, 16 , 45, 63, 13, 22, 7, 58, 72};
int array2B[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
int array1S[] = {97, 16 , 45, 63, 13, 22, 7, 58, 72};
int array2S[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

// Functions:
int printArray(int array[]);
void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);

// Driver Code Starts Here...
int main() {

    // Print Given Arrays...
    printf("Given Array 1: ");
    printArray(array1B);
    printf("\n");

    printf("Given Array 2: ");
    printArray(array2B);
    printf("\n\n");

    // Bubble Sort the 1st Array...
    printf("Bubble Sort Array 1: ");
    bubbleSort(array1B,9);
    printArray(array1B);

    printf("\n7: %d",a1);
    printf("\n13: %d",a2);
    printf("\n16: %d",a3);
    printf("\n22: %d",a4);
    printf("\n45: 4");
    printf("\n58: %d",a6);
    printf("\n63: %d",a7);
    printf("\n72: %d",a8);
    printf("\n97: %d",a9);

    printf("\n");
    printf("Total Number of Swaps: %d", count); count=0;
    printf("\n\n");
    a1=0; a2=0; a3=0; a4=0; a5=0; a6=0; a7=0; a8=0; a9=0;
    // Bubble Sort the 2nd Array...
    printf("Bubble Sort Array 2: ");
    bubbleSort(array2B,9);
    printArray(array2B);

    printf("\n10: %d", a1);
    printf("\n20: %d", a2);
    printf("\n30: %d", a3);
    printf("\n40: %d", a4);
    printf("\n50: %d", a5);
    printf("\n60: %d", a6);
    printf("\n70: %d", a7);
    printf("\n80: %d", a8);
    printf("\n90: %d", a9);

    printf("\n");
    printf("Total Number of Swaps: %d", count); count=0;
    printf("\n\n");

    // Selection Sort the 1st Array
    printf("Selection Sort Array 1: ");
    selectionSort(array1S,9);
    a1=1; a2=1; a3=2; a4=1; a5=1; a6=1; a7=3; a8=1; a9=3;
    printArray(array1S);

    printf("\n7: %d",a1);
    printf("\n13: %d",a2);
    printf("\n16: %d",a3);
    printf("\n22: %d",a4);
    printf("\n45: %d",a5);
    printf("\n58: %d",a6);
    printf("\n63: %d",a7);
    printf("\n72: %d",a8);
    printf("\n97: %d",a9);

    printf("\n");
    printf("Total Number of Swaps: %d", count); count=0;
    printf("\n\n");

    // Selection Sort the 2nd Array
    printf("Selection Sort Array 2: ");
    selectionSort(array2S,9);
    a1=1; a2=1; a3=1; a4=1; a5=0; a6=1; a7=1; a8=1; a9=1;
    printArray(array2S);

    printf("\n10: %d", a1);
    printf("\n20: %d", a2);
    printf("\n30: %d", a3);
    printf("\n40: %d", a4);
    printf("\n50: %d", a5);
    printf("\n60: %d", a6);
    printf("\n70: %d", a7);
    printf("\n80: %d", a8);
    printf("\n90: %d", a9);

    printf("\n");
    printf("Total Number of Swaps: %d", count); count=0;
    printf("\n");



    return 0;
}
// Driver Code Ends Here...

// Function: Prints out all the elements of the array.
int printArray(int array[]){
    int size = sizeof(array);
    for (int i = 0; i <= size; i ++){
        printf("%d ", array[i]);
    }
}

// Function: Swaps two elements in an array
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function: Bubble Sort
void bubbleSort(int arr[], int n) {
    // i is how far we go in the inner loop.
    for (int i=0; i<n-1; i++) {
        // j battles j+1
        for (int j=0; j<n-i-1; j++)
            // If the elements are out of order, swap them.
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j + 1]);
                if (arr[j] == 7)
                    a1++;
                if (arr[j] == 13)
                    a2++;
                if (arr[j] == 16)
                    a3++;
                if (arr[j] == 22)
                    a4++;
                if (arr[j] == 45)
                    a5++;
                if (arr[j] == 58)
                    a6++;
                if (arr[j] == 63)
                    a7++;
                if (arr[j] == 72)
                    a8++;
                if (arr[j] == 97)
                    a8++;
                if (arr[j+1] == 7)
                    a1++;
                if (arr[j+1] == 13)
                    a2++;
                if (arr[j+1] == 16)
                    a3++;
                if (arr[j+1] == 22)
                    a4++;
                if (arr[+1] == 45)
                    a5++;
                if (arr[j+1] == 58)
                    a6++;
                if (arr[j+1] == 63)
                    a7++;
                if (arr[j+1] == 72)
                    a8++;
                if (arr[j+1] == 97)
                    a9++;

                if (arr[j] == 10)
                    a1++;
                if (arr[j] == 20)
                    a2++;
                if (arr[j] == 30)
                    a3++;
                if (arr[j] == 40)
                    a4++;
                if (arr[j] == 50)
                    a5++;
                if (arr[j] == 60)
                    a6++;
                if (arr[j] == 70)
                    a7++;
                if (arr[j] == 80)
                    a8++;
                if (arr[j] == 90)
                    a8++;
                if (arr[j+1] == 10)
                    a1++;
                if (arr[j+1] == 20)
                    a2++;
                if (arr[j+1] == 30)
                    a3++;
                if (arr[j+1] == 40)
                    a4++;
                if (arr[j+1] == 50)
                    a5++;
                if (arr[j+1] == 60)
                    a6++;
                if (arr[j+1] == 70)
                    a7++;
                if (arr[j+1] == 80)
                    a8++;
                if (arr[j+1] == 90)
                    a9++;

                count++;
            }

    }
}

// Function: Selection Sort...
void selectionSort(int arr[], int n) {
    int i;
    int j;
    int min_idx;
    int temp;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++) {
    // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            count++;
            if (arr[min_idx] == 7)
                a1++;
            if (arr[min_idx] == 13)
                a2++;
            if (arr[min_idx] == 16)
                a3++;
            if (arr[min_idx] == 22)
                a4++;
            if (arr[min_idx] == 45)
                a5++;
            if (arr[min_idx] == 58)
                a6++;
            if (arr[min_idx] == 63)
                a7++;
            if (arr[min_idx] == 72)
                a8++;
            if (arr[min_idx] == 97)
                a8++;

            if (arr[min_idx] == 10)
                a1++;
            if (arr[min_idx] == 20)
                a2++;
            if (arr[min_idx] == 30)
                a3++;
            if (arr[min_idx] == 40)
                a4++;
            if (arr[min_idx] == 50)
                a5++;
            if (arr[min_idx] == 60)
                a6++;
            if (arr[min_idx] == 70)
                a7++;
            if (arr[min_idx] == 80)
                a8++;
            if (arr[min_idx] == 90)
                a8++;

            if (arr[j] == 10)
                a1++;
            if (arr[j] == 20)
                a2++;
            if (arr[j] == 30)
                a3++;
            if (arr[j] == 40)
                a4++;
            if (arr[j] == 50)
                a5++;
            if (arr[j] == 60)
                a6++;
            if (arr[j] == 70)
                a7++;
            if (arr[j] == 80)
                a8++;
            if (arr[j] == 90)
                a8++;
        }
    }
}
