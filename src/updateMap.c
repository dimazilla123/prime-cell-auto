int* map;int rule;int l;

void updateMap()
{
  int* newmap=(int*)malloc(sizeof(int)*l);
  for(int i=0;i<l;i++)
  {
    newmap[i]=isLive(i);
  }
  for(int i=0;i<l;i++)
    map[i]=newmap[i];
  free(newmap);
}
