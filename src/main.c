#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int rule;
int l;//длинна поля
int* map;

int main(int argc,char** args)
{
  if(argc<3)
  {
    printf("Usage: %s RULE LENGTH\n",args[0]);
    return 0;
  }

  rule=atoi(args[1]);
  l=atoi(args[2]);
  map=(int*)malloc(sizeof(int)*l);
  generateMap();
  while(1)
  {
    printMap();
    updateMap();
    if(getchar()=='q') break;
  }
  
  return 0;
}
