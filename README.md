# quize system

A simple console-based quiz application written in C++. The program presents users with programming-related quiz questions, evaluates answers, and displays the final score.

## Features

- Multiple-choice questions (MCQs)
- Topic summaries before each quiz section
- Automatic score calculation
- Correct and wrong answer tracking
- Beginner-friendly C++ project
- Covers C++ concepts such as:
  - Function Overloading
  - Inline Functions
  - Default Arguments

## Technologies Used

- C++
- Standard Library (`iostream`, `string`, `cstdlib`, `ctime`)

## How It Works

1. The program displays a topic summary.
2. Multiple-choice questions are presented.
3. User enters an answer (A, B, C, or D).
4. Answers are checked automatically.
5. Final results are displayed at the end.

## Project Structure

```text
codebuddy.cpp
│
├── main()
├── summary()
├── display()
├── random_qn()
├── question()
└── result()
