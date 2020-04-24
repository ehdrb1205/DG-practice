#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;

i = 1234;

printf("[----- [�赿��]    [2019038077] -----]\n");
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); //���� i�� ����� �� ���
printf("address of i == %p\n", &i); //���� i�� �ּ� ���
printf("value of ptr == %p\n", ptr); //������ ptr�� �ִ� �ּ�(�����Ⱚ) ���
printf("address of ptr == %p\n", &ptr); //������ ptr�� �ּ� ���

ptr = &i; /* ptr is now holding the address of i */

printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); //���� i�� ����� �� ���
printf("address of i == %p\n", &i); //���� i�� �ּ� ���
printf("value of ptr == %p\n", ptr); //������ ptr�� ����� ��(�ּ�) ���
printf("address of ptr == %p\n", &ptr); //������ ptr�� �ּ� ���
printf("value of *ptr == %d\n", *ptr); //������ ptr�� ����Ű�� ���� i�� �� ���

dptr = &ptr; /* dptr is now holding the address of ptr */

printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); //���� i�� ����� �� ���
printf("address of i == %p\n", &i); //���� i�� �ּ� ���
printf("value of ptr == %p\n", ptr); //������ ptr�� ����� ��(�ּ�) ���
printf("address of ptr == %p\n", &ptr); //������ ptr�� �ּ� ���
printf("value of *ptr == %d\n", *ptr); //������ ptr�� ����Ű�� ���� i�� �� ���
printf("value of dptr == %p\n", dptr); //���������� dptr�� �ִ� ptr�� �ּ� ���
printf("address of dptr == %p\n", &dptr); //���������� dptr�� �ּ� ���
printf("value of *dptr == %p\n", *dptr); //���������� dptr�� ���������Ͽ� ptr ���� i �ּ� ���
printf("value of **dptr == %d\n", **dptr); //���������� dptr�� ���� ������ �� ���Ͽ� i�� �� ���

*ptr = 7777; /* changing the value of *ptr */

printf("\n[after *ptr = 7777] \n"); 
printf("value of i == %d\n", i); //���� i�� ����� �� ���(7777�� �ٲ� ��µ�)
printf("value of *ptr == %d\n", *ptr); //������ ptr�� ���� �����Ͽ� i�� �� ���
printf("value of **dptr == %d\n", **dptr); //���������� dptr�� �� �� ���������Ͽ� i�� �� ���

**dptr = 8888; /* changing the value of **dptr */

printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); //���� i�� ����� �� ���(8888�� �ٲ� ��µ�)
printf("value of *ptr == %d\n", *ptr); //������ ptr�� ���������Ͽ� i�� �� ���
printf("value of **dptr == %d\n", **dptr); //���������� dptr�� �� �� ���������Ͽ� i�� �� ���

return 0;
}