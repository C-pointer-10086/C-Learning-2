#include<stdio.h>
int main(void){
	typedef struct you_number{
		int weight;
		char name[200];
	}you_number;

	you_number lihua;

	printf("input name: \n");
	scanf("%s",lihua.name);
	printf("input weigh: \n");
	scanf("%d",&lihua.weight);

	printf("name is %s,weigh is %dkg\n",lihua.name,lihua.weight);
	return 0;
}
