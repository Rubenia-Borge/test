vector<Pig> pigs(3);
	vector<Pig>::iterator iter;
	
	string pBreed;
	float pWeight;
	string pName;
	char pGender;
	string pSpayedNeutered;
	string pRegistrationID;
	string pColor;
	string pComments;
	
	for (iter = pigs.begin(); iter < pigs.end(); iter++) {
		Pig p;
		cout<<"What is the pig's breed?: ";
		cin>>pBreed;
		cout<<"What is the pig's weight?: ";
		cin>>pWeight;
		cout<<"What is the pig's name?: ";
		cin>>pName;
		cout<<"What is the pig's gender?: ";
		cin>>pGender;
		cout<<"Is the pig spayed/neutered?: ";
		cin>>pSpayedNeutered;
		cout<<"What is the pig's registration ID?: ";
		cin>>pRegistrationID;
		cout<<"What is the pig's color?: ";
		cin.ignore();
		getline(cin, pColor);
		cout<<"Any other comments?: ";
		getline(cin, pComments);
		
		p.SetBreed(pBreed);
		p.SetWeight(pWeight);
		p.SetName(pName);
		p.SetGender(pGender);
		p.SetSpayedNeutered(pSpayedNeutered);
		p.SetRegistrationID(pRegistrationID);
		p.SetColor(pColor);
		p.SetComments(pComments);
		
		*iter = p;
		cout<<endl;
	}
	
	for (iter = pigs.begin(); iter < pigs.end(); iter++) {
		iter->Display();
		cout<<endl;
	}
		
	pigs.clear();
	
	return 0;
}
