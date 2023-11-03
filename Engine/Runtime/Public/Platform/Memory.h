/* ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ *
 * ┃ Copyright (c) 2023-present Angelo Rubini                                       ┃ *
 * ┃ ────────────────────────────────────────────────────────────────────────────── ┃ *
 * ┃ Permission is hereby granted, free of charge, to any person obtaining a copy   ┃ *
 * ┃ of this software and associated documentation files (the "Software"), to deal  ┃ *
 * ┃ in the Software without restriction, including without limitation the rights   ┃ *
 * ┃ to use, copy, modify, merge, publish, distribute, sublicense, and/or sell      ┃ *
 * ┃ copies of the Software, and to permit persons to whom the Software is          ┃ *
 * ┃ furnished to do so, subject to the following conditions:                       ┃ *
 * ┃                                                                                ┃ *
 * ┃ The above copyright notice and this permission notice shall be included in all ┃ *
 * ┃ copies or substantial portions of the Software.                                ┃ *
 * ┃                                                                                ┃ *
 * ┃ THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR     ┃ *
 * ┃ IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,       ┃ *
 * ┃ FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE    ┃ *
 * ┃ AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER         ┃ *
 * ┃ LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,  ┃ *
 * ┃ OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE  ┃ *
 * ┃ SOFTWARE.                                                                      ┃ *
 * ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ */

// ╔═════════════════════════════════════════════════╗ //
// ║ ██╗     ███████╗ ██████╗ ██╗ ██████╗ ███╗   ██╗ ║ //
// ║ ██║     ██╔════╝██╔════╝ ██║██╔═══██╗████╗  ██║ ║ //
// ║ ██║     █████╗  ██║  ███╗██║██║   ██║██╔██╗ ██║ ║ //
// ║ ██║     ██╔══╝  ██║   ██║██║██║   ██║██║╚██╗██║ ║ //
// ║ ███████╗███████╗╚██████╔╝██║╚██████╔╝██║ ╚████║ ║ //
// ║ ╚══════╝╚══════╝ ╚═════╝ ╚═╝ ╚═════╝ ╚═╝  ╚═══╝ ║ //
// ╚═════════════════════════════════════════════════╝ //

#ifndef LEGION_MEMORY_H
#define LEGION_MEMORY_H

#include "Platform/Export.h"
#include "Platform/Int.h"

namespace Legion::System
{
    /// Allocates memory on a specified alignment boundary.
    ///
    /// \param size Size (in bytes) of the requested memory allocation.
    /// \param alignment The alignment value, which must be an integer power of 2.
    ///
    /// \return A pointer to the memory block that was allocated or `NULL` if the operation failed.
    LEGION_API void* Allocate(uint64 bytes, uint8 alignment);

    /// Changes the size of a memory block that was allocated.
    ///
    /// \param ptr A pointer to the memory block that was allocated.
    /// \param size Size (in bytes) of the requested memory allocation.
    /// \param alignment The alignment value, which must be an integer power of 2.
    ///
    /// \return A pointer to the reallocated (and possibly moved) memory block.
    ///         The return value is `NULL` if the size is zero and the buffer argument isn't `NULL`, or
    ///         if there isn't enough available memory to expand the block to the given size.
    ///         In the first case, the original block is freed; in the second, the original block is unchanged.
    ///         The return value points to a storage space that is suitably aligned for
    ///         storage of any type of object.
    LEGION_API void* Realloc(void* ptr, uint64 bytes, uint8 alignment);

    /// Frees a block of memory that was allocated
    ///
    /// \param ptr A pointer to the memory block that was allocated.
    LEGION_API void Free(void* ptr);
}

#endif //! LEGION_MEMORY_H