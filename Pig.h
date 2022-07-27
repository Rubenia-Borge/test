#include "Animal.h"
#include <iostream>
using namespace std;

class Pig : public Animal {
	private:
		string Breed;
		string SpayedNeutered;
		string RegistrationID;
		string Comments;
		
	public:
		Pig() {
			Breed = " ";
			SpayedNeutered = false;
			RegistrationID = " ";
			Comments = " ";
		}
		
		Pig(string pBreed, string pSpayedNeutered, string pRegistrationID, string pComments) {
			Breed = pBreed;
			SpayedNeutered = pSpayedNeutered;
			RegistrationID = pRegistrationID;
			Comments = pComments;
		}
		
		void SetBreed(string pBreed);
		void SetSpayedNeutered(string pSpayedNeutered);
		void SetRegistrationID(string pRegistrationID);
		void SetComments(string pComments);
		
		string GetBreed();
		string GetSpayedNeutered();
		string GetRegistrationID();
		string GetComments();
		
		void Display();
};
