#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int QN = 1;
int correct = 0;
int wrong = 0;

bool ask[25] = {
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true
};

// Function declarations
void question(string question, string a, string b, string c, string d, char correctans);
void random_qn();
void result();
void display(string question, string a, string b, string c, string d);
void summary(string topicSummary);

int main() {
    cout << "Welcome to the Quiz Game!" << endl;
    random_qn();
    result();
    return 0;
}

void summary(string topicSummary) {
    cout << "\n" << topicSummary << endl;
    cout << "================================\n\n";
}

void display(string question, string a, string b, string c, string d) {
    cout << "Question Number " << QN << ": " << question << endl;
    cout << "A. " << a << endl;
    cout << "B. " << b << endl;
    cout << "C. " << c << endl;
    cout << "D. " << d << endl;
}

// RANDOM QUESTION SELECTOR
void random_qn() {
    srand(time(0));

    for (int i = 0; i < 25; i++) {
        if (ask[i]) {
            QN = i + 1;
            ask[i] = false;

            switch (i) {
            case 0:  // Function Overloading
                summary(R"(.........Function Overloading..........
Function overloading allows multiple functions to have the same name
as long as their parameter lists are different in type or number.

Example:
int myFunction(int x);
float myFunction(float x);
double myFunction(double x, double y);)");

                question("Function overloading in C++ is based on:",
                         "Function name only",
                         "Function name and parameter list",
                         "Parameter list only",
                         "Return type only", 'B');

                question("Can we overload by changing only return type?",
                         "Yes", "No", "Sometimes", "Only in C", 'B');

                question("Function overloading can be resolved at:",
                         "Compile time", "Runtime", "Both compile and runtime", "None of the above", 'A');
                break;

            case 1:  // Inline Functions & Default Arguments
                summary(R"(.........Inline Functions..........
An inline function is a function whose code is inserted directly at the place where it is called.
It is used to save function call overhead for small, frequently called functions.

Some important points:
- Declared with the keyword inline
- Best for small functions
- Compiler may ignore inline if the function is too big

.........Default Arguments..........
A default argument is a value given in a function declaration that is used if the caller does not provide an argument.

Some important points:
- Declared in the function prototype or definition
- Allows flexible function calls)");

                question("What is the default value of an argument if not provided?",
                         "0", "NULL", "Undefined", "Depends on the data type", 'D');

                question("Inline functions are used to:",
                         "Reduce code size", "Reduce function call overhead",
                         "Increase runtime errors", "Make program slower", 'B');

                question("Which keyword is used to declare an inline function?",
                         "fast", "inline", "quick", "function", 'B');

                question("Inline functions are best suited for:",
                         "Small, frequently called functions", "Large complex functions",
                         "Classes only", "Loops only", 'A');

                question("What is a default argument?",
                         "A value that must always be passed", "A value used if the caller does not provide one",
                         "Only works with inline functions", "A compiler error", 'B');

                question("Where can a default argument be specified?",
                         "Function declaration or definition", "Only inside the main function",
                         "Only in global variables", "Only in loops", 'A');
                break;

            default:
                break;
            }
        }
    }
}

// SHOW RESULT
void result() {
    cout << "\nQuiz Over!" << endl;
    cout << "Correct Answers: " << correct << endl;
    cout << "Wrong Answers: " << wrong << endl;

    if (correct > wrong) {
        cout << "Congratulations! You passed the quiz!" << endl;
    } else {
        cout << "Better luck next time!" << endl;
    }
}

// QUESTION FUNCTION
void question(string question, string a, string b, string c, string d, char correctans) {
    char ans;
    display(question, a, b, c, d);
    cout << "Your answer: ";
    cin >> ans;
    ans = toupper(ans);

    if (ans == toupper(correctans)) {
        correct++;
    } else {
        wrong++;
    }
}
