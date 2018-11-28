#include <iostream> 
#include <conio.h> 
#include <time.h> 
#include <stdlib.h>
 
 using namespace std; 
 int main (){ 
 int cantidad, nAguila=0;
 	
 srand(time(NULL)); 
   cout<<"Cuantos lanzamientos?: "; 
      cin>>cantidad;
	  	
   for(int i=1; i<=cantidad; i++){	
   cout<<i<<" Tiro: ";	
   
    if (rand()%2 == 0){ 
     cout<<"Aguila\n"; 
     nAguila++; 
     }else{ 
      cout<<"Sol\n"; 
      
} 
}	
  cout<<"\nEl numero de aguilas es :" <<nAguila; 
   cout<<"\nEl numero de soles es :"; 
   cout<<cantidad-nAguila<<endl;	
   
getch(); 

return 0; 
}
