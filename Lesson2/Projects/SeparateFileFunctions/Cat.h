// We will have to use #include "Cat.h" in any file where we want to use the Cat class.
//		- This means the file will be copied & pasted many times.

// #pragma once is a preprocessor guard to make sure the class in only ever declared once in your code.
//		- If it was declared more than once the code wouldn't know which version of the class it should use.


// #pragma once is equivalent to #ifndef, #define, #endif
//		- #define creates a preprocessor variable.
//		- #ifndef checks if the variable has been not been defined.
//			Always have to close an #if with an #endif




 //#pragma once

// OR

// If Not Defined
#ifndef CAT_H
#define CAT_H

void Speak();
void Jump();

#endif