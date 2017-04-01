int l;
int* map;

void generateMap()
{
  printf("Enter N of life cells: ");
  int n;
  scanf("%d",&n);
  printf("Enter %d coord-s of life cells\n",n);
  for(int i=0;i<n;i++)
  {
    int inp;
    scanf("%d",&inp);
    map[inp]=1;
  }
    
}
