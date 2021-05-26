#include <bits/stdc++.h>
#include <iostream>
bool checksubset(int array1[], int array2[],
              int x, int y)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            if (array2[i] == array1[j])
                break;
        }
 
        if (j == x)
            return 0;

    }
    return 1;
}
int main()
{

const int SIZE1=5;
const int SIZE2=10;
int numbers1[SIZE1] = {2, 3, 5, 9, 10};
int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

    if (checksubset(numbers2, numbers1, SIZE2, SIZE1))
        printf("numbers1 is a subset of numbers2 ");
    else
        printf("numbers1 is not a subset of numbers2");
    return 0;
}