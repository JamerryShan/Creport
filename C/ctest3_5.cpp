#include<stdio.h>
int main()
{
	  int x1,x2,z,n,i,k,j;
	  int BEGIN,END;
	  scanf("%d%d",&BEGIN,&END);
	  printf("GOLDBACH'S CONJECTURE:\n");
	  printf("Every even number n>=4 is the sum of two primes.\n");
	  for(z=BEGIN;z<=END;z=z+2){
	  	      for(n=1;n<z/2;n++){
	    	  x1=z/2+n; 
	          for(i=2;i<z/2;i++){
	        	  if(x1%i==0)break;
	          }
	          if(i==z/2){
	    	      x2=z-x1;
	    	      for(k=2;k<x2;k++){
	    	      if(x2%k==0)break;
	              }
	              if(k==x2)
	              printf("%d=%d+%d\n",z,x2,x1);
	      }
	  }
 } 
}
