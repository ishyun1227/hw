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

	cout << "입력하실 숫자 갯수를 입력해주세요" << endl;

	cin >> length;

	int* nums = new int[length]();

	cout << "숫자들을 입력해주세요" << endl;

	for (int i = 0; i < length; i++) {
		cin >> nums[i];
	}

	cout << "숫자들의 합 :  " << numsAdd(nums, length) << endl
		<< "숫자들의 평균 : " << numsAverage(nums, length) << endl;

	delete[] nums;

	return 0;
}