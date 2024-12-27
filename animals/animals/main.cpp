#include <iostream>
#include "Animal.h"

using namespace std;

int main() {
	Animal* animals[] = {
	new Dog("�� �̸��� ���ڴ�"),
	new Dog("���� �ر�̾�"),
	new Cat("�򸣰� �԰�ʹ�"),
	new Cow("�������") };

	for (int i = 0; i < 4; i++) {
		animals[i] -> makeSound();
	}

	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}

	return 0;
}