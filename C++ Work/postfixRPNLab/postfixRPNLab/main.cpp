#include <iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

#include "Stack.h"

int evalExpression(char operator_, int operandA, int operandB)
{
	switch(operator_)
	{
	// your code here
	}
}

void handleOperand(stringstream& strStream, Stack& rpnStack)
{
	// your code here
}

void handleOperator(stringstream& strStream, Stack& rpnStack)
{
	// your code here
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

	// end of expression
	cout<<"The evaluated expression is: "<<rpnStack.top()<<endl;
}
