#include<stdio.h>

int main()
{
	int array[4][5] = { 0 };

	printf("sizeof int:%d\n", sizeof(int));//һ��intΪ4
	printf("array:%p\n", array);//������ά������׵�ַ
	printf("array+1:%p\n", array+1);//�������Ϊ20����ȣ���֤��4x5��ά����ı��ʾ����������е�

	return 0;
}
