#include<iostream>
#include <Windows.h>
using namespace std;
const string APPLICATION="AL";
const string PRESENTATIONAL="PL";
const string SESSION="SL";
const string TRANSPORT="TL";
const string NETWORK="NL";
const string DATALINK="DL";
const string PHYSICAL="PHL";
const string TL="TL";
string input;
int applicationheader()
{
	Sleep(1000);
	cout<<"APPLICATION LAYER: "<<APPLICATION+" "+input<<"\n";
}
int presentationalheader()
{
	Sleep(1000);
	cout<<"PRESENTATIONAL LAYER: "<<PRESENTATIONAL+APPLICATION+" "+input<<"\n";
}
int session()
{
	Sleep(1000);
	cout<<"SESSION LAYER: "<<SESSION+PRESENTATIONAL+APPLICATION+" "+input<<"\n";
}
int transport()
{
	Sleep(1000);
	cout<<"TRANSPORT LAYER: "<<TRANSPORT+SESSION+PRESENTATIONAL+APPLICATION+" "+input<<"\n";
}
int network()
{
	Sleep(1000);
	cout<<"NETWORK LAYER: "<<NETWORK+TRANSPORT+SESSION+PRESENTATIONAL+APPLICATION+" "+input<<"\n";
}
int datalink()
{
	Sleep(1000);
	cout<<"DATA LINK LAYER: "<<DATALINK+NETWORK+TRANSPORT+SESSION+PRESENTATIONAL+APPLICATION+" "+input+" "+TL<<"\n";
}

int main()
{
	
	cout<<"Simulation of OSI model using c++ \n";
	cout<<"Enter the string :\n";
	cin>>input;
	cout<<"SENDER:\n";
	applicationheader();
	presentationalheader();
	session();
	transport();
	network();
	datalink();
	Sleep(800);
	cout<<"MESSAGE ENTERED INTO PHYSICAL LAYER AND TRANSMITTED"<<"\n\n";
	Sleep(800);
	cout<<"RECIEVER:\n";
	Sleep(800);
	cout<<"MESSAGE ENTERED INTO PHYSICAL LAYER\n";
	Sleep(800);
	datalink();
	network();
	transport();
	session();
	presentationalheader();
	applicationheader();
		
}
