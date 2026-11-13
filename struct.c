#include<stdio.h>
	typedef union one{
		int a;
		int b;
	}one;
	typedef struct group{
		int number;
	}group;
	typedef struct he_name{
		char name[200];
	}he_name;
	typedef struct he_all{
		he_name mike;
	}he_all;

	typedef struct you_number{
                int weight;
                char name[200];
        }you_number;

    	void  input(struct you_number lihua){
                printf("name is %s,weigh is %dkg\n",lihua.name,lihua.weight);
        }

int main(void){

	you_number lihua;
	one two;
	two.a=100;
	printf("%d\n",two.a);
	two.b=200;
	printf("%d\n",two.b);
	printf("%d\n",two.a);
	he_all mike=(he_all) {.mike.name = "mike"};
	group student[10];

	for(int i=0;i<=9;i++){student[i].number=i;printf("%d\n",student[i].number);}

	printf("input name: \n");
	scanf("%s",lihua.name);
	printf("input weigh: \n");
	scanf("%d",&lihua.weight);
	input(lihua);
	printf("%s\n",mike.mike.name);
	return 0;
}
