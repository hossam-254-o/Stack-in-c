#include <iostream>
using namespace std;
const int Max_Size = 10;
// template <calss t >
class stack
{
	int top;
	int item[Max_Size];
public: stack()
{
	top = -1;
}//constructor to define top = -1 
	  void push(int n)
	  {
		  if (top >= Max_Size - 1)
			  cout << " Stack is full \n";
		  else
		  {
			  top++;
			  item[top] = n;
		  }
	  } // to add element to the stack
	  bool isEmpty()
	  {
		  if (top == -1)
			  return 1;
		  else
			  return 0;
	  }
	  void pop()
	  {
		  if (isEmpty())
			  cout << "Stack is empty \n";
		  else

			  top--;

	  }
	  void pop(int& element)
	  {
		  if (isEmpty())
			  cout << "Stack is empty \n";
		  else
		  {
			  element = item[top];
			  top--;
		  }
	  }
	  int get_top(int& stack_top)
	  {
		  if (isEmpty())
			  cout << "Stack is empty \n";
		  else {
			  stack_top = item[top];
			  return stack_top;
		  }
	  } // to print first element in the stack
	  void print() {
		  cout << "[";
		  for (int i = top; i >= 0; i--)
		  {
			  cout << item[i] << "  ";
		  }
		  cout << "]";
		  cout << endl;
	  }
};

int main()
{
	stack s1;
	s1.push(5);
	s1.push(5);
	s1.push(8);
	s1.push(19);
	s1.print();
	int y;
	cout << s1.get_top(y);

}
