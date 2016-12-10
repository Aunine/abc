#include <stdio.h>

int scan_reint(void){
	int tem;
	do {printf("请输入一个非负整数：");
	scanf("%d",&tem);
	if(tem<0)
	printf("\a请不要输入负整数："); 
	} while (tem<0);
	return (tem);
} 

int reserve_int(int tep){
	int num=0;
	if (tep>0){
	do {num=num*10+tep%10;
	tep/=10;
	}while (tep>0);}
	return (num);
}

int main(void){
	int nx=scan_reint();
	printf("它的倒置是：%d",reserve_int(nx));
	return 0;
	}
