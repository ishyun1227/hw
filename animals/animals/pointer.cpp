#include <iostream>

using namespace std;

int main() {

	int i = 100;
	int* pInt = &i;
	cout << &i << endl;
	// �ּ�(���Ľ� ��Ÿ��)�� ����Ű��, �����ϴ� ����
	// 
	// int* -> ��Ʈ �ڷ����� ������ ����Ű�� ����
	// �ּҷ� ���� 4byte �� ����
	// �Ǽ��ϱ� ���ٰ� �մϴ�

	double j = 100;
	double* qInt = &j;
	cout << &j << endl;

	float f = 100.f;

	int* pInt = (*int) & f;

	i = *pInt;
	// 
	// int i = 100; 
	// double* pInt = &i; // ���� �߻�
	// 
	//c, c++ �� ������ ������ �ּ� ������ �� �� �ֱ� ����
	// 
	// &i -> i�� ��ġ �ּҰ� -> pInt�� ������

	// ������ ������ �̿��Ͽ� i�� ���� �ٲ� �� �ִ�

	*pInt = 200;
		// �����ϴ� ��. �ּҷ� ���� ��. �ּҿ� ����� ��.

	// �ּ��� �⺻ ���� -> ����Ʈ BYTE


}