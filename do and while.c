#include <stdio.h>
int main(void)

{int cont;
   do {
   int no;
   
   printf("请输入一个整数：");
   scanf("%d",&no);
   
   if (no%2)
	   puts("this number is an odd number");
   else
       puts("this number is a even number");
   
   printf("repeat?【yes...0/no...9】");
   scanf("%d",&cont);
   }while (cont == 0);
   return 0;
   
}