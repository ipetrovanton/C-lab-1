#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;
    
	printf("Enter height(feet'inches): ");
	scanf("%d'%d", &feet, &inches);
	printf("%.1fcm", convert(feet, inches));
    
	return 0;
}
