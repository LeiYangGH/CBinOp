#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	if((fp = fopen("binhello.txt","wb")) == NULL)
		{
			printf("fail to open file to write\n");
			return 0;
		}
	char chs[] = {'h','e','l','l','o',0x0A};
	fwrite(chs,sizeof(char),6,fp);
	fclose(fp);
	printf("done!\n");
//system("pause");
}
