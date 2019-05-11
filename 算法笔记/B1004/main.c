#include <stdio.h>
#include <stdlib.h>
//输出学生成绩的最高、最低成绩
//xiaohong math001 90
//xiaoming cs002 95
//xiaohuan ee003 100

typedef struct student {
	char name[15];
	char id[15];
	int score;
}stu;

int main()
{
	int n;
	stu temp;
	stu ans_max, ans_min;
	printf("输入学生数：\n");
	scanf("%d", &n);
	ans_max.score = -1;
	ans_min.score = 101;
	printf("输入学生的姓名 学号 成绩分数：\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s%d", temp.name,temp.id,&temp.score); 
		//scanf_s("%s%s%d", temp.name,15, temp.id, 15,&temp.score);//其中15用来记录字符串的长度
		if (temp.score > ans_max.score)
			ans_max = temp;
		if (temp.score < ans_min.score)
			ans_min = temp;
	}
	printf("输出成绩最高的学生姓名和学号：\n");
	printf("%s %s\n", ans_max.name, ans_max.id);
	printf("输出成绩最低的学生姓名和学号：\n");
	printf("%s %s\n", ans_min.name, ans_min.id);
	system("pause");
	return 0;
}