// Copyright (c) 2023 Angelo Rubini
// This code is licensed under MIT license (see LICENSE.txt for details)

#include <Legion/Memory/Memory.h>

#include "Platform/PlatformMemory.h"

void* Legion::Memory::Allocate(uint64 bytes, uint8 alignment) {
    return _aligned_malloc(bytes, alignment);
}

void* Legion::Memory::Realloc(void* ptr, uint64 bytes, uint8 alignment) {
    return _aligned_realloc(ptr, bytes, alignment);
}

void Legion::Memory::Free(void* ptr) {
    _aligned_free(ptr);
}