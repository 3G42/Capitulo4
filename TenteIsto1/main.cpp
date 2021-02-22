#include <C:\Cabecalhos C++\std_lib_facilities.h>

int main()
{
   const double ien_to_dol = 0.0095, euro_to_dol = 1.22, libra_to_dol = 1.41;
   double valor = 1;
   char moeda = 'a';
   cout << " Por favor informe, o valor seguido pela unidade('i - ienes','u - euros' ou 'l - libras'): \n";
   cin >> valor >> moeda;

   if(moeda == 'i')
   {
       cout << valor << " ienes == "<< ien_to_dol * valor << " dolares" << endl;
   }
   else if (moeda == 'u')
   {
       cout << valor << " euros == "<< euro_to_dol * valor << " dolares" << endl;
   }
   else if (moeda == 'l')
   {
       cout << valor << " libras == "<< libra_to_dol * valor << " dolares" << endl;
   }
   else
    cout << "Desculpe, nao reconheço a unidade indicada por "<< moeda << endl;
}
