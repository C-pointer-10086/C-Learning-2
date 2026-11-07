#include<stdio.h>
#include"input.h"
#include"add.h"

void input(){
	int a,b;
	printf("输入一个数: ");
	scanf("%d %d",&a,&b);
	add(a,b);
}
