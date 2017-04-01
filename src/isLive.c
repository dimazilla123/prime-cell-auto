int* map;int l;int rule;

int isLive(int x)
{
  int right=x-1;
  if(right==-1) right=l-1;
  int left=(x+1)%l;
  int state=map[right]*4+map[x]*2+map[left];
  int newrule=rule>>state;
  if(newrule%2) return 1;
}
