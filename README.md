# Student Grade Calculator

A C++ program that calculates student test score averages and determines letter grades.

## Description
This program allows users to:
- Input multiple students' names and tests scores
- Calculate average scores for each student
- Determine letter grades based on predefined criteria
- Display formatted results in a table

## Key Features
- Dynamic input handling for variable number of students and test scores
- Input validation (scores must be 0-100)
- Grade calculation using simple average
- Clear tabular output formatting using iomanip

## Usage
1. Compile program:
```bash
g++ main.cpp 
```
2. Run executable:
```bash
,/a.exe
```
3. Follow prompts:
- Enter number of students
- For each student:
  - Enter name
  - Enter number of test scores
  - Enter individual test scores

## Grading Scale
\[
\begin{align*}
A & : 90-100 \\
B & : 80-89 \\
C & : 70-79 \\
D & : 60-69 \\
F & : Below 60
\end{align*}
\]

## Requirements
- visual studio
- Standard Library headers: \<iostream>, \<string>, \<iomanip>

## Limitations
- Maximum 10 test scores per student (array size constraint)
- No persistent data storage (all data lost after program exit)
