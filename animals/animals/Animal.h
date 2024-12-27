#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal{
protected :
	string sound;

public :
	Animal(string s);
	virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
	Dog(string s);

	void makeSound() override;
};

class Cat : public Animal {
public:
	Cat(string s);

	void makeSound() override;
};

class Cow : public Animal {
public:
	Cow(string s);

	void makeSound() override;
};