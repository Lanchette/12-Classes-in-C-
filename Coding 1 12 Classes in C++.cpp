// Lan Anh Huynh, Coding 1 12 Classes in C++

#include <iostream>
#include <string>
using namespace std;



class human {
public:
	human() = default;
	string name;
	string phrase;
	int health = 10;
	int damage = 4;

	human(string givenName, string givenPhrase, int givenHealth, int givenDamage) {
		name = givenName;
		phrase = givenPhrase;
		health = givenHealth;
		damage = givenDamage;
	}

	void SayHello() {
		cout << "My name is " << name << " and my health is " << health << " and my base damage is " << damage << "!\n";
		cout << phrase << ".\n";
	}

private:
protected:
};



int main() {
	human robin;
	robin.name = "Robin";
	robin.health = 10;
	robin.damage = 4;

	cout << "Introductions are in order!\n";
	robin.SayHello();


	return 0;
}
