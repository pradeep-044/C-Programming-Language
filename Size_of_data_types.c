#include <stdio.h>

// Looking size of data types in C
void main() {
  int x;
  int odd[2][4]={1,1,3,3,5,5,7,7};

  float f;
  double d;
  char c;

  printf("Size of integer is %d\n",sizeof(x));
  //print("%d",sizeof(odd));
  printf("Size of float is %d\n",sizeof(f));
  printf("Size of double is %d\n",sizeof(d));
  printf("Size of char is %d\n",sizeof(c));
}
