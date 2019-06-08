#include <stdio.h>
#include <stdlib.h>
//VS2013及以上版本要按多次ctrl+z
int main()
{
	int i,ret;
	while(fflush(stdin),(ret=scanf("%d",&i))!=EOF)
	{
		printf("i=%d\n",i);
	}
	system("pause");
}