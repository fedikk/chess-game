#include"piece.h"
#include"pion.h"
#include"table.h"

int main()
{
    /*pion p,p2 ;
    p.setpositioncolonne(0);
    p.setpositionligne(1);
    p.changercoup();
    if (p.estuncoup(2,0)) {
        cout<<"c'est un coup possible"<<endl;
    }
    else {
        cout<<"n'est pas un coup "<<endl;
    }
    p2.setpositioncolonne(1);
    p2.setpositionligne(2);
    p2.changercoup();
    if (p.peutattaquer(2,1)) {
        cout<<"il peut manger"<<endl;
    }*/
    table table;
    table.modifiertable();
    table.afficher();
    table.movepiece(1,5,2,5);
    table.modifiertable();
    table.afficher();
    table.movepiece(1,5,1,5);
    table.modifiertable();
    table.afficher();
    /*table.movepiece(2,5,3,5);
    table.modifiertable();
    table.afficher();
    table.movepiece(3,5,4,5);
    table.modifiertable();
    table.afficher();
    table.movepiece(4,5,5,5);
    table.modifiertable();
    table.afficher();
    table.movepiece(5,5,6,5);
    table.modifiertable();
    table.afficher();
    table.movepiece(5,5,2,5);
    table.modifiertable();
    table.afficher();
    if (table.peutattaquer(table.p[5],6,6)) {
        cout<<"le pion peut attaquer"<<endl;
    }
    if (table.peutattaquer(table.p[5],6,4)) {
        cout<<"le pion peut attaquer"<<endl;
    }
    if (!table.peutattaquer(table.p[5],6,2)) {
        cout<<"le pion ne peut pas  attaquer"<<endl;
    }*/
    /*if (table.Couleurpiece(3,5)) {
        cout<<"la couleur de piece (3,5) est blanc " <<endl;
    }*/

    return 0;
}
