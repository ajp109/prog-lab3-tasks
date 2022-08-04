#include "mbed.h"

void test() {
    int count = 3;
    printf("In test(), count = %d\r\n", count);
}

int main()
{
    int count = 5;
    
    test();
    
    printf("In main(), count = %d\r\n", count);
    
    // Do nothing, forever, when the program is complete
    while (true) sleep();
}
