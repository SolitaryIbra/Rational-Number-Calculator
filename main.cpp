//Name: Ibrahim Tarek Ibrahim Mohamed
//ID: 20211002
//Course name: Structured Programming/CS-112
//Assignment: Assignment 2
//Task: Group Task 1 -Rational Calculator-
//This Simple Task Calculates two rational numbers and the answer is also rational number
#include <iostream>

//Using the std in/out function
using namespace std;
//Defining the arithmetic equations
char arith[8] = { ' ','+','-','*','/','%','^' };

//Defining the class of rationalization of the divisor
class rationalize{
    public:
//     the number.
        int num;
//     the denominator.
        int den;
//        operation of the operating system by the stream and Defining rationalizing method
        friend std::ostream& operator<< ( std::ostream& stream, const rationalize& r);
};

//from CPP Codeforces: operator for printing the divisor
std::ostream& operator<< (std::ostream& stream, const rationalize & r){
    stream << r.num << "/" << r.den;
    return stream;
}

//Initializing the functions of the logic divisor and the solutions
void Solution(int op, rationalize a, rationalize b, rationalize& r );

//Main Of The Program
int main(){
//    the arithmetic operator
    int op;
//    the operand system being rationalized
    rationalize a, b, r;
//    Input user the numbers and operators
    cout <<"Enter numerator-1 = ";
    cin >>a.num;
    cout <<"Enter denominator-2 = ";
    cin >>a.den;
    cout <<"Enter numerator-2 = ";
    cin >>b.num;
    cout <<"Enter denominator-2 = ";
    cin >>b.den;
//    Input the operator
    cout <<"Enter operator, 1=addition, 2=subtraction, 3=multiplication, 4=division\n";
    cout <<"Your Operation = ";
    cin >>op;
//    solving the equation by Solution function
    Solution(arith[op], a, b, r );
    cout <<"\nThe Equation is:" ;
    cout <<a<<" "<<arith[op]<<" "<< b<<endl;
    cout <<"The answer is = "<<r;
}

//Defining the solution function(To calculate the Function)
void Solution(int op, rationalize a, rationalize b, rationalize& r ){
//    Using switch case for defining the arithmetic operations
    switch(op){
//        if it is addition
        case ('+'):
            r.num = a.num*b.den + b.num*a.den;
            r.den = a.den*b.den;
            break;
//        if it is subtraction
        case ('-'):
            r.num = a.num*b.den - b.num*a.den;
            r.den = a.den*b.den;
            break;
//        if it is multiplication
        case ('*'):
            r.num = a.num * b.num;
            r.den = a.den * b.den;
            break;
//        if it is division
        case ('/'):
            r.num = a.num * b.den;
            r.den = b.num * a.den;
            break;
        default :
            break;
    }
}
