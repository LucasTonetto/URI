#include <stdio.h>
 
int main() {
 
	int W,X,Y,Z,d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,stf;
    char dia1[3],dia2[3],krct;
    //krct e usado para ler o :
    //dia1 e dia2 e usado para ler a palavra Dia
    /*
        h1=hora 1
        m1=minuto 1
        s1=segundo1
        h1=hora 2
        m1=minuto 2
        s1=segundo 2
        st1=soma de segundos do tempo 1
        st2=soma total de segundos do tempo 2
        stf=soma total de segundos
    */

    //leitura de DIA d1 h1 : m1 : s1

    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    st1=(s1+m1*60+h1*60*60+d1*60*60*24);//calculo para transformar em segundos
    st2=(s2+m2*60+h2*60*60+d2*60*60*24);//caluclo para transformar em segundos


    stf=(st2-st1);
    W=stf/(60*60*24);//calculo para dia
    X=(stf-W*60*60*24)/(60*60);//calculo para hora
    Y=(stf-W*60*60*24-X*60*60)/60;//calculo para minuto
    Z=stf-W*60*60*24-X*60*60-Y*60;//calculo para segundos

    //exibe na tela a resposta:
    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);
 
    return 0;
}
