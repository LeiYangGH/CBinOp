#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	if((fp = fopen("binutf8.txt","wb")) == NULL)
		{
			printf("fail to open file to write\n");
			return 0;
		}
	char chs[] = {0xd6,0xd0,0xb9,0xfa,0xc8,0xcb};
	fwrite(chs,sizeof(char),6,fp);
	fclose(fp);
	printf("done!\n");
//system("pause");
}
