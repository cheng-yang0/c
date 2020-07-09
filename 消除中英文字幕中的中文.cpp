#include<stdio.h> 
//first time to modify github file
#define n 2
int main()
{
	FILE *fp;
	FILE *fp1;
	char str[1000];
	char str1[1000];
	gets(str);
	gets(str1);
	fp=fopen(str,"rb+");
	fp1=fopen(str1,"wb+");
	unsigned short s[1];
	//while(!feof(fp))
	for(int i=0;i<1;i++)
	{ 
		fread(s,1,n,fp);
		printf("%x",s[0]);
		if(s[0]>=0X4E00&&s[0]<=0X9FA5||s[0]==0x7b)
		;
		else	
		fwrite(s,1,n,fp1);
	}
	fclose(fp);
	fclose(fp1);
}
//if(s[0]==)
 
