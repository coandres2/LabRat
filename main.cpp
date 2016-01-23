#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char rasp;
    float carb, cons, kmpp; ///def var prima optiune;
    float kmp, kmp2, kms,cons2, kmn=0,carbc=0; ///def var a doua optiune;
    int k;
    //3
    //4

    cout<<"Bun venit! \n Eu sunt calculatorul de combustibil! \n"<<"\n";
    cout<<"  Te rog sa alegi ce vrei sa calculezi, apoi sa introduci datele: \n"<<"\n"<<"\n";
    cout<<"(1). Numarul de km pe care ii poti face cu o cantitate de carburant si un anumit consum. \n"<<"\n";
    cout<<"(2). Cantitatea de carburant consumata dupa o distanta parcursa si un anumit consum. \n "<<"\n";
    cout<<"(3). Consumul unui motor influentat de un nr de km parcursi cu o anumita cantitate de carburant. \n"<<"\n";
    cout<<"(4). Cat ar trebui sa cheltuiesti pentru a efectua un anumit nr de km, raportat la consum. \n"<<"\n";
    cout<<"INTRODUCETI RASPUNSUL DUMNEAVOASTRA: ";
    cin>>rasp;

    if (rasp=='1') ///prima optiune;
    {
           cout<<"Introdu carburantul (l) : ";cin>>carb;
           cout<<"Introdu consum (l per 100 km) : ";cin>>cons;
           {
               kmpp=0;
               kmpp=(carb/cons)*100;

           }
           cout<<"Cu un consum de "<<cons<<" la suta de km si un rezervor cu "<<carb<<" litri, mai poti parcurge ~"<<kmpp<<" kilometri";
    }

    else
        if (rasp=='2') ///a doua optiune;
    {
        cout<<"Introduceti nr. contorului la pornire: "; cin>>kmp;
        cout<<"Introduceti nr. contorului la sosire: "; cin>>kms;
        {
            if (kms>kmp)
                {
                    kmn=kms-kmp;
            }
            else cout<<"Ati introdus gresit!";
            k=0;

        if k=0 default:break;
        }
        cout<<"Ati parcurs "<<kmp2<<" kilometri!";

        cout<<"Introduceti consumul dumneavoastra: "; cin>>cons2;
        {

          kmn=kms-kmp;
          carbc=(kmn/cons);
          if (carbc>0)
            {
              cout<<carbc;
          }
          else{cout<<"Ceva e in neregula...";}


    }
    }
    else if (rasp=='3')
    {
        cout<<"Dati nr contorului la pornire: ";
        cout<<"Dati nr contorului la sosire: ";
        cout<<"Introduceti l de carburant consumat: ";
        {

        }
    }
    else if (rasp=='4')
    {
        cout<<"Introduceti pretul actual al unui anumit tip de carburant: ";
        cout<<"Introduceti consumul: ";
        cout<<"introduceti distanta: ";
    }

   return 0;

}
