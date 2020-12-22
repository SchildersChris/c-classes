#ifndef CLASSES_TEST_H
#define CLASSES_TEST_H

typedef struct Test {
    const char* message;
    void (*print)(struct Test* this);
} Test;

extern const struct TestClass {
    Test (*new)(const char* message);
    void (*dispose)(Test* instance);
} TestClass;

#endif //CLASSES_TEST_H
