# CSDET

Overview
C SDET is a C-based software testing project built and compiled using Microsoft's cl.exe compiler.

The project contains C source code, test-case documentation, Visual Studio Code configuration, and compiler-generated build/debug artifacts.

Project Structure
C SDET/
│
├── .vscode/
│   ├── c_cpp_properties.json   # C/C++ IntelliSense configuration
│   └── tasks.json              # Build task configuration
│
├── .gitignore                  # Git ignore rules
│
├── C_SDET_Testcases.xlsx       # Test case documentation
│
├── CSampletest.c               # C source code
│
├── CSampletest.exe             # Compiled executable
├── CSampletest.ilk             # Incremental linker file
├── CSampletest.obj             # Compiled object file
├── CSampletest.pdb             # Debug symbols
├── vc140.pdb                   # Visual C/C++ debug information
│
└── README.md                   # Project documentation

## Prerequisites

The following are required to build and run this project:

- Windows
- Visual Studio Code
- Microsoft C/C++ compiler (`cl.exe`)


Build Environment
This project uses the Microsoft Visual C/C++ (MSVC) toolchain.

The primary compiler is:

cl.exe

The typical compilation flow is:

CSampletest.c
      │
      ▼
   cl.exe
      │
      ├── CSampletest.obj
      ├── CSampletest.pdb
      └── CSampletest.exe

Build the Project
Using Developer Command Prompt
Open Developer Command Prompt for Visual Studio.

Navigate to the project directory:

cd "C:\path\to\C SDET"

Compile the source:

cl CSampletest.c

This will compile and link the C source code and generate the executable:

CSampletest.exe

Run the Application
After a successful build:

CSampletest.exe

Or:

.\CSampletest.exe

Test Cases
Test cases are maintained in:

C_SDET_Testcases.xlsx

Development Workflow
1. Modify CSampletest.c
2. Update test cases in C_SDET_Testcases.xlsx
3. Build using cl.exe
4. Run CSampletest.exe
5. Execute test scenarios
6. Verify actual vs. expected results
7. Record test results
8. Commit source/test-case changes