#include <iostream>
#include <cmath>
using namespace std;

int main()
{
string name;
cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
getline(cin,name);
cout << "?????: " << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
int id;
cin  >> id;
int gear  = id/10000000 - 12;
cout << name <<": ";
cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";

string nung;
cin.ignore();
getline(cin,nung);
cout << name << ": ";
cout << "Fahsai: So....which day are you free to go with me?\n";

string day;
getline(cin,day);
cout << name << ": ";
cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << nung << " with you.\n";

string jaa;
getline(cin,jaa);
cout << name << ": ";
cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";
}
