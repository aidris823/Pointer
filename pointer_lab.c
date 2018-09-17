#include <stdlib.h>
#include <stdio.h>

int main(){
  unsigned int j_bezos_networth = 1616000000;
  char *swiss_bank = &j_bezos_networth; /* A tax free haven to hold the money*/
  printf("In hex: %x \n",j_bezos_networth); //In hex form
  
  
  //Each byte printed
  for (int i = 0; i < sizeof(int); i++){
    printf("Byte no. %d : %hhx \n",i,*swiss_bank);
    swiss_bank++;
  }
  
  swiss_bank = &j_bezos_networth;   //By 1 increment
  for(int i = 0; i < sizeof(int); i++){
    *swiss_bank++;
    swiss_bank++;
    printf("Inc by 1; In decimal: %d \n In Hexidecimal: %x \n",j_bezos_networth,j_bezos_networth);
  }
     
  swiss_bank = &j_bezos_networth;
  //By 16 increment
  for (int i = 0; i < sizeof(int); i++){
    *swiss_bank += 16;
    swiss_bank++;
    printf("Inc by 16; Decimal: %d \n Hexidecimal: %x \n",j_bezos_networth,j_bezos_networth);
  }
  
  return 0; //YOU WON!

  /* Anand got 1 exp.

The assignment left a present!

Inside the present, there was one-two hours of angry coding!

Anand can't waste any more time.

Manage your time better?

Yes No<

Anand will continue to procrastinate these assignments. 

=(

  */ 
}
