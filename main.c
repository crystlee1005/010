#include <stdio.h>
#include <stdlib.h>
#define size5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//array declaration
	
	int grade[5];
	int i, average, sum;
	
	//value input
	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	
	for ( i=0; i<5; i++)
	sum=sum+grade[i];
	average=sum/5;
	
	  printf("the average is : %i\n", average);
	return 0;
}
