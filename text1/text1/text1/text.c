//1.��ӡ100-200֮�������
//��1��
//#include<stdio.h>
//int main()
//{
//	int i = 100 ,j = 200 ,t;
//	for(i=100;i<=j;i++)
//	{
//		for(t=2;t<=i;t++)
//		{
//			if(i%t==0)
//				break;
//		}
//		if(t==i)
//			printf("%d ",i);
//	}
//
//	return 0;
//}

//��2��
//#include<stdio.h>
//int main()
//{
//	int i = 100 ,j = 200 ,t;
//	for(i=101;i<=j;i+=2)
//	{
//		for(t=2;t<=i/2;t++)
//		{
//			if(i%t==0)
//				break;
//		}
//		if(t>i/2)
//			printf("%d ",i);
//	}
//
//	return 0;
//}
//2.����˷��ھ���
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%2d  ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
//3.�ж�1000��-2000��֮�������
//#include<stdio.h>
//int main()
//{
//	int year,count=0;
//	printf("1000��-2000��֮��������У�\n");
//	for(year= 1000;year<= 2000;year++)
//	{
//		if(year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		else if(year % 100 == 0 && year % 400 == 0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("\n1000��-2000��֮���������%d����\n",count);
//	return 0;
//}
//���Ͼ������һ����
//#include<stdio.h>
//int y_search(int b[][3],int i,int n)
//{
//	int j=0;
//	i--;
//	for(j=0;j<=i;)
//	{
//		if(n>b[j][i])
//		{
//			j++;
//		}
//		else if(n<b[j][i])
//		{
//			i--;
//		}
//		else if(n==b[j][i])
//		{
//			return 1;
//		}
//	
//	}
//
//}
//int main()
//{
//	int y_search(int b[][3],int i,int n);
//	int a[][3]={{2,3,4,},{3,4,5},{4,5,6}};
//	int n;
//	printf("������Ҫ���ҵ�����n:\n");
//	scanf("%d",&n);
//	if(y_search(a,3,n))
//	{
//		printf("��������ֱ��ҵ�\n");
//	}
//	else
//	{
//		printf("���������û�б��ҵ�\n");
//	}
//	return 0;
//}
