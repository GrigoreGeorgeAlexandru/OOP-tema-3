#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Masina
{
  protected:
      string culoare;
      public:
virtual void print()
    {
        cout<<culoare<<endl;
    }


};
class Coupe:public Masina{
public:
   string get_culoare();
   void set_culoare(string culoare);

 void print()
    {
        cout<<"Coupe"<<culoare<<endl;
    }


};

class Hot_Hatch:public Masina{
public:
  string get_culoare();
   void set_culoare(string culoare);
void print()
    {
        cout<<"Hot-Hatch"<<culoare<<endl;
    }

};

class Cabrio:public Masina{

public:
  string get_culoare();
   void set_culoare(string culoare);
void print()
    {
        cout<<"Cabrio"<<culoare<<endl;
    }


};
class Supersport:public Masina{

public:
  string get_culoare();
   void set_culoare(string culoare);
   void print()
    {
        cout<<"Supersport"<<culoare<<endl;
    }
friend istream& operator>>(istream& in,Supersport masina);
void set_color(string color);

};




template <typename T>
class Expozitie{
private:
unsigned nr_masini_e;
vector <pair <T,int>> masini;
public:
Expozitie();
    Expozitie(unsigned nr_masini_e);
    ~Expozitie();
    const unsigned get_nr_masini_e();
    void set_nr_masini_e(unsigned masini);

     vector <pair <T,int>> get_masini();

     void set_masini(vector <pair <T,int>> masini);
    Expozitie<T>& operator=(Expozitie<T>& other) ;
template<typename U>
 friend ostream& operator<<(ostream& out,Expozitie<U>& expozitie);
 template<typename U>
 friend istream& operator>>(istream& in,Expozitie<U>& expozitie);


};
template <>
class Expozitie <Supersport>
{
    private:
    unsigned nr_masini;
     unsigned nr_vandute;
    vector <Supersport*> stoc;
     vector <Supersport*> vandute;

    public:
    Expozitie();
    Expozitie(unsigned nr_masini,unsigned nr_vandute);
    ~Expozitie();
    const unsigned get_nr_masini();
    const unsigned get_nr_vandute();
    void set_nr_masini(unsigned masini);
     void set_nr_vandute(unsigned vandute);
     vector <Supersport*> get_stoc();
     vector <Supersport*>get_vandute();
     void set_stoc(vector <Supersport*> stoc);
     void set_vandute(vector <Supersport*> vandute);
    Expozitie<Supersport>& operator=(Expozitie<Supersport>& other) ;
    vector <Supersport*> operator-=(Supersport& other) ;
    vector <Supersport*> operator+=(Supersport& other) ;
 friend ostream& operator<<(ostream& out,Expozitie<Supersport>& expozitie);
 friend istream& operator>>(istream& in,Expozitie<Supersport>& expozitie);

};
#endif // HEADER_H_INCLUDED
