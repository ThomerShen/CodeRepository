#include <stdio.h>
#include <stdlib.h>
//规则：（1）第一个字母大写，后面的字母全是小写字母；（2）全是大写字母；
//（3）全是小写字母。句子的第一个单词，必须符合（1）（3）规则
//I AN a Student
//no Pain nO Gain
//NO pAin no gAin
int main()
{
	char string[100], c;
	int i, num = 0, word = 0,CapNum=0,HasLow=0,Errnum=0,isOK=1;
	printf("输入句子：\n");
	gets(string);
	for (i = 0; (c = string[i]) != '\0'; i++)
	{
		if (c == ' ')//遇到空格，初始化
		{
			word = 0;
			CapNum = 0;
			HasLow = 0;
			isOK = 1;
		}
		else if (isOK)//不违规
		{
			if (word == 0)//出现判断首字母的情况
			{
				word = 1;
				num++;
				if (c >= 'A'&&c <= 'Z')//首字母为大写字母
					CapNum++;
				else if (num==1)//句子的首单词但首字母为小写字母，违规
					isOK = 0;
				else
					HasLow = 1;//首字母为小写字母
			}
			else//不是首字母的情况
			{
				if (c >= 'A'&&c <= 'Z')//大写字母
					if (HasLow == 1)//大写字母的前面有小写字母，违规
						isOK = 0;
					else
						CapNum++;//全是大写字母
				else//小写字母
				{
					if (CapNum > 1)//小写字母前面有多个大写字母，违规
						isOK = 0;
					else
						HasLow = 1;//大写字母后继小写字母，或者全是小写字母
				}
			}
		}
		if (!isOK)//违规输出
		{
			printf("%d", num);
			Errnum++;
		}
	}
	if (!Errnum)
		printf("OK\n");
	else
		printf("\n");
	system("pause");
	return 0;
}