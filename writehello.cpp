#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	if((fp = fopen("hello.txt","w")) == NULL)
		{
			printf("fail to open file to write\n");
			return 0;
		}
	fprintf(fp,"%s","hello\n");
	fclose(fp);
	printf("done!\n");
	system("pause");
}
