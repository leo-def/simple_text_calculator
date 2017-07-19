
int rpnf()
{

char stack[60];

    int i=0,r=0,s=0;

    while(typed[i] != '\0'){

        if(typed[i] >= '0' && typed[i] <= '9'){
            rpn[r] = typed[i];
            r++;
            if(typed[i+1] < '0' || typed[i+1] > '9'){
                rpn[r] = ' ';
                r++;

        }
      }

        //se for + ou -
        else if(typed[i]== '-' || typed[i] == '+'){
            while(stack[s] == '*'|| stack[s] == '/' || stack[s] == '+'|| stack[s] == '-' || stack[s] == '^'){
                rpn[r] = stack[s];
                stack[s] = ' ';
                r++;
                if(s > 0){
                    s--;
                    }
                }
            stack[s] = typed[i];
            s++;
            }

        //se for * ou /
        else if(typed[i] == '*' || typed[i]=='/'){
            while(stack[s] == '*'|| stack[s] == '/' ||  stack[s] == '^'){
                rpn[r] = stack[s];
                stack[s] = ' ';
                r++;
                if(s>0){
                    s--;
                }
            }
            stack[s] = typed[i];
            s++;
        }

        //se for ^;
        else if(typed[i] == '^'){
            stack[s] = typed[i];
            s++;
        }

        // se for (
        else if(typed[i] == '('){
            stack[s] = typed[i];
            s++;
        }

        //se for )
        else if(typed[i] == ')'){
            s--;
            while(stack[s] != '(' && s > 0){
                rpn[r]= stack[s];
                stack[s] = ' ';
                r++;
                s--;
            }
           stack[s]=' ';
        }

        i++;
   //fim do laco
    }
    while(s>=0){

        rpn[r]=stack[s];
        r++;
        s--;

    }

    return 1;
}

