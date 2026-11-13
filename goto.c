#include<stdio.h>
int main(void){
	printf("hhh\n");
	goto there;
	printf("vvv\n");
	there:
	printf("ccc\n");
	return 0;
}
