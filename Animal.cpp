#include "Animal.h"

void Animal::SetWeight(float aWeight) {
	Weight = aWeight;
}
void Animal::SetName(string aName) {
	Name = aName;
}
void Animal::SetGender(char aGender) {
	Gender = aGender;
}
void Animal::SetColor(string aColor) {
	Color = aColor;
}

float Animal::GetWeight() {
	return Weight;
}
string Animal::GetName() {
	return Name;
}
char Animal::GetGender() {
	return Gender;
}
string Animal::GetColor() {
	return Color;
}

void Animal::Display() {
	cout << "Animal Information: " << endl;
	cout << "	Weight: " << Weight << endl;
	cout << "	Name: " << Name << endl;
	cout << "	Gender: " << Gender << endl;
	cout << "	Color: " << Color << endl;
}
