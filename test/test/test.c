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
//}//�Ƚ������ֵĴ�С
// 
//int main()
//{
//	int a=0;//�ĸ��ֽڣ�00000000000000000000000000000000000
//	int b=~a;//�з��ŵ�����,�ڴ���洢���Ƕ����Ʋ��룬��ӡ����������������Դ��
//	printf("%d\n",b);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int b=a++;//����++�������á���++��ǰ��++����++����ʹ�ã����á���һ��ʹ��
//	printf("a=%d b=%d\n",a,b);//�����11��10��ǰ�üӼӽ����11,11
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
//	printf("%d\n",c);//���ң�a���沢��b���棬��������1���߼���||�ǻ��ߣ�
//	return 0;
//}
//�ؼ��֣�
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