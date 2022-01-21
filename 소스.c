// 포인터 연습
// & : 주소
// * : 1. 포인터변수 선언(예: int * ptr;)
//	   2. 간접참조 (예: *ptr)
//


/*
#include<stdio.h>
#pragma warning (disable: 4996)

int main() {
	int a = 5;
	int *ptr = &a;
	// ptr = &a;

	printf("a= %d, *ptr = %d\n", a, *ptr); // a == *ptr (== *&a)
	printf("ptr = %d\n", ptr); // %d : 10진수
	printf("ptr = %p, &a = %p\n", ptr, &a); // ptr == &a, %p : 16진수로 출력, 주소를 보기 위해 포인터에서 많이 이용

	printf("siezeof(int *) = %d\n", sizeof(int *)); // 4, 주소이기 때문에 4가 나옴

	return 0;
}
*/
/*
// 값 전달 방식

#include<stdio.h>
#pragma warning (disable: 4996)

void swap(int a, int b);


int main() {
	int n1, n2;

	printf("정수1 입력: "); scanf("%d", &n1);
	printf("정수2 입력: "); scanf("%d", &n2);

	printf("swap()함수 호출 전, n1 = %d, n2 = %d\n", n1, n2);
	swap(n1, n2); // swap()함수 호출, 값 전달 방식
	printf("swap()함수 호출 후, n1 = %d, n2 = %d\n", n1, n2);

	return 0;
}

void swap(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("swap()함수에서 a = %d, b = %d\n", a, b);
}
*/

/*
// 주소값 전달 방식

#include<stdio.h>
#pragma warning (disable: 4996)

void swap(int* ptrA, int* ptrB);


int main() {
	int n1, n2;

	printf("정수1 입력: "); scanf("%d", &n1);
	printf("정수2 입력: "); scanf("%d", &n2);

	printf("swap()함수 호출 전, n1 = %d, n2 = %d\n", n1, n2);
	swap(&n1, &n2); // swap()함수 호출, 주소 전달 방식
	printf("swap()함수 호출 후, n1 = %d, n2 = %d\n", n1, n2);

	return 0;
}

void swap(int* ptrA, int* ptrB) {
	int temp;

	temp = *ptrA;
	*ptrA = *ptrB;
	*ptrB = temp;

	printf("swap()함수에서 a = %d, b = %d\n", *ptrA, *ptrB);
}*/


#include<stdio.h>
#pragma warning (disable: 4996)
