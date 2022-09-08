#include <iostream>
#include "../hdr/Bob.h"
#include "../hdr/Alice.h"

int main() {
    int p = 32876;
    Bob test1(12645, p);
    Alice test2(54378, p);
    test1.takeOpenKey(test2.createAndSend());
    test2.takeOpenKey(test1.createAndSend());
    return 0;
}
