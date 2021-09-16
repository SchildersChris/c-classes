#include <memory.h>
#include "string.h"

int main() {
    const char* buff1 = "Hello world1";
    String string1 = StringClass.new(buff1, strlen(buff1));
    string1.print(&string1);
    StringClass.destruct(&string1);

    const char* buff2 = "\nHello world2";
    String string2 = StringClass.new(buff2, strlen(buff2));
    string2.print(&string2);
    StringClass.destruct(&string2);

    return 0;
}
