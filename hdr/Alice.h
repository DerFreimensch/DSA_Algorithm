//
// Created by kdmar on 06.09.2022.
//

#ifndef DSA_ALGORITHM_ALICE_H
#define DSA_ALGORITHM_ALICE_H

#include <vector>
#include <iostream>
#include <cmath>

class Alice {
private:
    int p;
    int g;
    int a;
    int s;
    int A;

public:
    Alice(int keyA, int p);
    static int my_generator (int p);
    static int FMP (int a, int b, int p);
    static int MyNOD(int a, int b);
    int createAndSend();
    void takeOpenKey(int key);
};


#endif //DSA_ALGORITHM_ALICE_H
