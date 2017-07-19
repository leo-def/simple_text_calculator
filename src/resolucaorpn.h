
int resolucaorpn(){
    int i=0,y,cont=0,valor ,cont2,r=0;

    while(rpn[i]!= '\0'){


        if(rpn[i] >= '0' && rpn[i] <='9'){
            cont =0;
            y=i;
            while(rpn[y] >= '0' && rpn[y] <= '9'){
                cont++;
                y++;
            }

            cont2=1;
            valor = 0;
            while(cont2<=cont){
                valor = valor +( rpn[i] - '0')*pow(10,cont-cont2);
                cont2++;
                i++;
                }
            rpnn[r]= valor;
            rpnc[r]= 'n';
            r++;

       }

        else if (rpn[i] == '+' ||rpn[i] == '-' || rpn[i] == '*' || rpn[i] == '/' ||rpn[i] == '^' ){
            rpnc[r]= rpn[i];
            rpnn[r] = 0.0;
            r++;
            }


   i++;
    }
	return 1;
}
