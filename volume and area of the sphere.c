/*Area and volume of sphere*/
#include <stdio.h>

int main() {
    int r;//initialising the variable i.e local variables
	float pi, area, volume;
  
	pi=3.142;
  
	printf("Enter the radius\t");
  
	scanf("%d", &r);
  
  
	printf("\nArea of sphere=4*pi*r*r");
  
	area=4*pi*r*r;
  //calculatenthe radius
  
	printf("\nVolume of a sphere=1.333*pi*r*r*r");
  
	volume=1.333*pi*r*r*r;
  
	printf("\narea=%f", area);
  
	printf("\nvolume=%f", volume);
  
    return 0;
  
  }
