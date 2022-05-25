#include "table.h"

table::table()
{
    for ( int i = 0 ; i<8 ; i++ ) {
        p[i].setpositionligne(1);
        p[i].setpositioncolonne(i);
        p[i].couleur=true;
        p[i].etatinitiale=true;
    }
    for (int i=8 ; i<16 ; i++) {
        p[i].setpositionligne(6);
        p[i].setpositioncolonne(i-8);
        p[i].couleur=false;
        p[i].etatinitiale=true;
    }
    //pion d'adversaire
    //cout << " la table duju a etait cree" << endl ;
    for (int i=0 ; i<=7 ; i++ ) {
        for ( int j=0 ; j<=7 ; j++ ) {
            tab[i][j]=' ';
        }
    }
}
table::~table()
{
    //cout << " la table du jeu a etait supprime"<<endl;
}
void table::afficher() {
    HANDLE h =GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<"  " ;
    for ( char c='a';c<'i';c++) {
        cout <<"| "<<c<<" ";
    }
    cout<<"|"<<endl;
    cout<<"--------------------------------------"<<endl;
    for (int i=0 ; i<2 ; i++ ) {
        cout<<i<<" ";
        for (int j=0 ; j<=7 ; j++ ) {
        SetConsoleTextAttribute(h,4);
        cout<<"| "<<tab[i][j]<<" ";
        }
    SetConsoleTextAttribute(h,7);
    cout<<"| "<<i<<" | "<<endl;
    cout <<endl;
}
//el partie el bidha eli fel west
for (int i=2 ; i<6 ; i++ ) {
    cout<<i<<" ";
    for (int j=0 ; j<=7 ; j++ ) {
    cout<<"| "<<tab[i][j]<<" ";
}
cout<<"| "<<i<<" | "<<endl;
cout <<endl;
}
//el partie el zar9a lekhra
for (int i=6 ; i<8 ; i++ ) {
    cout<<i<<" ";
    for (int j=0 ; j<=7 ; j++ ) {
    SetConsoleTextAttribute(h,1);
    cout<<"| "<<tab[i][j]<<" ";
}
SetConsoleTextAttribute(h,7);
cout<<"| "<<i<<" | "<<endl;
cout <<endl;
}
cout<<"--------------------------------------"<<endl;
cout<<"  " ;
    for ( char c='a';c<'i';c++) {
        cout <<"| "<<c<<" ";
    }
    cout<<"|"<<endl;
}
void table::modifiertable( ) {
    for (int i=0 ; i<8 ; i++ ) {
        tab[p[i].getpositionligne()][p[i].getpositioncolonne()]=p[i].Symbole();
    }
    /*for (int i=0 ; i<8 ; i++ ) {
        p[i].changercoup( );
    }*/
    for (int i=8 ; i<16 ; i++ ) {
        tab[p[i].getpositionligne()][p[i].getpositioncolonne()]=p[i].Symbole();
    }
    /*for (int i=8 ; i<16 ; i++ ) {
        p[i].changercoup( );
    }*/
}

bool table::casevide( int l , int c) {
    return ( tab[l][c]==' ');
}
void table::movepiece(int a,int b,int c, int d ) {
    for (int i=0 ; i<8 ; i++ ) {
      if(( p[i].getpositionligne()==a)&&(p[i].getpositioncolonne()==b ) ) {
        if (peutattaquer(p[i] , c , d)) {
            attaquer(p[i],c,d);
        }
        else if ( p[i].estuncoup(c,d) && casevide(c,d) ) {
            tab[a][b]=' ';
            p[i].setpositionligne(c);
            p[i].setpositioncolonne(d);
        }
    }
    }
}
bool table::Couleurpiece(int l , int c) {
if (!casevide(l,c)) {
    for (int i=0;i<16;i++) {
    if ( (p[i].positionligne==l) && (p[i].positioncolonne==c) ) {
        return (p[i].couleur);
    }
}
}
}
bool table::peutattaquer(piece p , int l , int e) {
     if (1<l<8 && 1<e<8) {
        if ( ((p.positionligne + 1)==l) && ( ((p.positioncolonne +1)==e) ||((p.positioncolonne -1)==e)  ) && !casevide(l,e) && (Couleurpiece(l,e)!=p.couleur) ) {
            return true ;
        }
        else
            return false ;
    }
    else return false ;

}
void table::attaquer (pion k , int l , int c) {
    for (int i=8;i <16;i++) {
        if (p[i].positioncolonne==c && p[i].positionligne==l) {
            p [i]= k ;
        }
    }
}
/*
void table::changercoup1(piece p) {
    if ( (p.positionligne+1 <9) && (p.positioncolonne+1 < 9) && !casevide(p.positionligne+1,p.positioncolonne+1) )
        {
            p.couppossible[p.positionligne+1]=p.positioncolonne+1;
        }
    else if ( (p.positionligne+1 <9) && (p.positioncolonne-1 > 0 ) &&!casevide(p.positionligne+1,p.positioncolonne-1) )
        {
            p.couppossible[p.positionligne+1]=p.positioncolonne-1;
         }
    if (p.etatinitiale && p.positionligne==1) {
       p.couppossible[p.positionligne+1]=p.positioncolonne;
       p.couppossible[p.positionligne+2]=p.positioncolonne;
    }
    else {
       p.couppossible[p.positionligne+1]=p.positioncolonne;
    }

}*/
