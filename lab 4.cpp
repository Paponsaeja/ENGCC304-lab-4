#include <stdio.h>
int main() {
	char  N[10] ;  
	float M,O   ;     
	printf( "Input The Employees ID : " ) ;
	scanf( "%s" , &N );	
	printf( "Input the Working hrs  : " ) ;
	scanf( "%f" , &M );	
	printf( "Salary amount/hr       : " ) ;
	scanf( "%f" , &O ) ;	
	printf( "----\nExpected Output: \nEmployees ID = %s  \nAmount/day = %.2f Baht(s) " , N , M*O ) ; 
	return 0 ; 
}
