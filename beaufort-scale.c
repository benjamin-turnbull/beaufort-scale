#include <stdio.h>

int main (void) {
	int force;

    printf("Enter a wind force in knots: \n");
    scanf("%d", &force);

    if (force < 1) 
    	printf("Calm.");
    else if (force < 4)
    	printf("Light air.");
    else if (force < 28)
    	printf("Breeze.");
    else if (force < 48)
    	printf("Gale.");
    else if (force < 64)
    	printf("Storm.");
    else
    	printf("Hurricane.");
  

	return 0;
}