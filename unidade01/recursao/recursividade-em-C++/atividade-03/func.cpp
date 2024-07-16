#include "func.hpp"

bool verificaPrimo(int numero){
    int cont;
    if(numero == 1)
        return 1;
    else{
        if(numero % verificaPrimo(numero--) == 1);
            cont++;
    }

    if(cont > 2)
        return false;
    else 
        return true;

}