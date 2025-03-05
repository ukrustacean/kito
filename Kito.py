from sys import argv, stderr

def printError(error: str):
    print(error, file=stderr)

def printHelp():
    print(f"Usage: {argv[0]} COMMAND [PARAMETERS]")
    print("Available commands:")
    print("\tr, run FILE  -  interpret a file with Kito source code")
    print("\tc, comp, compile FILE  -  compile a file with Kito source code to executable file via system C++ compiler")
    print("\th, help ?COMMAND  -  print out a help message for the specified command or a general help if not specified")

def runFile(file: str):
    print(f"Run file: {file}")

def compileFile(file: str):
    print(f"Compile file: {file}")

def checkArg(number: int, error: str):
    if len(argv) < number + 1:
        printError(error)
        exit(1)

def main():
    checkArg(0, "Can't get program's name")
    checkArg(1, "No arguements provided")

    command = argv[1]

    if command in ["r", "run"]:
        checkArg(2, "No file provided")
        runFile(argv[2])
    elif command in ["c", "comp", "compile"]:
        checkArg(2, "No file provided")
        compileFile(argv[2])
    elif command in ["h", "help"]:
        printHelp()
    else:
        printError(f"Unknown command: {command}")
        printHelp()
        exit(1)

if __name__ == "__main__":
    main()