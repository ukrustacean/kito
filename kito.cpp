//       Copyright Ivan "ukrustacean" Dereviankin 2025.
// Distributed under the Boost Software License, Version 1.0.
//        (See accompanying file LICENSE or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TODO do { printf(__FUNCTION__); printf(" is not yet implemented.\n"); exit(1); } while (0)

typedef char *string;

void PrintHelp(const string name);
int RunFile(const string source);
int TranspileFile(const string source);
int CompileFile(const string source);

int main(int argc, const string argv[]) {
    if (argc < 1) {
        printf("Can't get program's name");
        return 1;
    }

    if (argc < 2) {
        PrintHelp(argv[0]);
        return 1;
    }

    if (!strcmp(argv[1], "r") || !strcmp(argv[1], "run")) {
        if (argc < 3) {
            printf("ERROR: No files were provided for the run command");
            return 1;
        }
        RunFile(argv[2]);
    }

    return 0;
}

void PrintHelp(const string name) {
    printf("Usage: %s COMMAND [PARAMETERS]\n", name);
    printf("Available commands:\n");
    printf("\tr, run FILE  -  interpret a file with Kito source code\n");
    printf("\tt, trans, transpile FILE  -  transpile a file with Kito source code to C++ source file\n");
    printf("\tc, comp, compile FILE  -  compile a file with Kito source code to executable file via system C++ compiler\n");
    printf("\th, help ?COMMAND  -  print out a help message for the specified command or a general help if not specified\n");
}


int RunFile(const string source) { TODO; }
int TranspileFile(const string source) { TODO; }
int CompileFile(const string source) { TODO; }