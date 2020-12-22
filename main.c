#include <memory.h>
#include "string.h"

int main() {
    const char* buff1 = "Hello world1 \n";
    String string1 = StringClass.new(buff1, strlen(buff1));
    string1.print(&string1);
    StringClass.dispose(&string1);

    const char* buff2 = "Hello world2 \n";
    String string2 = StringClass.new(buff2, strlen(buff2));
    string2.print(&string2);
    StringClass.dispose(&string2);

    return 0;
}
