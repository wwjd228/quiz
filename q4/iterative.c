/* FIXME: Implement! */
#include <stdio.h>
#include <stdlib.h>

#define MAX( i, j ) ( j > i )? j : i

int maxSubArray(int A[], int n)
{
    int max = A[0];
    int current = A[0];
    for ( int i = 1 ; i < n ; i++ ) {
        current = MAX(A[i], A[i] + current);
	max = MAX(max, current);
    }

    return max;
}

int main()
{
    int A[] = {-2, -3, 4, -1, -2, 5, 1};
    int size = 7;
    int sum = maxSubArray(A, size);
    printf("max SubArray sum : %d\n", sum);

    return 0;
}
