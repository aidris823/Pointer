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
  /*
  swiss_bank = &j_bezos_networth;   //By 1 increment
  for(int i = 0; i < sizeof(int); i++){
    *swiss_bank++;
    swiss_bank++;
    printf("Inc by 1; Decimal: %d Hexidecimal: %x \n",j_bezos_integer,j_bezos_integer);
  }
  print
  
  swiss_bank = &j_bezos_networth;
  //By 16 increment
  for (int i = 0; i < sizeof(int); i++){
    *swiss_bank += 16;
    swiss_bank++;
    printf("Inc by 16; Decimal %d Hexidecimal: %x \n",j_bezos_integer,j_bezos_integer);
  }
  */
  return 0; //YOU WIN!
}
