#include <iostream>
#include <string>
#include <cmath>
#include<stdlib.h>
#include <stdio.h>
using namespace std;

void cass(int a[5]);

int main()
{
	//int column[6] = { 0 };
	//int b,c,d,e;
	//float f = 1;
	///*c = scanf("%d%d",&b,&d);
	//e = printf("%d\n",2);
	//cout << e << endl;*/
	//printf("%f\n",f);
	//cass(column);


	puts("abcd");
	puts("I am a good boy��");
	int a[10] = {};
	for (int i = 0; i < 10; i++)
		printf("%d\n",a[i]);





#if 0 
	char *a = "abcd";//����ָ��洢�ַ���,��ʵ�ʾ��ǰ��ַ������׵�ֵ����������Ϊchar��ָ�����,�Ӷ����Դ��ַ�����Ԫ�ؿ�ʼ���ַ������в���
	cout << strlen(a) << endl;
	cout << sizeof(a) << endl;


#endif

	return 0;

}

void cass(int a[5])
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n",a[i]);
	}
}