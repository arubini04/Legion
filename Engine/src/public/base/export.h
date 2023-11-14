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

// Both `LEGION_BUILD_DLL` and `LEGION_EXPORT` are defined
// by the compiler or build system.
#if defined(_MSC_VER) && defined(LEGION_BUILD_DLL)
#if defined(LEGION_EXPORT)
#define LegionAPI __declspec(dllexport)
#else
#define LegionAPI __declspec(dllexport)
#endif
#else
#define LegionAPI
#endif