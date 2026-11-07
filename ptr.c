#include<stdio.h>
int plus(int a,int b){return a+b;}
int add(int a,int b){return a+b+b;}
static inline void greet(int (*one)(int,int),int x,int y){
	printf("%d\n",(*one)(x,y));
}
int (*ptr[2])(int ,int)={plus,add};
int main(void){
	greet(ptr[0],5,3);
	greet(ptr[1],5,3);
	return 0;
}

