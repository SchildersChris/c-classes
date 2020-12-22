#include "test.h"

int main() {
    Test test1 = TestClass.new("Hello world\n");
    test1.print(&test1);
    TestClass.dispose(&test1);

    Test test2 = TestClass.new("Hello world2 :)");
    test2.print(&test2);
    TestClass.dispose(&test2);

    return 0;
}
