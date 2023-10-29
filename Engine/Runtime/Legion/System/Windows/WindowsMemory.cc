#include "Legion/System/Memory.h"

#include <malloc.h>

void* Legion::System::Allocate(usize bytes, usize alignment) {
    return _aligned_malloc(bytes, alignment);
}

void* Legion::System::Realloc(void* ptr, usize bytes, usize alignment) {
    return _aligned_realloc(ptr, bytes, alignment);
}

void Legion::System::Free(void* ptr) {
    _aligned_free(ptr);
}