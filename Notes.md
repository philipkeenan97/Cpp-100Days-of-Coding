# Notes from following C++ Programming Course

## Day 2/100
### Date: 24/07/2022
#### Errors & Warnings:
- Three types of errors/warnings:
    1. Compile time errors: occur during compiling code into binary executable; code could not compile.
    2. Runtime errors: occur due to logical errors, happen while running the executable code. 
    3. Warnings: Will not cause a crash/non-compile but may cause issues further along.
## Day 3/100
### Date: 26/07/2022
#### Statements & Functions
- A statement is a basic unit of computation in a C++ program.
- Every C++ program is a collection of statements organised in a certain way to achieve some goal.
- Statements end with a semicolon in C++ (;).
- Statements are ececuted in order from top to bottom when the program is run.
- Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements.
- A function must be defined before its use.
- I learned that you have to define a function before calling it in the main function that is run. I knew this from Python, however, the set up is slightlu=y different.
- Functions have to be defined with int (for now all I know), then named, then each parameter must be defined by format (int/string/etc) and then named.
    - Format: define Name (define para) {Content/Function code }
#### Input Output
- std::cout is one way of printing outputs from code to terminal.
    - std::cout : Printing data to the console (terminal).
    - std::cin : Reading data from the terminal. 
    - std::cerr : Printing errors to the console.
    - std::clog : Printing log messages to the console.
- "<<" and ">>" are to indicate direction data is flowing:
    - "cout << variable" the data from the variable is flowing into cout to be printed.
    - "cin >> variable" the data from cin is flowing into variable to be stored in the program.
- To read in data with spaces, use std::getline(std::cin,full_variable);

#### Execution & Memory model
- Program is compiled into a binary executable that the computer then runs.
- Binary is loaded into RAM when run, the CPU then runs it line by line and alocates space in the RAM for variables as necessary.
- The CPU prints output statements from RAM to terminal as it gets to them.
- When running functions, it jumps to another location in RAM, but stores the location of the last line of the code that it ran so that it can return. It does this in CPU memory.
- In the new location, it loads in any parameters needed to run the function, and then completes it.
- Useful to know in order to optimise code.
- Rather than jumping to new locations of memeory to preform a simple task, complete it in the line of code.