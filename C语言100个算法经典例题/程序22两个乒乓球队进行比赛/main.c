#include <stdio.h>

/*
����ƹ����ӽ��б������������ˡ��׶�Ϊ a,b,c ���ˣ��Ҷ�Ϊ x,y,z ���ˡ��ѳ�ǩ����
�����������������Ա����������������a ˵������ x �ȣ�c ˵������ x,z �ȣ��������ҳ�
�������ֵ�������

a PK z
b PK x
c PK y

*/
int main()
{
	char i, j, k;//����Ϊa,b,c�Ķ���
	for(i='x';i<='z';i++)//̰�ķ�����������
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			//if(i!=j)//�ų������ظ�����
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != j&&i != k && j != k)
					{
						if (i != 'x'&&k != 'x'&&k != 'z')
							printf("��������Ϊ��\na PK %c\nb PK %c\nc PK %c\n", i, j, k);
					}
				}
		}
	}

	getchar();

	return 0;
}