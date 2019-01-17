#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(void)
{
  char choose;
  string input;
  choose = getchar();
  getchar();
  if (choose == 'D')
  {
    getline(cin, input);
    int num = 0;
    for (int i = 0; i < input.length(); i++)
    {
      if (isdigit(input[i]))
      {
          num = input[i] - '0';
          for (int j = i + 1; j < input.length(); j++)
          {
              if (isdigit(input[j]))
              {
                  num = num * 10 +  input[j] - '0';
                  //cout << "\n" << num << endl;
                  i++;
              }
              else 
              {
                  break;
              }
          }
      }
      else
      {
          if (num != 0)
          {
              for (int j = 0; j < num; j++)
              {
                  putchar(input[i]);
              }
              num = 0;
          }
          else
          {
              putchar(input[i]);
          }
      }
    }
  }
  else if (choose == 'C')
  {
      getline(cin, input);
      for (int i = 0 ; i < input.length(); i++)
      {

          if (isalpha(input[i]) || input[i] == ' ')
          {
              int count = 0;
              for (int j = i + 1; j < input.length(); j++)
              {
                  if (input[j] == input[i])
                  {
                      count++;
                  }
                  else
                  {
                      break;
                  }
              }
              if (count == 0)
              {
                  putchar(input[i]);
              }
              else
              {
                  printf("%d", count + 1);
                  i += count;
                  putchar(input[i]);
              } 
          }
          else
          {
              putchar(input[i]);
          }
      }
  }
  system("pause");
  return 0;
}