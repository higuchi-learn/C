/* p5-1.c */
#include<stdio.h>
int main(){
	int loop = 0;

	printf("Loop Start\n");

	printf("> Loop Process...\n");
	printf("> Here, loop = %d\n",loop);
	printf("> Loop End\n");

	loop = loop+1;
	printf("> Loop Process...\n");
	printf("> Here, loop = %d\n",loop);
	printf("> Loop End\n");

	loop = loop+1;
	printf("> Loop Process...\n");
	printf("> Here, loop = %d\n",loop);
	printf("> Loop End\n");

	printf("Finished.\n\n");
	printf("After loop, loop = %d\n", loop);

	return 0;
}
