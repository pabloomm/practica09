 #include<iostream>
 int number;
 int MultiplesOfThree()
 {
 while(number>0) 	
 {    
   int m;
   int sum;
   m=number%10;    
   sum=sum+m;    
   number=number/10;
   if (number % 3 == 0)
   {
   return true;
   }
   else
   {
     return false;
   }  
 }
 }
 int main()
 {
   int number;
   std::cin >> number;
   std::cout << MultiplesOfThree(number);
 }	 
