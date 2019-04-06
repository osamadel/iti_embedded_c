/* find the most frequent number in an array entered by user */
#include <stdio.h>

int main(void) {
    int n = 0;
    printf("Please enter the size of your array: ");
    scanf("%d", &n);
    int arr[n], max = 0, count = 0, maxNum = 0;

    for (int i=0; i<n; i++) {
        printf("Enter number[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n-1; i++) {
        count = 1;
        /* scan arr[i] against all n-i numbers, each time it finds a match, increment count */
        for (int j=i+1; j<n; j++) {
            if (arr[i] == arr[j])
                count++;
            
        }
        /* check if arr[i] is the most occuring number so far, if true, save the count and its value */
        if (max < count) {
            max = count;
            maxNum = arr[i];
        }
    }

    printf("The most frequent number in your array is %d, occured %d time(s)", maxNum, max);
    
    return 0;
}
