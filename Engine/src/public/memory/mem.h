// Copyright (c) 2023 Angelo Rubini
// This code is licensed under MIT license (see LICENSE.txt for details)

// ╔═════════════════════════════════════════════════╗ //
// ║ ██╗     ███████╗ ██████╗ ██╗ ██████╗ ███╗   ██╗ ║ //
// ║ ██║     ██╔════╝██╔════╝ ██║██╔═══██╗████╗  ██║ ║ //
// ║ ██║     █████╗  ██║  ███╗██║██║   ██║██╔██╗ ██║ ║ //
// ║ ██║     ██╔══╝  ██║   ██║██║██║   ██║██║╚██╗██║ ║ //
// ║ ███████╗███████╗╚██████╔╝██║╚██████╔╝██║ ╚████║ ║ //
// ║ ╚══════╝╚══════╝ ╚═════╝ ╚═╝ ╚═════╝ ╚═╝  ╚═══╝ ║ //
// ╚═════════════════════════════════════════════════╝ //

#pragma once

#include "base/export.h"
#include "base/integer.h"

namespace legion::mem
{
    /// Allocates memory on a specified alignment boundary.
    ///
    /// \param size Size (in bytes) of the requested memory allocation.
    /// \param alignment The alignment value, which must be an integer power of 2.
    ///
    /// \return A pointer to the memory block that was allocated or `NULL` if the operation failed.
    LegionAPI void*
    Allocate(uint64 bytes, uint8 alignment);

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
    LegionAPI void*
    Realloc(void* ptr, uint64 bytes, uint8 alignment);

    /// Frees a block of memory that was allocated
    ///
    /// \param ptr A pointer to the memory block that was allocated.
    LegionAPI void
    Free(void* ptr);
}