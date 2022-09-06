//
// Created by kdmar on 06.09.2022.
//

#ifndef DSA_ALGORITHM_BOB_H
#define DSA_ALGORITHM_BOB_H

#include <vector>
#include <iostream>
#include <cmath>

class Bob {
private:
    int p;
    int g;
    int b;
    int s;
    int B;

public:
    Bob(int keyB, int p);
    static int my_generator (int p);
    static int my_powmod (int a, int b, int p);
    static int MyNOD(int a, int b);
    int createAndSend();
    void takeOpenKey(int key);
};


#endif //DSA_ALGORITHM_BOB_H
