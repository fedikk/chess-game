#ifndef TABLE_H
#define TABLE_H
#include <iostream>
using namespace std;
#include<windows.h>
#include"pion.h"

class table
{
    public:
    char tab[8][8];
    pion p[16];
    piece echequier [16];
    pion p1av,p2av,p3av,p4av,p5av,p6av,p7av,p8av,p9av,p10av,p11av,p12av;
        table();
        virtual ~table();
        void afficher();
        void modifiertable() ;
        bool casevide(int,int);
        void movepiece(int ,int,int,int);
        void changercoup1(piece);
        bool Couleurpiece(int,int);
        bool peutattaquer(piece,int,int);
        void attaquer(pion,int,int);
    protected:

    private:
};

#endif // TABLE_H
