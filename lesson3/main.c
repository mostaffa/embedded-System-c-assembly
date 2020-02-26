int counter = 0;/* The counter is in RAM rightnow*/
int main()
{
   while(counter < 21){
    ++counter;
  }
  return 0;
}
/*              Assembly Instructions
        LDR : Load with immediate offset
        LDR     R4, [R2]

*/
