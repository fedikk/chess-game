#ifndef PION_H
#define PION_H

#include <piece.h>


class pion : public piece
{
    public:
        //int positionligne,positioncolonne ;
        bool etatinitiale;
        pion();
        virtual ~pion();
        void regle();
        char Symbole();
        void changercoup();
        bool estuncoup (int,int);
        bool peutattaquer(int,int);
    protected:

    private:
};

#endif // PION_H
