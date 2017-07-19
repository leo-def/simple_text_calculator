//respondendo rpn 


int respostarpn(){

int i =0,j;
 int a,b,cont;

while(rpnc[i] != '\0'){

    if(rpnc[i] == '+' || rpnc[i] =='-' || rpnc[i] == '*' || rpnc[i] == '/'){
        b=i;
        while(rpnc[b] != 'n'){

            b--;
            }
        rpnc[b] = ' ';
        a=i;
        while(rpnc[a] != 'n'){
            a--;
            }
        rpnc[a] = ' ';
        }

    //de acordo com  o operando no , ele recebe o resultado dos numeros posicoes a e b , e passa a ser consderado como numero
    if(rpnc[i] == '+'){
        rpnn[i] = rpnn[a] + rpnn[b];
        rpnc[i] = 'n';
        }
    else if(rpnc[i] == '-'){
        rpnn[i] = rpnn[a] - rpnn[b];
        rpnc[i] = 'n';
        }
    else if(rpnc[i] == '*'){
        rpnn[i] = rpnn[a] * rpnn[b];
        rpnc[i] = 'n';
        }
    else if(rpnc[i] == '/'){
        rpnn[i] = rpnn[a] / rpnn[b];
        rpnc[i] = 'n';
        }
    else if(rpnc[i] == '^'){
        rpnn[i] = rpnn[a];
        for(j=0;j<rpnn[b];j++){
            rpnn[i] = rpnn[i] * rpnn[a];
            }
        rpnc[i] = 'n';
        }

    i++;
    }
    printf("\n resposta = \n");
    printf("\n %lf \n",rpnn[i-1]);
	system("pause");
	return 1;
}