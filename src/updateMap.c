int* map;int rule;int l;

void updateMap()
{
  for(int i=0;i<l;i++)
  {
    map[i]=isLive(i);
  }
}
