#ifndef CLASSES_STRING_H
#define CLASSES_STRING_H

typedef struct String {
    const size_t size;
    const char* buffer;
    void (*print)(struct String* this);
} String;

extern const struct StringClass {
    String (*new)(const char* message, size_t len);
    void (*dispose)(String* instance);
} StringClass;

#endif //CLASSES_STRING_H
