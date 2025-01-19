# Kito

> Kito is temporarily in research phase. Development will continue after I figure out more details on the design I want to get as the result. 

Kito is a functional programming language from ML family specifically designed with competitive programming in the mind. It's heavily inspired by F#, OCaml, Rust and Go. Written in [Orthodox C++](https://gist.github.com/bkaradzic/2e39896bc7d8c34e042b).

Design goals of the Kito:
 - speed of the code writing. Competitive programmer should be able to write their thoughts down in code just as flowingly as possibly
 - output a single, minimized C++ file suitable for inserting into text inputs of the competitive programming websites
 - lightning-fast code emitting. All C++ compilers are pretty slwo so overhead of the Kito transpiler should be as minimal as possible
 - quality-of-life features for competitive programmers. This includes having a versatile toolkit of the most common data structures and algorithms in the `std` library for the language

Non-goals:
 - expressiveness at the cost of the code writing speed
 - readability or maintability of the written code or transpiled code
 - compatability or interopability with C++
 - staying "truthful" to the ML traditions or functional programming paradigm
 - optimization of the emitted code. C++ compiler should take care of that