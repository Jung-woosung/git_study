// ������ ����
// & : �ּ�
// * : 1. �����ͺ��� ����(��: int * ptr;)
//	   2. �������� (��: *ptr)
//


/*
#include<stdio.h>
#pragma warning (disable: 4996)

int main() {
	int a = 5;
	int *ptr = &a;
	// ptr = &a;

	printf("a= %d, *ptr = %d\n", a, *ptr); // a == *ptr (== *&a)
	printf("ptr = %d\n", ptr); // %d : 10����
	printf("ptr = %p, &a = %p\n", ptr, &a); // ptr == &a, %p : 16������ ���, �ּҸ� ���� ���� �����Ϳ��� ���� �̿�

	printf("siezeof(int *) = %d\n", sizeof(int *)); // 4, �ּ��̱� ������ 4�� ����

	return 0;
}
*/
/*
// �� ���� ���

#include<stdio.h>
#pragma warning (disable: 4996)

void swap(int a, int b);


int main() {
	int n1, n2;

	printf("����1 �Է�: "); scanf("%d", &n1);
	printf("����2 �Է�: "); scanf("%d", &n2);

	printf("swap()�Լ� ȣ�� ��, n1 = %d, n2 = %d\n", n1, n2);
	swap(n1, n2); // swap()�Լ� ȣ��, �� ���� ���
	printf("swap()�Լ� ȣ�� ��, n1 = %d, n2 = %d\n", n1, n2);

	return 0;
}

void swap(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("swap()�Լ����� a = %d, b = %d\n", a, b);
}
*/

/*
// �ּҰ� ���� ���

#include<stdio.h>
#pragma warning (disable: 4996)

void swap(int* ptrA, int* ptrB);


int main() {
	int n1, n2;

	printf("����1 �Է�: "); scanf("%d", &n1);
	printf("����2 �Է�: "); scanf("%d", &n2);

	printf("swap()�Լ� ȣ�� ��, n1 = %d, n2 = %d\n", n1, n2);
	swap(&n1, &n2); // swap()�Լ� ȣ��, �ּ� ���� ���
	printf("swap()�Լ� ȣ�� ��, n1 = %d, n2 = %d\n", n1, n2);

	return 0;
}

void swap(int* ptrA, int* ptrB) {
	int temp;

	temp = *ptrA;
	*ptrA = *ptrB;
	*ptrB = temp;

	printf("swap()�Լ����� a = %d, b = %d\n", *ptrA, *ptrB);
}*/


#include<stdio.h>
#pragma warning (disable: 4996)
