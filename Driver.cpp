#include "Enigma.h"
using namespace std;

int main()
{
	string input = "fdsf";
	while(input != "q")
	{
		Enigma machine = Enigma();
		string plugz;
		cout<<"Welcome to the Enigma Cipher Machine. All inputs must be uppercase."<<endl;
		cout<<"Please enter a 3 letter string (ex: AAA) to set the rings."<<endl;
		getline(cin,plugz);
		while(plugz.length() != 3)
			getline(cin,plugz);
		cout<<"Press 1 for full default machine settings."<<endl;
		cout<<"Press 2 for full random machine settings."<<endl;
		getline(cin,input);
		if(input == "1")
		{
			machine.setRings(plugz);
			machine.defaultPlugs(true);
			machine.defaultRotors(true);
		}
		else if(input == "2")
		{
			machine.setRings(plugz);
			machine.defaultPlugs(false);
			machine.defaultRotors(false);
		}
		while(input != "n" && input != "q")
		{
			cout<<"Enter E to Encrypt a message."<<endl;
			cout<<"Enter D to Decrypt a message."<<endl;
			cout<<"Enter V to view the Rotor settings."<<endl;
			cout<<"Enter P to view the Plugboard settings."<<endl;
		}
	}
	return 0;
}
