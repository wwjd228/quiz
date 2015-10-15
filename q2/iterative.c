/* FIXME: Implement! */
#include <stdio.h>
#include <stdlib.h>

char smallest_character(char str[], char c)
{
    unsigned size = 5;
    unsigned max = size;
    unsigned min = 0;
    int smallest = -1;
    unsigned mid;
    while ( min < max ) {
        mid = (min + max) / 2;
	if (str[mid] == c) {
	    while (mid < size) {
	        if (str[mid] > c)
		    return str[mid];

		mid++;
	    }
	}

        else if ( str[mid] < c ) 
	    min = mid + 1;

	else {
	    max = mid;
	    smallest = mid;
	}
    }
    
    if (smallest == -1)
        return str[0];

    else
        return str[smallest];
}
int main()
{
    char str[] = {'c', 'f', 'j', 'p', 'v'};
    char smallest_char = smallest_character(str, 'a');
    printf("The smallest character : %c\n", smallest_char);

    return 0;
}
