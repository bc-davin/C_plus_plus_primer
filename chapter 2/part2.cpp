#include<iostream>
#include "Sales_item.h"


int main(){
	// Exercise 2.1: What are the differences between int, long, long long, and short?
	// Between an unsigned and a signed type? Between a float and a double?
	// c++ make sure that int and short are 16 bits, long & long long as 64 bits
	// unsigned is >=0 number     // signed is negative to postive number
	// double is twice precision than a float
	
	/*
		Exercise 2.2: To calculate a mortgage payment, what types would you use for the rate,
		principal, and payment? Explain why you selected each type.

		double or float for rate, double principal and payment 
	*/

	/*

	what is the output?
	*/
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u <<std::endl; // 32
	std::cout<< u - u2 <<std::endl; 
	// take the result u - u2 = -32 then mod 2^32
	int i = 10, i2 = 42;
	std::cout << i2  - i <<std::endl; //32
	std::cout << i - i2 <<std::endl; // -32
	std::cout << i - u << std::endl; // 0
	std::cout << u - i << std::endl; // 0

	// Exercise 2.5 Determine the type of each of the following literals
	// (a) 'a' , L'a' , "a" , L"a"
	//      'a' is a char 
	//      "a" is a string in array ['a','\0']
	//      L'a' is w_char_t , wider character literal
	//      L"a" is this means the each character of the string is w_char_t (dealing withinternational text or Unicode)
	// (b)  10, 10u, 10L, 10uL, O12, OxC
	//      10 is a int 
	//      10u is  unsigned int
	//      10L is  long int 
	//      10uL is unsigned long 
	//      O12  is an ocal
	//      OxC  is a hex  
	// (c) 3.14, 3.14f, 3.14L
	//     3.14 is a double 
	//     3.14f is a floating number
	//     3.14L is a float long 
	// (d) 10, 10u, 10. , 10e-2
	//    10 is dec
	//    10 is unisgned dec 
	//    10. is a double
	//    10e-2 is a double
	// Exercise 2.6: What, if any are the difference between the following definitions
	//int month = 9, day = 7;
	// int month = 09, day = 07
	// one is a int and the other is a hec
	// (a) "Who goes with F\145rgus?\012"
	//      string literal: who goes 
	//            			with 
	//			  			Fergus?
	// (b) 3.14e1L = double 31.4
	// (c) 1024f  = 
	// (d) 3.14L = 3.14 
	//std::cout<<3.14L<<std::endl;
	//  who goes with 

	// 

	return 0;
}