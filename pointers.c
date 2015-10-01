#include <stdio.h>


int main(int argc, char *argv[]){
	
	int i;
	i = 1;
	int *p = &i;
	
	printf("i= %x\n", i);
	printf("*p = %i\n", *p);
	printf("&i = 0x%p\n", &i);
	printf("p = %p\n", p);
	return 0; 
}
