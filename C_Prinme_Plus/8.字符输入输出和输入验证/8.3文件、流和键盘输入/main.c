#include <stdio.h>
#include <stdlib.h>
//�ļ��Ǵ洢���д洢��Ϣ������
//C�����������������ֱ�Ӵ����ļ�������һ��ʵ����������ӳ������뻯��������
//���ļ��Ĺ��̾��ǰ������ļ�����������Ҷ�д����ͨ��������ɵġ�
//stdin����ʾ�������룬stdout����ʾ��Ļ���

//
int main()
{
	char ch;
	//while ((ch = getchar()) != '#')
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
