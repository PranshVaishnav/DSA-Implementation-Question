/* Implementing stack using arrays.
   Necessary things to be present in array representation .
   1)Top pointer .
   2)Size/length of array


 Stacks work on the principle of LIFO (Last in First Out)

*/
#include <iostream>
using namespace std;

class Stack
{
public:
  int size; // Size of stack
  int top;  // index  for top pointer where elements can be added
  int *S;   // Array of stack representation

  void push(Stack *st, int x);  // push element in the stack;
  int pop(Stack *st);           // remove element from the top of the stack
  int peek(Stack *st, int pos); // Look at element at a given index in the stack. Pos in peek start from 1 to size;
  int Top(Stack *st);           // Return  Element value at top of stack
  bool isEmpty(Stack *st);      // return whether stack is empty or not
  bool isFull(Stack *st);       // return whether stack is Full or not
  void print(Stack *st);
};

void Stack::push(Stack *st, int x)
{
  // necessary conditions to push
  //  -- > Stack should not be Full

  if (st->isFull(st))
  {
    cout << "Stack Overflow condition" << endl;
  }
  else
  {
    st->top++;
    st->S[st->top] = x;
  }
}
int Stack::pop(Stack *st)
{
  // necessary conditions to pop
  //  -- > Stack should not be Empty

  int x = -1;

  if (st->isEmpty(st))
  {
    cout << "Stack Underflow condition" << endl;
  }
  else
  {
    x = st->S[st->top];
    st->top--;
  }
  return x;
}

int Stack::peek(Stack *st, int pos)
{
  // necessary conditions to peek
  //  -- > position should be within the range;
  // pos should be less than stack size

  int x = -1;
  if (st->top - pos + 1 < 0)
    cout << "Invalid position accessing" << endl;
  else
  {
    x = st->S[st->top - pos + 1];
  }
  return x;
}

int Stack::Top(Stack *st)
{
  // Condition to return the topmost element
  //->stack should not be empty

  if (isEmpty(st))
  {
    cout << "Stack is empty: ";
    return -1;
  }

  return st->S[st->top];
}

bool Stack::isEmpty(Stack *st)
{
  if (st->top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

bool Stack::isFull(Stack *st)
{
  if (st->top == st->size - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void Stack::print(Stack *st)
{
  while (st->top != -1)
  {
    cout << st->S[st->top] << " ";
    st->top--;
  }
}

int main()
{
  Stack st;
  Stack *p=&st;
  cout << "Enter Size of stack: ";
  int size;
  cin >> size;
  st.size = size;
  st.S = new int[st.size];
  st.top = -1;
  int c;
  do
  {

    cout << "Stack operations:" << endl;
    cout << "1) PUSH" << endl;
    cout << "2) POP" << endl;
    cout << "3) PEEK" << endl;
    cout << "4) TOP" << endl;
    cout << "5) ISEMPTY" << endl;
    cout << "6) ISFULL" << endl;
    cout << "7) PRINT STACK" << endl;
    cout << "8) EXIT" << endl;
   
    cin>>c;
    switch (c)
    {
    case 1:
      int z;
      cout << "Enter the Element You want to push: ";
      cin >> z;
      cout << endl;
      st.push(p, z);
      cout
           << "SUCCESSFULL" << endl;
      break;

    case 2:
      cout << st.pop(p);
      cout 
           << "SUCCESSFULL" << endl;
      break;

    case 3:
      int y;
      cout << "Enter the Position You want to peek: ";
      cin >> y;
      cout << endl;
      cout << st.peek(p, y);
      cout 
           << "SUCCESSFULL" << endl;
      break;

    case 4:
      cout << st.Top(p);
      cout 
           << "SUCCESSFULL" << endl;
      break;

    case 5:
      cout << st.isEmpty(p);
      cout 
           << "SUCCESSFULL" << endl;
      break;

    case 6:
      cout << st.isFull(p);
      cout 
           << "SUCCESSFULL" << endl;
      break;

    case 7:
      st.print(p);
      cout 
           << "SUCCESSFULL" << endl;
      break;
    
    case 8:
      break;

    default:
      cout<<"Please Select a proper option from the list"<<endl;
      break;
    }

  } while (c != 8);

  return 0;
}