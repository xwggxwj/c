#include <stdio.h>
//int main()
//{
//	int num1=10;
//	int num2=20;
//	if (num1>num2)
//		{
//			printf("%d\n",num1);
//		}
//	else
//		{
//			printf("%d\n",num2);
//		}
//	return 0;
//}
//int Max(unsigned int a,unsigned int b)
//{
//	if(a>b)
//	{
//		printf("%d\n",a);
//	}
//	else
//	{
//		printf("%d\n",b);
//	}
//}
//int main()
//{
//	Max(10,5);
//	return 0;
//}//比较两个字的大小
// 
//int main()
//{
//	int a=0;//四个字节，00000000000000000000000000000000000
//	int b=~a;//有符号的整形,内存里存储的是二进制补码，打印的是这个是这个数的源码
//	printf("%d\n",b);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int b=a++;//后置++，先试用。再++，前置++，先++，再使用，后置——一样使用
//	printf("a=%d b=%d\n",a,b);//结果是11，10，前置加加结果是11,11
//	return 0;
//}
//int main()
//{
//	int a=(int)3.14;
//	//return 0;
//}
//int main()
//{
//	int a=3;
//	int b=5;
//	int c=a&&b;
//	printf("%d\n",c);//并且，a是真并且b是真，输出结果是1，逻辑或||是或者；
//	return 0;
//}
//关键字，
//void test()
//{
//	static int a=1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
int main()
{
	extern int g_val;
	printf("g_val %d\n",g_val);
	return 0;
}