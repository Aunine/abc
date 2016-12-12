#include <stdio.h>
#define NUMBER 3

int max_of(int vx[],int no){
	int i;
	int max=vx[0];
	for(i=0;i<no;i++){
		if(vx[i+1]>max)
		max=vx[i+1];
	}
	return (max);
} 

int main(void){
	int a;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e,max_m;
	printf("please input %d students' grade:\n",NUMBER);
	for(a=0;a<NUMBER;a++)
	{printf("NO.%d math:\n",a+1);
	scanf("%d",&mat[a]);
	printf("english:\n",a+1);
	scanf("%d",&eng[a]);
	}
	max_m=max_of(mat,NUMBER);
	max_e=max_of(eng,NUMBER);
	
	printf("the maximal math grade is:%d",max_m); 
	printf("the maximal english grade is:%d",max_e); 
	
	return 0;
}
