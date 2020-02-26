
int main()
{
  unsigned int counter = 0;
  int x = 0;
  while(counter < 21){
    ++counter;
    if((counter & 1) !=0){
      /* do something when counter is odd*/
      ++x;
    }
  }
  return 0;
}
