#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Expozitie<Supersport> e1;
cout<<e1;
Supersport m1;
e1+=m1;
cout<<e1;
e1-=m1;
cout<<e1;
Expozitie<Supersport> e2=e1;
cout<<e2;
Expozitie<Supersport> e3;
cin>>e3;

cout<<e3;

//Expozitie<Cabrio> e4;
//cin>>e4;
}
