#include <iostream>
using namespace std;

int numsAdd(int numbers[], int size) {
	int add = 0;
	for (int i = 0 ; i < size;i++) {
		add += numbers[i];
	}
	return add;
}
double numsAverage(int numbers[], int size) {
	return numsAdd(numbers, size) / (double)size;
}

int main(){
	int length;

	cout << "�Է��Ͻ� ���� ������ �Է����ּ���" << endl;

	cin >> length;

	int* nums = new int[length]();

	cout << "���ڵ��� �Է����ּ���" << endl;

	for (int i = 0; i < length; i++) {
		cin >> nums[i];
	}

	cout << "���ڵ��� �� :  " << numsAdd(nums, length) << endl
		<< "���ڵ��� ��� : " << numsAverage(nums, length) << endl;

	delete[] nums;

	return 0;
}