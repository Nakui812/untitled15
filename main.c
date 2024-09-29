#include <stdio.h>

int main(void)
{
   float peso;
   float distanza;
   int  urgenza;
   float prezzo;
   printf("Inserire peso distanza e urgenza indicare con 0 non urgente e 1 urgente: ");
   scanf_s("%f %f %d ", &peso,&distanza,&urgenza);
   if (urgenza == 1)
   {
      if (distanza < 100)
      {
         prezzo = 2.5 * peso;
      }
      else if (distanza >= 100 && distanza <= 300)
      {
         prezzo = 3.5 * peso;
      }
      else if (distanza > 300)
      {
         prezzo = 4 * peso;
      }
   }
   else if(urgenza == 1)
   {
      if (distanza < 100)
      {
         prezzo = 1 * peso;
      }
      else if (distanza >= 100 && distanza <= 300)
      {
         prezzo = 2 * peso;
      }
      else if (distanza > 300)
      {
         prezzo = 3 * peso;
      }
      printf("prezzo = %.2f \n",prezzo);

return 0;



   }


}
