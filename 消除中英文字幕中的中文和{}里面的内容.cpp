#include<stdio.h> 
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
	int a=0;
	while(!feof(fp))
	{ 
		fread(s,1,n,fp);
		if(s[0]==0x7b)
			a++;
		if(a==0&&(s[0]<0X4E00||s[0]>0X9FA5))
			fwrite(s,1,n,fp1);
		if(s[0]==0x7d)
			a--;	
	}
	fclose(fp);
	fclose(fp1);
}
 
