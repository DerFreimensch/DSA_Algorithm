#include <iostream>
#include "../hdr/Bob.h"
#include "../hdr/Alice.h"

int main() {
    int p = 23;
    Bob test1(15, p);
    Alice test2(6, p);
    test1.takeOpenKey(test2.createAndSend());
    test2.takeOpenKey(test1.createAndSend());
    return 0;
}
