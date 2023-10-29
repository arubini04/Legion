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

#ifndef LEGION_SYSTEM_H
#define LEGION_SYSTEM_H

//! Whether we're running on Windows.
#if defined(_WIN32) || defined(__WINDOWS__)
#define LEGION_WINDOWS 1
#else
#define LEGION_WINDOWS 0
#endif

//! Whether we're running on Linux.
#if defined(__linux__)
#define LEGION_LINUX 1
#else
#define LEGION_LINUX 0
#endif

//! Whether we're running on x86
#if defined(_M_IX86) || defined(__x86_64__)
#define LEGION_X86 1
#else
#define LEGION_X86 0
#endif

//! Whether we're running on AMD64 / x86_64 / x64
#if defined(_M_AMD64) || defined(__x86_64__)
#define LEGION_X64 1
#else
#define LEGION_X64 0
#endif

//! Whether we're running on a Windows platform.
#define LEGION_FAMILY_WINDOW LEGION_WINDOWS

//! Whether we're running on a x86 (both 32 and 64 bit)
#define LEGION_FAMILY_X86 (LEGION_X86 || LEGION_X64)

//! Whether we're running a 64bit application.
#define LEGION_64BIT LEGION_X64

#endif //! LEGION_SYSTEM_H