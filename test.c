#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "test.h"

static void print(Test* this) {
    printf("Len: %lu\n", strlen(this->message));
    printf("%s\n", this->message);
}

static Test new(const char* message) {
    ulong len = strlen(message);

    Test this = (Test) {
        .message = malloc(sizeof(char) * (len + 1)),
        .print = &print
    };

    strcpy((char*)this.message, message);
    *((char*)this.message + len) = '\0';

    return this;
}

static void dispose(Test* instance) {
    free((char*)instance->message);
}

const struct TestClass TestClass = { .new = &new, .dispose = &dispose };