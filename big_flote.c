#include<stdio.h>
#include<ctype.h>
#include<string.h>

int number[4000];
int len;
void input_conversion(char input[]){
	len=0;
	int start=0;
	if(input[0]=='+'||input[0]=='-'){start=1;}
	for(int i=strlen(input)-1;i>=start;i--){
		 number[len]=input[i]-'0';
		len++;
	}
}

int verify_legitimacy(char input[]){
	int start=0;

	if((input[0]=='-'||input[0]=='+')&&input[1]=='\0'){return 1;}

	if(input[0]=='-'||input[0]=='+'){start=1;}
	for(int i=start;input[i]!='\0';i++){
		if(!isdigit((unsigned char)input[i])){return 1;}
	}
	return 0;
}

void multiplication(int m[],int input[]){
	printf("\n乘法没做好");
}//乘法

void addition(int m[],int input[]){printf("\n加法没做好");}//加法
void division(int m[],int input[]){printf("\n除法没做好");}//除法
void subtraction(int m[],int input[]){printf("\n减法没做好");}//减法

void(*operation[4])(int[],int[])={multiplication,addition,division,subtraction};
int main(void){
	char input[1000];
	int choice;
	int walid=0;
	int num[1]={1};
	do{
		printf("输入一个数字:");
		scanf("%999s",input);
	}while(verify_legitimacy(input)==1);

	input_conversion(input);

	for(int i=len-1;i>=0;i--){
		printf("%d ",number[i]);
	}
	do{
		printf("输入要运行的计算，1乘法，2加法，3除法，4减法: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:(*operation[0])(num,num);break;
			case 2:(*operation[1])(num,num);break;
			case 3:(*operation[2])(num,num);break;
			case 4:(*operation[3])(num,num);break;
			default:walid=1;
		}
	}while(walid==1);
	return 0;
}


