# Kito

Kito is a functional object-oriented programming language from ML family targeting Lua ecosystem. It's heavily inspired by OCaml, Lua and Zig. Temporarily written in Go.

## Main features and design goals

### Tier 1 goals
- Full language accessibility during compile-time
- Compile-time reflection for all parts of the language

### Tier 2 goals
- Transpilation to Lua as well as compilation to LuaVM bytecode
- Interoperability within the Lua ecosystem
- Tooling and LSP-driven development

### Tier 3 goals
- Rich and flexible type system without runtime overhead
- Hygienic AST macros for extending language syntax

### Non-goals
- Being usable in production
- High performance