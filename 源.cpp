#include<stdio.h>

int main()
{
	int array[4][5] = { 0 };

	printf("sizeof int:%d\n", sizeof(int));//一个int为4
	printf("array:%p\n", array);//整个二维数组的首地址
	printf("array+1:%p\n", array+1);//两者相减为20（跨度）；证明4x5二维数组的本质就是线性排列的

	return 0;
}
