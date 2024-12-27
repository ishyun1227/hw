#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal(string s) :sound(s) {}

Dog::Dog(string s) : Animal(s) {}
void Dog::makeSound() {
	cout << sound << "¸Û" << endl;
}

Cat::Cat(string s) : Animal(s) {}
void Cat::makeSound() {
	cout << sound << "³É" << endl;
}

Cow::Cow(string s) : Animal(s) {}
void Cow::makeSound() {
	cout << sound << "¹«" << endl;
}