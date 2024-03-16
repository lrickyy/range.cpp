#include <iostream>

void range(void);
void range(int lower, int upper);
void range(int lower, int upper, int divisor);
void DispVal(int value);

int main()
{
  int    upper;
  int    lower;
  int    divisor;

  do{  
    std::cout << "Enter an integer lower and upper boundaries and divisor of the range seperated by white spaces: ";
    std::cin >> lower >> upper >> divisor;
  }while(upper < lower);

  range();
  range(lower, upper);
  range(lower, upper, divisor);

  std::cout << std::endl;

  return 0;
}
void range(void)
{
  std::cout << "\nCalling the Range function with no arguments\n";
  int value;
  for(int i = 2; i <= 25; i += 2)
    {
      value = i;
      DispVal(value);
    }
  std::cout << std::endl;
}
void range(int lower, int upper)
{
  std::cout << "\nCalling the Range functions with upper and lower arguments\n";
  int value;
  int counter = 0;
  if(!(lower % 2 == 0))
    {
      lower++;
    }
  for(int i = lower; i <= upper; i +=2)
    {
      value = i;
      DispVal(value);
      ++counter;
      if(counter % 24 == 0)
	{
	  std::cout << std:: endl;
	  counter = 0;
	}
    }
  std::cout << std::endl;
}  
void range(int lower, int upper, int divisor)
{
  std::cout << "\nCalling the Range function with upper, lower, and divisor arguments\n";
  int value;
  int counter = 0;
  while(!(lower % divisor == 0))
    {
      lower++;
    }
  for(int i = lower; i <= upper; i+=divisor)
    {
      value = i;
      DispVal(value);
      ++counter;
      if(counter % 24 == 0)
	{
	  std::cout << std:: endl;
	  counter = 0;
	}
    }
  std::cout << std::endl;
}
void DispVal(int value)
{
  std::cout << value << ' ';
}


  
