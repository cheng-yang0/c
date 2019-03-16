#include<stdio.h>
#include<io.h>
#define n 2
#define str0 "G:\\Test1\\"
int main() {
	FILE *fp;
	FILE *fp1;
	struct _finddata_t file;
	long handle;
	char s[200]=str0;
	strcat(s,"*");
	handle=_findfirst(s,&file);
	if(handle==-1) {
		printf("_findfirst≤È’“ ß∞‹");
		return 0; }
	else {
		int a=0;
		while(!_findnext(handle,&file)) {
			if(a!=0) {
				printf("%s\n",file.name);
				char str[200]=str0;
				strcpy(s,file.name);
				strcat(str,s);
				printf("%s\n",str);
				char str1[200];
				strcpy(str1,str);
				strcat(str1,"copy");
				strcat(str1,".srt");
				fp=fopen(str,"rb+");
				fp1=fopen(str1,"wb+");
				unsigned short s[1];
				int a=0;
				while(!feof(fp)) {
					fread(s,1,n,fp);
					if(s[0]==0x7b)
						a++;
					if(a==0&&(s[0]<0X4E00||s[0]>0X9FA5))
						fwrite(s,1,n,fp1);
					if(s[0]==0x7d)
						a--; }
				fclose(fp);
				fclose(fp1); } a++; } } }

