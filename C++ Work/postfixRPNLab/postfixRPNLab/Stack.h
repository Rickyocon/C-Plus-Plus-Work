/*
 * Stack.h
 *
 *  Created on: Oct 26, 2017
 *      Author: h702533437
 */


typedef int StackElement;

class Stack
{
 public:
 /***** Function Members *****/
 // Prototypes same as in preceding section
	  /***** Function Members *****/
	  /***** Constructors *****/
	  Stack();
	  /*----------------------------------------------------------
	    Construct a Stack object.

	    Precondition:  None.
	    Postcondition: An empty Stack object has been constructed

	  -----------------------------------------------------------*/

	  Stack(const Stack & original);
	  /*----------------------------------------------------------
	    Copy Constructor

	    Precondition:  original is the stack to be copied and
	        is received as a const reference parameter.
	    Postcondition: A copy of original has been constructed.
	  -----------------------------------------------------------*/

	 /***** Destructor *****/
	  ~Stack();
	  /*----------------------------------------------------------
	    Class destructor

	    Precondition:  None
	    Postcondition: The dynamic array in the stack has been
	      deallocated.
	  -----------------------------------------------------------*/

	  /***** Assignment *****/
	  Stack & operator= (const Stack & original);
	  /*----------------------------------------------------------
	    Assignment Operator

	   Precondition:  original is the stack to be assigned and
	       is received as a const reference parameter.
	   Postcondition: The current stack becomes a copy of
	       original and a reference to it is returned.
	  -----------------------------------------------------------*/

	  bool empty() const;
	  /*-----------------------------------------------------------
	    Check if stack is empty.
	    Precondition: None
	    Postcondition: Returns true if stack is empty and
	        false otherwise.
	   -----------------------------------------------------------*/

	  void push(const StackElement & value);
	  /*-----------------------------------------------------------
	    Add a value to a stack.

	    Precondition:  value is to be added to this stack
	    Postcondition: value is added at top of stack provided
	        there is space; otherwise, a stack-full message is
	        displayed and execution is terminated.
	   -----------------------------------------------------------*/

	  void display(ostream & out) const;
	  /*-----------------------------------------------------------
	    Display values stored in the stack.

	    Precondition:  ostream out is open.
	    Postcondition: Stack's contents, from top down, have
	        been output to out.
	   -----------------------------------------------------------*/

	  StackElement top() const;
	  /*-----------------------------------------------------------
	    Retrieve value at top of stack (if any).

	    Precondition:  Stack is nonempty
	    Postcondition: Value at top of stack is returned, unless
	        the stack is empty; in that case, an error message is
	        displayed and a "garbage value" is returned.
	   ----------------------------------------------------------*/

	  void pop();
	  /*-----------------------------------------------------------
	    Remove value at top of stack (if any).

	    Precondition:  Stack is nonempty.
	    Postcondition: Value at top of stack has been removed,
	        unless the stack is empty; in that case, an error
	        message is displayed and execution allowed to proceed.
	   ----------------------------------------------------------*/




 private:
    /*** Node class ***/
   class Node
   {
    public:
      StackElement data;
      Node * next;
      //--- Node constructor
      Node(StackElement value, Node * link = 0)
      /*------------------------------------------------------
        Precondition:  value is received
        Postcondition: A Node has been constructed with value
            in its data part and itb next part set to link
            (default 0).
       ------------------------------------------------------*/
      { data = value; next = link; }

  };

  typedef Node * NodePointer;

  /***** Data Members *****/
  NodePointer myTop;      // pointer to top of stack

}; // end of class declaration 

