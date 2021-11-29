/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaylee Laughner
 */
/* Can we declare a non-reference function argument const? */
/* Answer: Yes, it is possible. */

/* What might that mean */
/* Answer: It means that the function's parameter cannot be changed throughout the function because it is a constant */

/* Why might we want to do that? */
/* Answer: It is a good practice to pass constants when not intending to change a value in a function because it prevents accidental changes to a value while running it through a function. If a function tries to change a value that was passed as a constant,the program will not compile. This prevents the value from being changed.*/

/* Why don't people do it often */
/* Answer: In one of the major programming languages that was used for 50 years, all arguments were passed as non-constants. Due to this, it has been common practice to pass a value as not constant. In modern programming languages like C++ however, it is now best to pass constant values and avoid changing too many values in a function. */
#include "main.h"

class print {
  public: void printResult(const int result) {
     /* if the line commented out below stayed in,
     the program would not compile, because the statement
     is attempting to change a int that is a constant, which is not allowed.
     Thus, passing a constant ensures that the value is not changed */

    //result = 2;
    std::cout << "\nThe int is: " << result;
  }
};

int main() {
  int result = 5;
  std::cout << "Integer named result with a value of 5 is passed as a constant through a print function. A commented out line attempted to change the result to 2. Because the function is pass-by-const, attempting to change the result results in a compile error. \nThis proves how pass-by-const prevents a value from being changed in a function.\n";
  print p;
  p.printResult(result);
} 
