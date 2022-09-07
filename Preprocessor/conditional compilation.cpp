/* Combined directives
Checks if the identifier was defined as a macro name.
#ifdef identifier is essentially equivalent to #if defined identifier.
#ifndef identifier is essentially equivalent to #if !defined identifier.

#elifdef identifier is essentially equivalent to #elif defined identifier.
#elifndef identifier is essentially equivalent to #elif !defined identifier.
(since C++23) */

#define ABCD 2
#include <iostream>
 
int main()
{
 
#ifdef ABCD
    std::cout << "1: yes\n";
#else
    std::cout << "1: no\n";
#endif
 
#ifndef ABCD
    std::cout << "2: no1\n";
#elif ABCD == 2
    std::cout << "2: yes\n";
#else
    std::cout << "2: no2\n";
#endif
 
#if !defined(DCBA) && (ABCD < 2*4-3)
    std::cout << "3: yes\n";
#endif
 
 
// Note that if a compiler does not support C++23's #elifdef/#elifndef
// directives then the "unexpected" block (see below) will be selected.
#ifdef CPU
    std::cout << "4: no1\n";
#elifdef GPU
    std::cout << "4: no2\n";
#elifndef RAM
    std::cout << "4: yes\n"; // expected block
#else
    std::cout << "4: no!\n"; // unexpectedly selects this block by skipping 
                             // unknown directives and "jumping" directly
                             // from "#ifdef CPU" to this "#else" block
#endif
 
// To fix the problem above we may conditionally define the
// macro ELIFDEF_SUPPORTED only if the C++23 directives
// #elifdef/#elifndef are supported.
#if 0             //Some people use it to avoid the compilation of some part  of code ( something similar to commenting the code out )
#elifndef UNDEFINED_MACRO
#define ELIFDEF_SUPPORTED
#else
#endif
 
#ifdef ELIFDEF_SUPPORTED
    #ifdef CPU
        std::cout << "4: no1\n";
    #elifdef GPU
        std::cout << "4: no2\n";
    #elifndef RAM
        std::cout << "4: yes\n"; // expected block
    #else
        std::cout << "4: no3\n";
    #endif
#else // when #elifdef unsupported use old verbose `#elif defined`
    #ifdef CPU
        std::cout << "4: no1\n";
    #elif defined GPU
        std::cout << "4: no2\n";
    #elif !defined RAM
        std::cout << "4: yes\n"; // expected block
    #else
        std::cout << "4: no3\n";
    #endif
#endif
}