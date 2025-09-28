# CST1500 Coursework 1 – README

## Project Overview
This repository contains the coursework for CST1500, consisting of 10 Small Objective-Based (SOB) exercises. The project demonstrates basic and intermediate programming concepts in **C**, **Batch scripting**, and **Bash scripting**. It covers topics such as console output, user input, arithmetic operations, control structures, functions, pointers, file management, and automation tasks.

The goal of these exercises is to strengthen problem-solving and programming skills across multiple environments.


## SOB Details

### CW1SOB1 – A Simple C Program
**Purpose:** Display personal details and perform arithmetic calculations.  
**Features:**  
- Outputs student name, student ID, degree programme, and reason for studying the programme.  
- Performs 4 calculations (+, -, *, /) using numbers from the student ID.  
- Includes relevant comments explaining the code.


### CW1SOB2 – A C Program with User Input
**Purpose:** Accept user input for numbers and name, perform arithmetic operations, and display personalized results.  
**Features:**  
- Takes numbers entered by the user and performs addition, subtraction, multiplication, and division.  
- Displays results along with the user’s name:  

### CW1SOB3 – A C Program with User Input and Control Structures

Purpose: Classify exam scores based on user input using conditional statements.
Features:

Accepts an integer exam score from the user.

Outputs the score along with a classification:

0 - 39 = FAIL

40 – 49 = THIRD

50 - 59 = LOWER SECOND

60 – 69 = UPPER SECOND

70 – 100 = FIRST

Continues prompting until -1 is entered.

Includes comments for clarity.

Student_Name has entered X and Y. X + Y equals Z.
Student_Name has entered X and Y. X * Y equals Z.

----


### CW1SOB4 – A C Program Password Entry System

Purpose: Demonstrate functions, loops, and user authentication.
Features:

Prompts the user for a number X, then calls printName function to print the user’s name X times.

Calls passwordEntry function to validate a password with a maximum of 3 attempts.

Provides success or failure messages based on attempts.

Includes clear instructions and comments in the code.
---- 

### CW1SOB5 – An Advanced C Program Using Pointers

Purpose: Perform arithmetic operations using pointers.
Features:

Accepts two numbers from the user using pointers.

Calculates sum, difference, product, and quotient.

Prints memory addresses of the variables before and after calculations.

Includes comments explaining pointer usage.

### CW1SOB6 – A Batch Script to Create Files and Folders

Purpose: Demonstrate file and folder creation with Batch scripting.
Features:

Creates 3 empty text files and 3 folders.

Each folder contains one of the text files.

All items are stored in a folder named The_Bag.

Displays the message: “The 6 items are in The Bag!”.

Includes comments for clarity.

### CW1SOB7 – Command Line and Batch Script Exercise

Purpose: Work with directories, file management, and Batch scripts.
Features:

Create CST1500 folder with subfolders: C_Programs, Scripts, Docs.

Copy the 4 C programs into C_Programs and list the files.

Take screenshots of CMD outputs and store them in Docs/Screenshots.

Batch script to list all C programs in the CST1500 folder and subfolders.

Include comments in the script.

#### CW1SOB8 – Batch Script to Create and Populate a Text File

Purpose: Demonstrate file creation and content manipulation.
Features:

Create folder myBatchScript and a text file results.txt.

Write a short knock-knock joke into the file.

Copy results.txt to the folder and delete the original.

Display message “Task Complete!”.

Include relevant comments.

### CW1SOB9 – Bash Script Exercise

Purpose: Demonstrate folder creation, file manipulation, and moving directories in Bash.
Features:

Take an existing directory as input.

Create three folders: a, b, c.

Store MDX username in a/userName.txt.

Store favourite movie in b/myFavMovie.txt.

Move folders a and b into c.

Include relevant comments.

#### CW1SOB10 – Bash Script to Perform Admin Tasks

Purpose: Automate folder and file creation using parameters.
Features:

Accept 3 parameters: path, x (1–20), y (1–20).

Create the specified path if it does not exist.

Create x folders named with ascending integers starting at 1.

Create y .txt files in each folder, also named with ascending integers.

Take a screenshot of the resulting file structure and save in CW1SOB10_Screenshot document.

Include comments in the script.


### General Requirements

All programs/scripts include relevant comments explaining the logic.

Arithmetic operations must include +, -, *, /.

Programs accept and validate user input where necessary.

Screenshots for file manipulations are stored in appropriate directories (Docs or CourseworkOne).

### Installation and Compilation Instructions

C Programs:
gcc program_name.c -o program_name
./program_name

Batch Scripts: Double-click .bat file or run via CMD.

Bash Scripts:
chmod +x script_name.sh
./script_name.sh
