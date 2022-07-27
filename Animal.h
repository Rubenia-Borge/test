
#include <iostream>
using namespace std;

class Animal {
	protected:
		float Weight;
		string Name;
		char Gender;
		string Color;
	
	public:
		Animal() {
			Weight = 0.0;
			Name = " ";
			Gender = ' ';
			Color = " ";
		}
		
		Animal(float aWeight, string aName, char aGender, string aColor) {
			Weight = aWeight;
			Name = aName;
			Gender = aGender;
			Color = aColor;
		}
		
		void SetWeight(float aWeight);
		void SetName(string aName);
		void SetGender(char aGender);
		void SetColor(string aColor);
		
		float GetWeight();
		string GetName();
		char GetGender();
		string GetColor();
		
		void Display();
};
