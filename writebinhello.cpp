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
	char chs[] = {'h','e','l','l','o'};
	fwrite(chs,sizeof(char),5,fp);
	fclose(fp);
	printf("done!\n");
//system("pause");
}
