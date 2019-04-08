#include<stdio.h>

struct NumFreq MaxFreq(int *, int);

struct NumFreq {
    int num;
    int freq;
};

int main(void) {
    int a[] = {1, 2, 3, 1, 4, 5, 6, 7, 3, 8, 5, 3, 1, 1, 3, 4, 5, 7, 9, 9};
    struct NumFreq mostFreqNum = MaxFreq(a, 20);
    printf("arr: ");
    for (int i=0; i<20; i++) printf("%d ", a[i]);
    printf("\n================\n\n");
    printf("Most Frequent Number: %d\nFrequency: %d\n", mostFreqNum.num, mostFreqNum.freq);
    return 0;
}

struct NumFreq MaxFreq(int * a, int len) {
    int maxFreq = 0;
    int maxNum = 0;
    for (int i=0; i<len; i++) {
        int freq = 1;
        for (int j=i+1; j<len; j++) {
            if (a[i] == a[j]) freq++;
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            maxNum = a[i];
        }
    }
    struct NumFreq x = {maxNum, maxFreq};
    return x;
}