int* map;int l;

void printMap()
{
  for(int i=0;i<l;i++)
    if(map[i]) putchar('*');
    else putchar(' ');
  putchar('\n');
}
