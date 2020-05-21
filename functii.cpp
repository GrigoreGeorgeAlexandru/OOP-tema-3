#include "header.h"

vector <Supersport*> Expozitie<Supersport>::operator-=(Supersport& other)
    {
        for(auto i=stoc.begin();i!=stoc.end();++i)
            if(*i==&other)
        {    vandute.push_back(*i);
            stoc.erase(i);
            nr_masini--;
            nr_vandute++;
            break;

        }

        return stoc;

    }


     vector <Supersport*> Expozitie<Supersport>::operator+=(Supersport& other)
     {

            stoc.push_back(&other);
nr_masini++;
            return stoc;

    }

ostream& operator<<(ostream& out,Expozitie<Supersport>& expozitie ){

out<<"nr de masini in stoc:"<<expozitie.nr_masini<<endl;
out<<"nr de masini vandute:"<<expozitie.nr_vandute<<endl;

return out;


}

 string Coupe::get_culoare(){return culoare;}
   void Coupe::set_culoare(string culoare){this->culoare=culoare;}
   string Hot_Hatch::get_culoare(){return culoare;}
   void Hot_Hatch::set_culoare(string culoare){this->culoare=culoare;}
   string  Cabrio::get_culoare(){return culoare;}
   void Cabrio::set_culoare(string culoare){this->culoare=culoare;}
    string Supersport:: get_culoare(){return culoare;}
   void Supersport::set_culoare(string culoare){this->culoare=culoare;}


Expozitie<Supersport>::Expozitie(){
        nr_masini=0;
        nr_vandute=0;
        }
Expozitie<Supersport>::Expozitie(unsigned nr_masini,unsigned nr_vandute){
        this->nr_masini=nr_masini;
       this-> nr_vandute=nr_masini;
        }



const    unsigned Expozitie<Supersport>::get_nr_masini(){return nr_masini;}
    const unsigned Expozitie<Supersport>::get_nr_vandute(){return nr_vandute;}
    void Expozitie<Supersport>::set_nr_masini(unsigned masini){
    this->nr_masini=masini;

    }
     void Expozitie<Supersport>::set_nr_vandute(unsigned vandute)
     {this->nr_vandute=vandute;

     }

     vector <Supersport*> Expozitie<Supersport>::get_stoc(){
     return stoc;

     }
     vector <Supersport*> Expozitie<Supersport>::get_vandute(){
     return vandute;
     }
void Expozitie<Supersport>::set_stoc(vector <Supersport*> stoc){
this->stoc.clear();

for (int i=0; i<stoc.size(); i++)
        this->stoc.push_back(stoc[i]);
}
     void Expozitie<Supersport>::set_vandute(vector <Supersport*> vandute){
     this->vandute.clear();

for (int i=0; i<vandute.size(); i++)
        this->vandute.push_back(vandute[i]);
     }


Expozitie<Supersport>::~Expozitie(){};
 Expozitie<Supersport>& Expozitie<Supersport>::operator=(Expozitie<Supersport>& other) {
this->nr_masini=other.get_nr_masini();
this->nr_vandute=other.get_nr_vandute();
this->set_stoc(other.get_stoc());
this->set_vandute(other.get_vandute());
return *this;
}
istream& operator>>(istream& in,Expozitie<Supersport>& expozitie){
cout<<"nr de masini ce vor fii citite:";
int nr;
in>>nr;
for (int i=0;i<nr;i++)
{Supersport* m1=new Supersport;
in>>*m1;
expozitie+=*m1;

}

return in;

}
 istream& operator>>(istream& in,Supersport masina){
 string culoare;
 cout<<"introduceti culoarea:";
 in>>culoare;
 masina.set_color(culoare);cout<<"aici";
 return in;
 }
void Supersport::set_color(string color){
this->culoare=color;

}
template <typename T>
Expozitie<T>::Expozitie(){
nr_masini_e=0;

}

template <typename T>
    Expozitie<T>::Expozitie(unsigned nr_masini_e){
    this->nr_masini_e=nr_masini_e;

    }
    template <typename T>
   Expozitie<T>::~Expozitie(){}

   template <typename T>
    const unsigned Expozitie<T>::get_nr_masini_e(){return nr_masini_e;}
     template <typename T>
    void Expozitie<T>::set_nr_masini_e(unsigned masini){
    nr_masini_e=masini;
    }
    template <typename T>
     vector  <pair <T,int>> Expozitie<T>::get_masini(){return  masini;}
     template <typename T>
     void Expozitie<T>::set_masini(vector  <pair <T,int>> masini){
this->masini=masini;


     }
 template <typename T>
    Expozitie<T>& Expozitie<T>::operator=(Expozitie<T>& other){
this->nr_masini_e=other.get_nr_masini_e();
this->masini=other.get_masini();


    }

    template <typename T>
ostream& operator<<(ostream& out,Expozitie<T>& expozitie){
out<<"nr masini din expozitie:";
out<<expozitie.get_nr_masini_e()<<endl;
for(auto i=expozitie.get_masini().begin();i!=expozitie.get_masini().end();++i)
    cout<<*i<<endl;
return out;
}template <typename T>
istream& operator>>(istream& in,Expozitie<T>& expozitie){
cout<<"nr de masini din expozitie";int n;
in>>n;
vector <pair <T,int>> masinit;
expozitie.set_nr_masini_e(n);
for(int i=0;i<n;++i)
{
    T* m=new T;
    masinit.push_back((m,-1));
}

expozitie.set_masini(masinit);
return in;
}
template class Expozitie<Cabrio>;
template class Expozitie<Hot_Hatch>;
template class Expozitie<Coupe>;
