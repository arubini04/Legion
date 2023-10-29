workspace "Legion"
   configurations { "Debug", "Release" }
   platforms { "Win32", "Win64" }
   

outdir = "%{cfg.buildcfg}/%{cfg.system}-%{cfg.architecture}"

project "Runtime"
   kind "ConsoleApp"
   -- kind "StaticLib"
   language "C++"
   cppdialect "C++20"
   location "%{_WORKING_DIR}"

   targetdir ("../Build/Bin/" .. outdir)
   objdir    ("../Build/Obj/" .. outdir)

   files { 
      "Runtime/**.h",   "Runtime/**.hpp", "Runtime/**.hh", "Runtime/**.hxx",
      "Runtime/**.c",   "Runtime/**.cpp", "Runtime/**.cc", "Runtime/**.cxx",
      "Runtime/**.ixx", "Runtime/**.cppm"
   }

   includedirs {
      "Runtime"
   }

   filter "platforms:Win32"
      architecture "x86"

   filter "platforms:Win64"
      architecture "x64"

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"