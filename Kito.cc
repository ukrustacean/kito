//       Copyright Ivan "ukrustacean" Dereviankin 2025.
// Distributed under the Boost Software License, Version 1.0.
//        (See accompanying file LICENSE or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <stdlib.h>
#include <stdio.h>

#include "String.hh"

#define TODO do { printf(__FUNCTION__); printf(" is not yet implemented.\n"); exit(1); } while (0)

void PrintHelp(const String& name);
int RunFile(const String& source);
int CompileFile(const String& source);

int main(const int argc, const char *argv[]) {
    if (argc < 1) {
        printf("Can't get program's name");
        return 1;
    }

    if (argc < 2) {
        PrintHelp(argv[0]);
        return 1;
    }

    String command = argv[1];

    if (command == "r" || command == "run") {
        if (argc < 3) {
            printf("ERROR: No files were provided for the run command");
            return 1;
        }
        RunFile(command);
        return 0;
    }

    if (command ==  "c" || command == "comp" || command == "compile") {
        if (argc < 3) {
            printf("ERROR: No files were provided for the run command");
            return 1;
        }
        CompileFile(command);
        return 0;
    }

    printf("ERROR: Unknown command `%s`", command.CStr());
}

void PrintHelp(const String& name) {
    printf("Usage: %s COMMAND [PARAMETERS]\n", name.CStr());
    printf("Available commands:\n");
    printf("\tr, run FILE  -  interpret a file with Kito source code\n");
    printf("\tc, comp, compile FILE  -  compile a file with Kito source code to executable file via system C++ compiler\n");
    printf("\th, help ?COMMAND  -  print out a help message for the specified command or a general help if not specified\n");
}


int RunFile(const String& source) { TODO; }
int CompileFile(const String& source) { TODO; }
