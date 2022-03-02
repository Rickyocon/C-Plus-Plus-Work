#include <iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

#include "Stack.h"

StackElement evalExpression(char operator_, StackElement operandA, StackElement operandB)
{
	switch(operator_)
	{
	    case '+':
              return operandA + operandB;
            break;

            case '-':
              return operandB - operandA;
            break;

            case '*':
              return operandA * operandB;
            break;

            case '/':
              return operandB / operandA;
            break;

            default:
              cerr<<"Unknown operator"<<endl;
            break;    
	}
}

void handleOperand(stringstream& strStream, Stack& rpnStack)
{
        //first step is to read data into operand
        StackElement operand;
        strStream>>operand;
        //push operand into stack
        rpnStack.push(operand);
}

void handleOperator(stringstream& strStream, Stack& rpnStack)
{
	// pop 2 values from stack
	StackElement operandA, operandB;
        operandA = rpnStack.top();
        rpnStack.pop();
        operandB = rpnStack.top();
        rpnStack.pop();
        //read operator from stream
        char operator_;
        strStream>>operator_;
        //apply operator to the two values
        StackElement result = evalExpression(operator_,operandA,operandB);
        //push resulting value back onto stack
        rpnStack.push(result);

}

int main()
{
	Stack rpnStack;
	cout<<"Enter a postfix expression"<<endl;
	string expStr;
	getline(cin,expStr,'\n');
	stringstream strStream(expStr);
	while(!strStream.eof())
	{
		int ch = strStream.peek();
		if(std::isspace(ch))
		{
		  strStream.ignore(1);
		  continue;
		}
		else
		if(std::isdigit(ch))
		{
			handleOperand(strStream, rpnStack);
		}
		else
		if(std::isgraph(ch))
		{
			handleOperator(strStream, rpnStack);
		}
	}

        //detect that exspression was bad
        StackElement topVal = rpnStack.top();
        //cout<<topVal<<endl;
        rpnStack.pop();
        if(rpnStack.empty())
        {
            // end of expression
	   cout<<"The evaluated expression is: "<<topVal<<endl;
        }
        else
            cout<<"error bad exspression"<<endl;
}
