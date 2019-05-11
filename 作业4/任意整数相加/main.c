#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 100

void funplus(char *aplus,char *bplus,char *result)
{
	int i,j,jinwei=0,length,savetemp,lengthr;
	int flag=1;
	char temp,savetempch[5];
	int lengtha=strlen(aplus);
	int lengthb=strlen(bplus);
	//输入字符串逆转
	i=0;j=lengtha-1;
	while(i<j)
	{
		temp=aplus[i];
		aplus[i]=aplus[j];
		aplus[j]=temp;
		i++;
		j--;
	}
	i=0;
	j=lengthb-1;
	while(i<j)
	{
		temp=bplus[i];
		bplus[i]=bplus[j];
		bplus[j]=temp;
		i++;
		j--;
	}
	//开始相加
	length=lengtha>lengthb?lengtha:lengthb;
	for(i=0;i<length;i++)
	{
		if(i>=lengtha||i>=lengthb)
			flag=0;
		if(aplus[i]-48+bplus[i]-48*flag+jinwei<10)//不进位
		{
			result[i]=(aplus[i]-48+bplus[i]-48*flag+jinwei)+48;
			jinwei=0;
		}
		else
		{
			savetemp=aplus[i]-48+bplus[i]-48*flag+jinwei;
			itoa(savetemp,savetempch,10);//功能：将任意类型的数字变量转换为字串子变量
			result[i]=savetempch[1];
			jinwei=savetempch[0]-48;
			if(i==length-1)
			{
				result[++i]=jinwei+48;
				break;
			}
		}
	}

	lengthr=strlen(result);
	i=0;j=lengthr-1;
	while(i<j)
	{
		temp=result[i];
		result[i]=result[j];
		result[j]=temp;
		i++;
		j--;
	}
	i=0;j=lengtha-1;
	while(i<j)
	{
		temp=aplus[i];
		aplus[i]=aplus[j];
		aplus[j]=temp;
		i++;
		j--;
	}
	i=0;j=lengthb-1;
	while(i<j)
	{
		temp=bplus[i];
		bplus[i]=bplus[j];
		bplus[j]=temp;
		i++;
		j--;
	}
}

int main()
{
	char aplus[MAXSIZE]={0},bplus[MAXSIZE]={0},result[MAXSIZE]={0};
	printf("aplus=");
	scanf("%s",&aplus);
	printf("bplus=");
	scanf("%s",&bplus);

	funplus(aplus,bplus,result);

	printf("%s+%s=%s\n",aplus,bplus,result);
	system("pause");
}