#include<iostream>
//--------------------------      
      
      void Prime(int num)
      {
          int i; 
          int check=0;
          for(i=1;i<=num;i++)
          {
              if(num%i==0)
              {
                  check++;
              }
          } 
      

      if(check==2)
      {
	  std::cout<<num<<std::endl;
          
      }

      }


//--------------------------

