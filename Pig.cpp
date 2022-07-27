
#include "Pig.h"

void Pig::SetBreed(string pBreed) {
	Breed = pBreed;
}
void Pig::SetSpayedNeutered(string pSpayedNeutered) {
	SpayedNeutered = pSpayedNeutered;
}
void Pig::SetRegistrationID(string pRegistrationID) {
	RegistrationID = pRegistrationID;
}
void Pig::SetComments(string pComments) {
	Comments = pComments;
}

string Pig::GetBreed() {
	return Breed;
}
string Pig::GetSpayedNeutered() {
	return SpayedNeutered;
}
string Pig::GetRegistrationID() {
	return RegistrationID;
}
string Pig::GetComments() {
	return Comments;
}
