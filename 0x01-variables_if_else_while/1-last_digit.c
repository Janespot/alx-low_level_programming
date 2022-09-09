#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include<stdio.h>


/* betty style doc for function main goes there */

int main(void)

{

		int n;
		int r;


			srand(time(0));

				n = rand() - RAND_MAX / 2;
				r = n % 10;
					/* your code goes there */
				printf("Last digit of %d is ",n);
				if (r > 5){
					printf("and is greater than 5");
				}
				else if (r == 0){
					printf("and is 0");
				}
				else{
					printf("and is less than 6 and not 0);
				}
				printf("\n");

					return (0);

}
