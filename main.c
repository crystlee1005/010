#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//array declaration
	
	int grade[SIZE];
	int i, average, sum;
	sum = 0;
	
	printf("input %i scores\n", SIZE);
	
	
	for ( i=0; i<SIZE; i++)
	{
	scanf("%d", &grade[i]);
	sum += grade[i];
}
	
	
	for (i=0; i<SIZE; i++)
	 printf("grade[%d] = %d\n", i, grade[i]);
	 average=sum/SIZE;
	 
	 printf("average is %i\n", average);
	return 0;
}
