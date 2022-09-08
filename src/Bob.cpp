//
// Created by kdmar on 06.09.2022.
//

#include "../hdr/Bob.h"

Bob::Bob(int keyB, int p): p(p), b(keyB){
    this->g = my_generator(p);
    this->B = 0;
    //std::cout << g;
}

int Bob::MyNOD(int a, int b)
{
    while(a > 0 && b > 0)

        if(a > b)
            a %= b;
        else
            b %= a;

    return a + b;
}

int Bob::FMP (int a, int b, int p) {
    int res = 1;
    while (b)
        if (b & 1)
            res = int (res * 1ll * a % p),  --b;
        else
            a = int (a * 1ll * a % p),  b >>= 1;
    return res;
}

int Bob::my_generator (int p) {
    std::vector<int> fact;
    int phi = p-1,  n = phi;
    for (int i=2; i*i<=n; ++i)
        if (n % i == 0) {
            fact.push_back (i);
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        fact.push_back (n);

    for (int res=2; res<=p; ++res) {
        bool ok = true;
        for (std::size_t i=0; i<fact.size() && ok; ++i)
            ok &= FMP(res, phi / fact[i], p) != 1;
        if (ok and MyNOD(res, n)==1)  return res;
    }
    return -1;
}

int Bob::createAndSend() {
    this->B = Bob::FMP(g, b, p);
    std::cout << "Bob create open key:  " << this->B << std::endl;
    return this->B;
}

void Bob::takeOpenKey(int key) {
    this->s = Bob::FMP(key, b, p);
    std::cout << "Bob secure key:  " << this->s << std::endl << std::endl;
}


