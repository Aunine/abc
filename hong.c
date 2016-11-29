#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int i;
	int va[NUMBER];
	int sum=0;
	
      puts("请输入学生分数：");
         for(i=0;i<5;i++)
         {printf("%d号:",i+1);
          scanf("%d",va[i]);
		 sum+=va[i];}
	 	 printf("总分：%d\n",sum);
		 printf("平均值：%3.1f\n",(double)sum/NUMBER);
		 return 0;
 } 
