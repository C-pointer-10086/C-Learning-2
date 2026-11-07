#include<stdio.h>
#include<math.h>
int main(void){
	double a,b;
	printf("输入底数和幂数: ");
	scanf("%lf,%lf",&a,&b);
	for(int i=1;i<=(int)b;i++){
		printf("第%d次运算%f\n",i,pow(a,i));
	}
return 0;
}
