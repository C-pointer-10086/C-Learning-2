#include<stdio.h>
#define NUMBER1 10086
#define NUMBER2 10087
#define NUMBER3 10088
#define MK_ID(c) i##c
#define PR(b) printf("%d\n",b)
#define CHOICE 0
int main(void){
	int MK_ID(1)=NUMBER1;
	int MK_ID(2)=NUMBER2;
	int MK_ID(3)=NUMBER3;
	#if CHOICE
		PR(MK_ID(1));
		PR(MK_ID(2));
		PR(MK_ID(3));
	#endif
	printf("%s",__FILE__);
	return 0;
}
