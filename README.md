# Kito

Kito is a functional object-oriented programming language from ML family. It's heavily inspired by OCaml, Lua and Zig. Written in [Orthodox C++](https://gist.github.com/bkaradzic/2e39896bc7d8c34e042b).

### Main features and design goals

- Full language accessibility during compile-time - this feature borrows from D's CTFE and Zig's `comptime` keyword.
- Interoperability within the NekoVM ecosystem
- Rich and flexible type system without runtime overhead
- Compile-time reflection for all parts of the language
- Hygienic AST macros for extending language syntax
- Tooling and LSP-driven development

### Non-goals

- Being usable in production
- High performance