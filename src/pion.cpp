#include "pion.h"

pion::pion()
{
    etatinitiale=true;
     //cout << "une piece a etait cree est un pion  "<<endl;
}

pion::~pion()
{
    //cout << "une piece a etait supprimee est un pion  "<<endl;
}
void pion::regle() {
    cout << "le pion peut allez deux case la premiere fois et une seule case s il est deplace" << endl;
}
char pion::Symbole() {
    return 'P';
}
void pion::changercoup () {
    if ( (etatinitiale==true) && (positionligne==1) ) {
       couppossible[positionligne+1]=positioncolonne;
       couppossible[positionligne+2]=positioncolonne;
       cout<<"("<<positionligne+1<<","<<couppossible[positionligne+1]<<endl;;
    }
    else if (etatinitiale==false) {
       couppossible[positionligne+1]=positioncolonne;
    }
}
bool pion::estuncoup(int l , int e) {
    if ( l<8 && e<8) {
    if ( (etatinitiale==true) && (positionligne==1)&&((positioncolonne+1==e)||(positioncolonne+2==e)) ) {
        etatinitiale=false ;
        return true ;
        }
    else {
        return false ;
        cout<<"mouvement invalide" << endl;
    }
    }
    else {
        cout<<"cout impossible"<<endl;
    }
}
bool pion::peutattaquer(int l,int e) {
    if (1<l<8 && 1<e<8) {
        if ( ((positionligne + 1)==l) && ( ((positioncolonne +1)==e) ||((positioncolonne -1)==e)  ) ) {
            return true ;
        }
        else
            return false ;
    }
    else return false ;

}
