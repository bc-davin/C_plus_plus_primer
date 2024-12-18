#include<iostream>
#include "Sales_item.h"


int main(){
	//int v1, v2 = 0;
	//std::cout << "Hello World" << std::endl;
	//std:: cout<<"Enter two numbers" << std::endl;
	//std:: cin>> v1 >> v2;
	//std:: cout<<"Adding: " << v1 << " and " << v2 << " = "<<v1+v2 <<std::endl; 
	//std:: cout<<"Multiply: " << v1 << " and " << v2 << " = "<<v1*v2 <<std::endl; 


 	// Exercise 1.5: We wrote the output in one large statement. Rewrite the program to use
	// a separate statement to print each operand
	//std::cout <<"Hello world";
	//std::cout<< std::endl;
	//std::cout << "Enter two number";
	//std::cout<< std::endl;
	//std::cin>>v1;
	//std::cin>>v2;
	//std::cout<<"Adding: ";
	//std::cout<<v1;
	//std::cout<<" and ";
	//std::cout<<v2;
	//std::cout<<" = ";
	//std::cout<<v1+v2;
	//std::cout<< std::endl;

	// Exercise 1.6: Explain whether the following program fragment is legal
	//
	// it is illegal, need the std::cout as a primary operator for it to work


	// 1.7 compiles a program with incorrect nested comments
	// result: expected primary -expression before / token
	//std::cout << "/*";
	//std::cout << "*/";
	//std::cout << /* "*/" */; no good
	//std::cout << /* "*/" /* "/*" */;
	//int sum = 0, var =1;
	//while (var <= 10){
	//	sum +=var;
	//	var++;
	//}
	//std::cout<<"The sum is "<<sum<<std::endl;

	// 1.9 write a program that sum up from 50 to 100
	//int total = 0 , start = 50;
	//while (start <= 100){
	//	total+= start;
	//	++start;
	//}
	//std::cout<<"The total sum is "<<total<<std::endl;

	//int numStart = 10, numEnd = 0;
	//while (numStart>numEnd){
	//	std::cout<<numStart<<std::endl;
	//	--numStart;
	//} 

	//Exercise 1.11: Write a program that prompts the user for two integers. Print each
	//number in the range specified by those two integers.
	//int numBeg =0, numEnding =0;
	//std::cin>> numBeg >> numEnding;
	//std::cout<<numBeg<<" "<<numEnding<<std::endl;
	//while (numBeg>=numEnding){
	//	std::cout<<numBeg<<std::endl;
	//	numBeg-=1;
	//}
	//Exercise loop statement 1 to 10
	//int  numBeg = 0, numEnd = 10;
	//int total = 0;
	//for (int i = numBeg; i <= numEnd; ++i ){
	//	total+=i;
	//}
	//std::cout<<total<<std::endl;
	//Exercise 1.12
	//int sum = 0;
	//for (int i = -100; i <= 100; ++i){
	//	sum+=i;
	//}
	// Exercise 1.9 using for loop sum from 50 to 100
	//int sum = 0;
	//for (int i = 50; i <= 100; ++i){
	//	sum += i;
	//}
	//std::cout<<sum<<std::endl;
	// exercise 1.10 using the for loop to go from 
    //int numStart = 10, numEnd = 0;
    //for (int i = numStart; i >= numEnd ; --i){
    //	std::cout<<i<<std::endl;
    //}
    // exercise 1.11 write a program that take two int and do the range between
    //int numBeg = 0, numEnding = 0;
    //std::cin>> numBeg >>numEnding;
    //std::cout<<numBeg <<" "<< numEnding << std::endl;
    //for (int i = numBeg; i>= numEnding; --i){
    //	std::cout<<i<<std::endl;
    //}
    // exercise 1.14 compared the pro vs cons in using 
    // for : pro: if you know how many times you want to excute sth 
    //			  iterating over collections
    //       con:
    // while:
    //       pro: you don't know but you know the conditions (flexible)
   	//            check condition first
    //       con:
    // in compilers language: for loop might be cheaper

    // 1.4.3 reading an unknown number of inputs
    //int sum = 0, value = 0;
    //while(std::cin>> value){
    //	sum+=value;
    //}
    //std::cout<<"Sum is: "<<sum<<std::endl;
    // exercise 1.16: a for loop version of unknown inputs
    //int total = 0; 
    //for (int input = 0; std::cin>>input;++input){
    //	total+=input;
    //}
    //std::cout<<"The total is: "<<total<<std::endl;
    // 1.44 The if statement 
	//int curentVal =0, val = 0;
	//if (std::cin>>curentVal){
	//	int cnt = 1;
	//	while(std::cin>>val){
	//		if (val==curentVal){
	//			++cnt;
	//		}else{
	//			std::cout<<curentVal<<" occurs "<<cnt<<" times"<<std::endl;
	//			cnt = 1;
	//			curentVal= val;
	//		}
	//	}
	//
	//	std::cout<<curentVal<<" occurs "<<cnt<<" times"<<std::endl;
	//}
	// Exercise 1.19 
	//int numStart = 0, numEnd = 0;
	//std::cin>>numStart>>numEnd;
	// perform swap 
	//if (numStart>numEnd){
	//	int temp = numStart;
	//	numStart = numEnd;
	//	numEnd = temp;
	//}
	//for (int i = numStart;i<=numEnd;++i){
	//	std::cout<<i<<std::endl;
	//}
	Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
	

	

	return 0;
}