//KBC
#include<stdio.h>
main()
{// this is my first work
	int prize=0;
	char op1,op2,op3,op4,op5;
	int A,B,C,D,E,M,L,Q5,p;  
	printf("*****\tKBC\t*****\n");
	printf("LET THE GAME BEGIN!!!!\n");
	printf("RULES:\n On every correct answer you get 1000 points.\n On every incorrect answer 500 points are deducted.\n If points gets to 0 'GAME OVER'!\n ");
	printf("Q1:What is the national flower of Pakistan?\n");
	printf(" a:) rose\n b:) Jasmine \n c:) Sunflower \n d:) Tulip\n");
 	printf("Choose one of the above options:\n");
 		A:
	scanf("%c",&op1);
	switch(op1){			
		case 'b':
			printf("\nYour answer is correct!\n");
			prize=prize+1000;
			printf("Q2:What is the national game of Pakistan?\n");
	        printf(" a:) hockey\n b:) tennis \n c:) soccer \n d:) basketball\n");
         	printf("Choose one of the above options:\n");
 	        B:
 	       	fflush(stdin);
	       scanf("%c",&op2);
	             switch(op2){
		          case 'a':
			        printf("\nYour answer is correct!\n");
			        prize=prize+1000;	
			        printf("Q3:What is the capital of Sindh?\n");
                	printf(" a:) karachi\n b:) lahore \n c:) Islamabad \n d:) Hyderabad\n");
	
	                printf("Choose one of the above options:\n");
	                  C:
	                  	fflush(stdin);
	                  scanf("%c",&op3);
	                 switch(op3){
              		 case 'a':
			             printf("\nYour answer is correct!\n");
			             prize=prize+1000;
						                	M:
						 		          printf("Q4:What is the population in Asia?\n");
	                                      printf(" a:) 1 billion\n b:) 2.3 billion \n c:) 2.8 billion \n d:) 3.1 billion\n");
	
                                        	printf("Choose one of the above options:\n");
 	                                         D:
	                                          scanf("%c",&op4);
	                                         switch(op4){
		                                          case 'd':
			                                       printf("\nYour answer is correct!\n");
			                                       prize=prize+1000;
			                                       E:
			                                          printf("Q5:What is the national animal of Pakistan?\n");
	                                                  printf(" a:) tiger\n b:) markhor \n c:) elephant \n d:) monkey\n");
	
 	                                                  printf("Choose one of the above options:\n");
                                                 	Q5:
                                                 	fflush(stdin);
                                                 	scanf("%c",&op5);
                                                 	switch(op5){			
	                                               	 case 'b':
		                                            	printf("\nYour answer is correct!\n");
		                                             	prize=prize+1000;
		                                             	goto p;
	                                                 case 'c':
		                                             case 'd':
	                                                 case 'a':
	                                                 	printf("\nYour answer is incorrect!\n");
                                                 		prize=prize-500;
                                                 		goto p;
                                                 		
	                                                default:
		                                                goto Q5;
			
			                                                 }

		                                    case 'a':	
		                                    case 'b':
		                                    case 'c':
			                                printf("\nYour answer is  incorrect!\n");
			                                prize=prize-500;
			                                if(prize==0)
			                                 {
			             	                   goto p;
						                     }
						                    else
			                                goto E;
		                                    default:
		                                    goto D;	
				
			                                       }
		             case 'b':			
		             case 'c':
		             case 'd':
			             printf("\nYour answer is incorrect!\n");
			             prize=prize-500;
			             if(prize==0)
			             {
			             	goto p;
						 }
						 else
						 {
						 	goto M;
						 }
			             
			        default:
				      goto C;
			                        }

					break;		
		          case 'b':
		          case 'c':
		          case 'd':
			        printf("\nYour answer is incorrect!");
			        prize=prize-500;
			        goto M;
			     }

		          default:
			        goto B;
			        
		  break;
		case 'c':
		case 'd':
		case 'a':
			printf("\nYour answer is incorrect!");
			break;
		}
			
			
		
	p:
  if(prize <= 0)
  {
  	printf("\nYOU LOSE");
  	
  }
  else
  {
  	printf("\nCongatulations! You won %d ",prize);
  }

    
}
