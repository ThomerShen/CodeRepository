#include <stdio.h>
//ָ������Ļ�������
int main(void)
{
	int urn[5] = { 100,200,300,400,500 }; 
	int *ptr1, *ptr2, *ptr3;
	//��ֵ
	ptr1 = urn;//urn�������Ԫ�ص�ַ
	ptr2 = &urn[2];
	//�����ã�ȡ��ַ��ptr1�洢���ڴ����Ϊ 0x010ff700�ĵ�ַ�ϣ����ô洢��Ԫ�洢��������0x010ff70c����urn�ĵ�ַ
	printf("pointer value,dereferenced pointer,pointer address:\n");
	printf("  ptr1= %p,  *ptr1= %d,  &ptr1= %p\n", ptr1, *ptr1, &ptr1);//ptr1��ָ��urn[0]�ĵ�ַ����&ptr1��ָ��ptr1��ָ��
	//ָ��ӷ�
	ptr3 = ptr1 + 4;//ptr1 + 4�ȼ���&urn[4]
	printf("\nadding an int to a pointer:\n");
	printf("ptr1+4=%p,*(ptr1+4)=%d\n", ptr1 + 4, *(ptr1 + 4));
	//ָ�����
	ptr1++;
	printf("\nvalues after ptr1++\n");
	printf("ptr1=%d,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
	//ָ��ݼ�
	ptr2--;
	printf("\nvalues after ptr2--\n");
	printf("ptr2=%d,*ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
	//�ָ�
	ptr1--;
	ptr2++;
	printf("\npointer reset to original values:\n");
	printf("ptr1=%p,ptr2=%p\n", ptr1, ptr2);
	//һ��ָ���ȥ��һ��ָ��
	printf("\nsubtracting one pointer from another:\n ");
	printf("ptr2=%p,ptr1=%p,ptr2-ptr1=%td\n", ptr2, ptr1,ptr2 - ptr1);//%td ����ָ���ֵ������
	//һ��ָ���ȥһ������
	printf("\nsubtracting an int from a pointer:\n ");
	printf("ptr3=%p,ptr3-2=%p\n", ptr3,  ptr3 - 2);//%td ����ָ���ֵ������

	system("pause");
	return 0;
}