#include <stdio.h>
#include <stdlib.h>
//����ȡ�ַ�ʱ�����ַ�ǰ����ո񼴿�
//doubleҪ��lf����ȡ
int main()
{
	int i,ret;
	char c;
	float f;
	double d;
	ret=scanf("%d %c%f%lf",&i,&c,&f,&d);
	printf("%d %c %5.2f %5.2f\n",i,c,f,d);
	system("pause");
}