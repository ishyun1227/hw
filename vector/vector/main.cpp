#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class SimpleVector {
private:
	T* arr;
	int capacity_;
	int size_;
public:
	SimpleVector(int cap = 10) : capacity_(cap), size_(0) {
		if (capacity_ <= 0) {
			throw invalid_argument("Capacity must be positive");
		}
		arr = new T[capacity_];
	}
	~SimpleVector() {
		delete[] arr;
	}
	void push_back(T a) {
		if (capacity_ > size_) {
			arr[size_] = a;
			size_++;
		}
	}
	void pop_back() {
		if(size_ > 0)
		size_--;
	}
	int size() const{
		return size_;
	}
	int capacity() const{
		return capacity_;
	}
};

int main() {

}