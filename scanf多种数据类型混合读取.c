#include <stdio.h>
#include <stdlib.h>
//当读取字符时，在字符前加入空格即可
//double要用lf来读取
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