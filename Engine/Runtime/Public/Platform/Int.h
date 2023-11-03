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

#ifndef LEGION_INTEGER_H
#define LEGION_INTEGER_H

namespace Legion
{
#if defined(_MSC_VER)
    /// 8-bit signed integer.
    using int8 = signed __int8;
    /// 16-bit signed integer.
    using int16 = signed __int16;
    /// 32-bit signed integer.
    using int32 = signed __int32;
    /// 64-bit signed integer.
    using int64 = signed __int64;
    /// 8-bit unsigned integer.
    using uint8 = unsigned __int8;
    /// 16-bit unsigned integer.
    using uint16 = unsigned __int16;
    /// 32-bit unsigned integer.
    using uint32 = unsigned __int32;
    /// 64-bit unsigned integer.
    using uint64 = unsigned __int64;
#else
    /// 8-bit signed integer.
    using int8 = signed char;
    /// 16-bit signed integer.
    using int16 = signed short;
    /// 32-bit signed integer.
    using int32 = signed int;
    /// 64-bit signed integer.
    using int64 = signed long long;
    /// 8-bit unsigned integer.
    using uint8 = unsigned char;
    /// 16-bit unsigned integer.
    using uint16 = unsigned short;
    /// 32-bit unsigned integer.
    using uint32 = unsigned int;
    /// 64-bit unsigned integer.
    using uint64 = unsigned long long;
#endif

    /// Min value for a variable of type `int8`.
    constexpr size INT8_MIN  = -128;
    /// Max value for a variable of type `int8`.
    constexpr size INT8_MAX  =  127;
    /// Min value for a variable of type `int16`.
    constexpr size INT16_MIN = -32'768;
    /// Max value for a variable of type `int16`.
    constexpr size INT16_MAX =  32'767;
    /// Min value for a variable of type `int32`.
    constexpr size INT32_MIN = -2'147'483'648;
    /// Max value for a variable of type `int32`.
    constexpr size INT32_MAX =  2'147'483'647;
    /// Min value for a variable of type `int64`.
    constexpr size INT64_MIN = -9'223'372'036'854'775'808;       
    /// Max value for a variable of type `int64`.
    constexpr size INT64_MAX =  9'223'372'036'854'775'807;

    /// Max value for a variable of type `uint8`.
    constexpr usize UINT8_MAX  = 0xFF;
    /// Max value for a variable of type `uint16`.
    constexpr usize UINT16_MAX = 0xFFFF;
    /// Max value for a variable of type `uint32`.
    constexpr usize UINT32_MAX = 0xFFFF'FFFF;
    /// Max value for a variable of type `uint64`.
    constexpr usize UINT64_MAX = 0xFFFF'FFFF'FFFF'FFFF;
}

#endif //! LEGION_INTEGER_H