#include "piece.h"

piece::piece()
{
        etatinitiale=true ;
}

piece::~piece()
{
       //cout << "une piece a etait supprimee "<<endl;
}
int  piece::getpositionligne() {
    return positionligne ;
}
int  piece::getpositioncolonne() {
    return positioncolonne ;
}
void  piece::setpositionligne(int e) {
     positionligne=e ;
}
void  piece::setpositioncolonne(int e) {
     positioncolonne=e ;
}
void piece::modifierpos () {
   cout<<"slm "<<endl;
}
piece piece::operator = (piece p ) {
piece inter ;
inter.positionligne=p.positionligne;
inter.positioncolonne=p.positioncolonne;
inter.couleur=p.couleur;
inter.couppossible=p.couppossible;
inter.etatinitiale=p.etatinitiale ;
}

