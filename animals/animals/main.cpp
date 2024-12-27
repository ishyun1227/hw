#include <iostream>
#include "Animal.h"

using namespace std;

int main() {
	Animal* animals[] = {
	new Dog("내 이름은 초코다"),
	new Dog("나는 쌔까미야"),
	new Cat("츄르가 먹고싶다"),
	new Cow("배고프다") };

	for (int i = 0; i < 4; i++) {
		animals[i] -> makeSound();
	}

	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}

	return 0;
}