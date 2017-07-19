
int validar(){
	int i=0,cont=0;

	while(typed[i] != '\0'){
	//checando parenteses	
    	if(typed[i] == '('){
		cont++;
			}
		else if( typed[i] == ')'){
			cont--;
			}
		
		if(cont < 0){
		   printf("\n erro no parenteses \n");
		   return 0;
        	}
			
		//checando caracteres & ordens	
		//caracteres
        if((typed[i] < '0' || typed[i] > '9') && typed[i] != '+'&& typed[i] != '-' && typed[i] != '*' && typed[i] != '/' && typed[i] != '^'
        && typed[i] != '(' && typed[i] != ')'){
            printf("\n algum caractere invlido \n");
            return 0;
            }        
		
        // ')' antes de  numero		
		else if(typed[i]== ')' && (typed[i+1]<'9' && typed[i+1]>'0')){
			printf(" \n ) antes de numero \n");
			return 0;
            }
		//operador antes de operador
		else if((typed[i]=='*' ||typed[i]== '/' || typed[i]== '+' || typed[i] == '-' || typed[i] == '^') && (typed[i+1]=='*' ||typed[i+1]== '/' || typed[i+1]== '+' || typed[i+1] == '-' || typed[i+1] == '^')){
			printf("\n operador antes de operador \n");
            return 0;
            }
		//'('antes de operador	
		else if(typed[i]=='(' && (typed[i+1]=='*' ||typed[i+1]== '/' || typed[i+1]== '+' || typed[i+1] == '-' || typed[i+1] == '^')){
			printf("\n ( antes de operador \n"); 
            return 0;
            }
		//numero antes de  '('	
		else if((typed[i] > '0' && typed[i] < '9') 	&& typed[i+1] =='('){
			printf("\n numero antes de ( \n");
			return 0;
            }
		//')'antes de '('
		else if(typed[i] == ')' && typed[i] == '('){
			printf("\n ) antes de ( \n");
			return 0;
            }
		//operador antes de ')'	
		else if((typed[i]=='*' ||typed[i]== '/' || typed[i]== '+' || typed[i] == '-' || typed[i] == '^') && typed[i+1] == ')'){
			printf("\n operador antes de ) \n");
	        return 0;
    		}
		//'(' antes de ')'	
		else if(typed[i] =='(' && typed[i] ==')'){
			printf(" ( antes de ) \n");
			return 0;
            }
	i++;
    	}
	return 1;
	}
