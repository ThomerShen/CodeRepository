#include <stdio.h>

//ϴ�ƻ��������1-54���ֱ�'S','H','C','D','J' ��13�ţ�ִ�ж��������У����Ƶ�λ�øı�Ϊָ��λ��
#define N 5
//const int N = 54;//const ����ָ��һ������Լ��,���߱�����ĳֵ�Ǳ��ֲ����
char mp[5] = { 'S','H','C','D','J' };
int start[N + 1], end[N + 1], next[N + 1];//next������ÿ��λ�õ����ڲ������λ��

int main()
{
	int k;
	printf("����ִ�д�����\n");
	scanf("%d", &k);
	for (int i = 1; i <= N; i++)
	{
		start[i] = i;//��ʼ���Ƶı��
	}
	printf("����ÿ��λ���ϵ����ڲ������λ��\n");
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &next[i]);
	}
	printf("ת���������Ϊ��\n");
	for (int step = 0; step < k; step++)
	{
		for (int i = 1; i <= N; i++)
		{
			end[next[i]] = start[i];//�ѵ�i��λ���ϵ��Ƶı�ŷ���next������
		}
		for (int i = 1; i <= N; i++)
		{
			start[i] = end[i];//��end���鸳ֵ��start�����Թ��´β���ʹ��
		}
	}
	for (int i = 1; i <= N; i++)
	{
		if (i != 1)
			printf(" ");
		start[i]--;
		printf("%c%d", mp[start[i] / 13], start[i] % 13 + 1);//mp[(x-1)/13]Ϊ�����ƶ�Ӧ�Ļ�ɫ��(x-1)%13+1Ϊ��������ɫ�µı��
	}
	system("pause");
	return 0;
}