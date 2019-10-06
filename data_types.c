#include <stdio.h>
/*Basic program demonstrating primitive data types.
Create a main function with some variables with values
stating what their data types are. Then create print
functions for each one.*/

int main()
{
	char izard = 'A';
	float current_gpa = 3.88;
	int yl = 3;
	unsigned int oc  = 10;
	short int yc= 8;
	long long int ea = 4540000000;
	unsigned long long int ua = 130722000000;
	
	printf("Hello World!\n");
	
	//printing char with size of string
	printf("izard = %c\n",izard);
	
	//printing a float
	printf("My current gpa is %f.\n",current_gpa);
	
	//printing a int
	printf("If I pass all my classes I should only have %d years left.\n", yl);
	
	//printing a unsigned int
	printf("My oldest child is %u years old.\n",oc);
	
	//printing a short int
	printf("My youngest child is %hd years old.\n",yc);
	
	//printing a long long int
	printf("The earth is roughly %lld years old.\n",ea);
	
	//printing a unsigned long long int
	printf("The universe is roughly %llu years old.\n",ua);
	
	return 0;
	
}