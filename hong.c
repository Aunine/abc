#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int i;
	int va[NUMBER];
	int sum=0;
	
      puts("������ѧ��������");
         for(i=0;i<5;i++)
         {printf("%d��:",i+1);
          scanf("%d",va[i]);
		 sum+=va[i];}
	 	 printf("�ܷ֣�%d\n",sum);
		 printf("ƽ��ֵ��%3.1f\n",(double)sum/NUMBER);
		 return 0;
 } 
