#include <iostream>

using namespace std;

int main() {

	int i = 100;
	int* pInt = &i;
	cout << &i << endl;
	// 주소(스파시 르타로)를 가리키는, 저장하는 변수
	// 
	// int* -> 인트 자료형의 변수를 가리키는 변수
	// 주소로 가서 4byte 만 읽음
	// 실수하기 쉽다고 합니다

	double j = 100;
	double* qInt = &j;
	cout << &j << endl;

	float f = 100.f;

	int* pInt = (*int) & f;

	i = *pInt;
	// 
	// int i = 100; 
	// double* pInt = &i; // 오류 발생
	// 
	//c, c++ 이 강력한 이유는 주소 개념을 쓸 수 있기 때문
	// 
	// &i -> i의 위치 주소값 -> pInt에 저장함

	// 포인터 변수를 이용하여 i의 값을 바꿀 수 있다

	*pInt = 200;
		// 참조하는 것. 주소로 가는 것. 주소에 저장된 것.

	// 주소의 기본 단위 -> 바이트 BYTE


}