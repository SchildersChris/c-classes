#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "string.h"

static void print(String* this) {
    fwrite(this->buffer, 1, this->size, stdout);
}

static String new(const char* buffer, size_t size) {
    String this = {
        .size = size + 1,
        .buffer = malloc(size + 1),
        .print = &print
    };

    memcpy((char*)this.buffer, buffer, size);
    *((char*)this.buffer + size) = '\0';

    return this;
}

static void destruct(String* instance) {
    free((char*)instance->buffer);
}

const struct StringClass StringClass = { .new = &new, .destruct = &destruct };
