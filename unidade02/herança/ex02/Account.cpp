#include <iostream>

class Account{
protected: 
    double saldo;
public:
    Account() : saldo(0.0){}
    void deposit(double value){
        saldo += value;
    }
    void saque(double value){
        if(saldo >= value)
            saldo -= value;
    }
    void setSaldo(double newSaldo){
        saldo = newSaldo;
    }
    double getSaldo(){
        return saldo;   
    }
};

class SavingsAccount : public Account{

};