#include<iostream>
int main(){
	 //exercise 2.15
	 // int ival = 1.01;  // definition is correct but ival is trancated to 1
	 // int &rval1 = 1.01; // definition is not correct, double is a primitive 
	 // int &rval2 = ival;  // correct 
	 // int &rval3; // incorrect reference need to be initilzied 
	
	// exercise 2.16
	//int i = 0, &r1 = i; 
	//double d = 0, &r2 = d;

	// (a) r2 = 3.14159 // yes this valid, it changes d from 0 to 3.14159
	// (b) r2 = r1     //  function conversion 
	// (c) i = r2     //   yes, r2 holds the content of d which will be trancated to int 
	// (d) r2 = d;    // yes this is valid trancated 

	// Exercise 2.17
	//int i, &ri = i;
	//i = 5; ri = 10; 
	//std::cout<<i<<" "<<ri<<std::endl;
	// 10 10 

	// Exercise 
	//int ival = 42;
	//int *p = &ival;
	//std::cout<<p<<" "<<*p<<" "<<ival<<" "<< &ival<<std::endl;

	//*p =0;
	//std::cout<< *p<<std::endl;
	//std::cout<< ival<<std::endl;

	// Exercise 2.18: Write code to change the value of a pointer.
	// Write code to change the value to which the pointer points.
	//int val = 42;
	//int *p = nullptr;
	//p = &val;
	//*p = 4;
	//std::cout<< *p<<std::endl;

	// Pointers point to a memory address. They can be reassigned and do not need to be initialized when declared.
	// References are aliases for objects. They must be initialized when declared, cannot be reassigned, and always point to a valid object.

	//int i = 42;
	//int *pi = &i;
	//*pi = *pi * *pi;
	//std::cout<< *pi<<std::endl;
	// 42 * 42

	// Explain whether this is illegal or not
	//int i =0;
	// double* dp = &i; dp is an double, we are assigning a double pointer to an int
	// int *ip = i;  we are not point a pointer to an address, we are pointing to its literal
	// (c) int*p = &i; valid pointing to an address 

	// Exercise 2.22 Assuming p is a pointer to int, explain the following code 
	// if (p) this check if p is a valid pointer 
	// if (*p) this check the value that the *p is pointing to in its address, if the address hold a non zero then it is true otherwise i t is false

	// Exercise 2.23 Given a poi
	// Given a pointer p, can you determine whether p points to a valid object?
	// if so how? if not, why not?
	// more information is needed to makes that determination
	// Explain why the initialization of p legal but that of lp illegal?
	//int i = 42;
	//void *p = &i;
	// long *lp = &i; it is because lo is a pointer of type long being point to a type int. This is because of type safety
	// void can be used to point to any types
	// we can have the following 
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;

	// pointer refer to a pointer to address of ival that hold the value 1024
	// Exercises section 2.3.3
	// Exercise 2.25: Determine the types and values of each of the following variables
	// (a) int *ip, i, &r = i
	//      ip is a int pointer to i
	//      int i is declared 
	//      &r is a reference of type int to i

	//  (b) int i, *ip = 0;
	//      i is an int equal to 0
	//      *ip is a null pointer

	// (c)  int* ip , ip2
	//      int*ip is pointer of type int
	//      ip2 is a declare 

	// Exercise 2.26: which of the following are legal? for those that are illegal, explain why?
	// (a) const int buf; // illegal need to be initialized 
	// (b) int cnt = 0; // legal 
	// (c)  const int sz = cnt; // legal as long as cnt is defined before 
	// ++cnt; ++sz; // illegal making change to constant variable for sz but ++cn, it is fine
	// Exercise 2.27 Which of the following initialization are legal? explain why
	// (a) int i = -1, &r = 0 invalid on &r is reference to an integer which is primitive data
	// (b) int *const p2 = &i2 valid;
	// (c) const int i = -1, &r = 0; valid  
	// (d) const int *const p3 = &i2 valid 
	// (e) const int *p1 = &i2; // this valid 
	// (f) const int &const r2; this is invalid should be const int &r2
	// (g) const int i2 = i, &r = i; // this valid   

	// Exercise 2.28 Explain the following definitions. Identify any that are illegal
	// (a) int i, *const cp; 
	// 		i is an int type 
	//      cp is a const pointer of type int 
	// (b) int *p1, *const p2;
	//     *p1 is an pointer of type int 
	//     *const ps2 is a const pointer of type int
	// (c) const int ic, &r = ic; 
	//     ic is a const of type int 
	//     &r is invalid, as it is refer to a non-object 
	// (d) const int *const p3 
	//    p3 is a const int pointer of type int 
	


	return 0;
}