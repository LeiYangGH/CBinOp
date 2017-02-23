#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int i;
	if((fp = fopen("binhello.txt","r")) == NULL)
		{
			printf("fail to open file to read\n");
			return 0;
		}
	char chs[20];
	fread(chs,sizeof(char),5,fp);

	char ch[3];
	fseek(fp,2,SEEK_SET);
	fread(ch,sizeof(char),2,fp);
	fclose(fp);
	chs[5] = '\0';
	printf("chs=%s\n",chs);

	ch[2] = '\0';
	printf("ch=%s\n",ch);
	printf("done!\n");
	system("pause");
}
