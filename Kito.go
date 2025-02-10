//      Copyright Ivan "ukrustacean" Dereviankin 2025.
// Distributed under the Boost Software License, Version 1.0.
//        (See accompanying file LICENSE or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

package main

import (
	"fmt"
	"log"
	"os"
)

type TodoError struct {
	FunctionName string
}

func (err TodoError) Error() string {
	return fmt.Sprintf("error: function `%s` is not implemented", err.FunctionName)
}

func Todo(name string) error {
	return TodoError{name}
}

func main() {
	if len(os.Args) < 1 {
		log.Fatalln("error: could not get program name")
	}

	name := os.Args[0]

	if len(os.Args) < 2 {
		log.Println("error: no arguments provided")
		PrintHelp(name)
		os.Exit(1)
	}

	command := os.Args[1]

	switch command {
	case "h", "help":
		PrintHelp(name)
		os.Exit(0)

	case "v", "version":
		PrintVersion()
		os.Exit(0)

	case "r", "run":
		if len(os.Args) < 3 {
			log.Fatalln("error: no files were provided for the `run` command")
		}
		if err := RunFile(os.Args[2]); err != nil {
			log.Fatalf("error: running file `%s` failed: %s", os.Args[2], err)
		}

	case "c", "comp", "compile":
		if len(os.Args) < 3 {
			log.Fatalln("error: no files were provided for the `compile` command")
		}
		if err := CompileFile(os.Args[2]); err != nil {
			log.Fatalf("error: compiling file `%s` failed: %s", os.Args[2], err)
		}

	default:
		log.Fatalf("error: unknown command '%s'\n", command)
	}
}

func PrintHelp(name string) {
	fmt.Printf("Usage: %s COMMAND [PARAMETERS]\n", name)
	fmt.Print("Available commands:\n")
	fmt.Print("\tr, run FILE            -  interpret a file with Kito source code\n")
	fmt.Print("\tc, comp, compile FILE  -  compile a file with Kito source code to bytecode executable by NekoVM\n")
	fmt.Print("\th, help ?COMMAND       -  print out a help message for the specified command or a general help if not specified\n")
}

func PrintVersion()                   {}
func RunFile(source string) error     { return Todo("RunFile") }
func CompileFile(source string) error { return Todo("CompileFile") }
