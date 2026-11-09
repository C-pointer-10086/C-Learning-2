#include<stdio.h>

	typedef struct you_number{
                int weight;
                char name[200];
        }you_number;

    	void  input(struct you_number lihua){
                printf("name is %s,weigh is %dkg\n",lihua.name,lihua.weight);
        }

int main(void){

	you_number lihua;

	printf("input name: \n");
	scanf("%s",lihua.name);
	printf("input weigh: \n");
	scanf("%d",&lihua.weight);
	input(lihua);
	return 0;
}
