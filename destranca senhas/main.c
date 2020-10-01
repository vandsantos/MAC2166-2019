#include<stdio.h>
#include<stdlib.h>
int verificacao(char se[10],char cse[10],char csed[10]);
int qs=0;
//FILE *a;

int main(){
 a=fopen("copilacao.txt","w");
 int i=0;
 int cont1=0;
 int cont2=0;
 int cont3=0;
 int cont4=0;
 int cont5=0;
 int cont6=0;
 int cont7=0;
 int cont8=0;
 int cont9=0;
 int cont10=0;
 int vericador=0;
 int nc=0;
 int ncasas=0;
 char se[10]={0};
 char cse[10]={0};
 char csed[10]={0};
 char ta[100]={0};

 for(i=33;i<128;i++){
    ta[cont1]=i;
    cont1=cont1+1;}
    //printf("%d", 94*94*94*94*94*94);

printf("**FILOSOFIA DO DIA:\nQuem muito tempera, nunca come.\n\n");
printf("digite sua senha: ");
scanf(" %[^\n]", &se);

while(vericador==0){
  nc=94;
  ncasas=ncasas+1;
    if(ncasas==1){
      for(cont1=0;cont1<94;cont1++){
        cse[0]=ta[cont1];
        vericador=verificacao(se,cse,csed);
        if(vericador==1){
                    cont1=94;}}}
    if(ncasas==2){
      for(cont1=0;cont1<94;cont1++){
        cse[0]=ta[cont1];
        for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            vericador=verificacao(se,cse,csed);
            if(vericador==1){
                    cont1=94;cont2=94;}}}}
    if(ncasas==3){
      for(cont1=0;cont1<94;cont1++){
        cse[0]=ta[cont1];
        for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            for(cont3=0;cont3<94;cont3++){
               cse[2]=ta[cont3];
               vericador=verificacao(se,cse,csed);
               if(vericador==1){
                    cont1=94;cont2=94;cont3=94;}}}}}
    if(ncasas==4){
      for(cont1=0;cont1<94;cont1++){
        cse[0]=ta[cont1];
        for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            for(cont3=0;cont3<94;cont3++){
               cse[2]=ta[cont3];
               for(cont4=0;cont4<94;cont4++){
                  cse[3]=ta[cont4];
                  vericador=verificacao(se,cse,csed);
                  if(vericador==1){
                    cont1=94;cont2=94;cont3=94;cont4=94;}}}}}}
    if(ncasas==5){
      for(cont1=0;cont1<94;cont1++){
         cse[0]=ta[cont1];
         for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            for(cont3=0;cont3<94;cont3++){
               cse[2]=ta[cont3];
               for(cont4=0;cont4<94;cont4++){
                  cse[3]=ta[cont4];
                  for(cont5=0;cont5<94;cont5++){
                     cse[4]=ta[cont5];
                     vericador=verificacao(se,cse,csed);
                     if(vericador==1){
                    cont1=94;cont2=94;cont3=94;cont4=94;cont5=94;}}}}}}}
    if(ncasas==6){
     for(cont1=0;cont1<94;cont1++){
        cse[0]=ta[cont1];
        for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            for(cont3=0;cont3<94;cont3++){
               cse[2]=ta[cont3];
               for(cont4=0;cont4<94;cont4++){
                  cse[3]=ta[cont4];
                  for(cont5=0;cont5<94;cont5++){
                     cse[4]=ta[cont5];
                     for(cont6=0;cont6<94;cont6++){
                       cse[5]=ta[cont6];
                       vericador=verificacao(se,cse,csed);
                       if(vericador==1){
                    cont1=94;cont2=94;cont3=94;cont4=94;cont5=94;cont6=94;}}}}}}}}
    if(ncasas==7){
      for(cont1=0;cont1<94;cont1++){
        cse[0]=ta[cont1];
        for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            for(cont3=0;cont3<94;cont3++){
               cse[2]=ta[cont3];
               for(cont4=0;cont4<94;cont4++){
                  cse[3]=ta[cont4];
                  for(cont5=0;cont5<94;cont5++){
                     cse[4]=ta[cont5];
                     for(cont6=0;cont6<94;cont6++){
                       cse[5]=ta[cont6];
                       for(cont7=0;cont7<94;cont7++){
                          cse[6]=ta[cont7];
                          vericador=verificacao(se,cse,csed);
                          if(vericador==1){
                    cont1=94;cont2=94;cont3=94;cont4=94;cont5=94;cont6=94;cont7=94;}}}}}}}}}
     if(ncasas==8){
       for(cont1=0;cont1<94;cont1++){
         cse[0]=ta[cont1];
         for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            for(cont3=0;cont3<94;cont3++){
               cse[2]=ta[cont3];
               for(cont4=0;cont4<94;cont4++){
                  cse[3]=ta[cont4];
                  for(cont5=0;cont5<94;cont5++){
                     cse[4]=ta[cont5];
                     for(cont6=0;cont6<94;cont6++){
                       cse[5]=ta[cont6];
                       for(cont7=0;cont7<94;cont7++){
                          cse[6]=ta[cont7];
                          for(cont8=0;cont8<94;cont8++){
                             cse[7]=ta[cont8];
                             vericador=verificacao(se,cse,csed);
                              if(vericador==1){
                    cont1=94;cont2=94;cont3=94;cont4=94;cont5=94;cont6=94;cont7=94;cont8=94;}}}}}}}}}}
    if(ncasas==9){
      for(cont1=0;cont1<94;cont1++){
         cse[0]=ta[cont1];
         for(cont2=0;cont2<94;cont2++){
            cse[1]=ta[cont2];
            for(cont3=0;cont3<94;cont3++){
               cse[2]=ta[cont3];
               for(cont4=0;cont4<94;cont4++){
                  cse[3]=ta[cont4];
                  for(cont5=0;cont5<94;cont5++){
                     cse[4]=ta[cont5];
                     for(cont6=0;cont6<94;cont6++){
                       cse[5]=ta[cont6];
                       for(cont7=0;cont7<94;cont7++){
                          cse[6]=ta[cont7];
                          for(cont8=0;cont8<94;cont8++){
                             cse[7]=ta[cont8];
                             for(cont9=0;cont9<94;cont9++){
                                cse[8]=ta[cont9];
                                vericador=verificacao(se,cse,csed);
                                if(vericador==1){
                    cont1=94;cont2=94;cont3=94;cont4=94;cont5=94;cont6=94;cont7=94;cont8=94;cont9=94;}}}}}}}}}}}
    if(ncasas==10){
      for(cont1=1;cont1<95;cont1++){
         cse[0]=ta[cont1];
         for(cont2=1;cont2<95;cont2++){
            cse[1]=ta[cont2];
            for(cont3=1;cont3<95;cont3++){
               cse[2]=ta[cont3];
               for(cont4=1;cont4<95;cont4++){
                  cse[3]=ta[cont4];
                  for(cont5=1;cont5<95;cont5++){
                     cse[4]=ta[cont5];
                     for(cont6=1;cont6<95;cont6++){
                       cse[5]=ta[cont6];
                       for(cont7=1;cont7<95;cont7++){
                          cse[6]=ta[cont7];
                          for(cont8=1;cont8<95;cont8++){
                             cse[7]=ta[cont8];
                             for(cont9=1;cont9<95;cont9++){
                                cse[8]=ta[cont9];
                                for(cont10=1;cont10<95;cont10++){
                                    cse[9]=ta[cont10];
                                    vericador=verificacao(se,cse,csed);
                                    if(vericador==1){
                    cont1=94;cont2=94;cont3=94;cont4=94;cont5=94;cont6=94;cont7=94;cont8=94;cont9=94;cont10=94;}}}}}}}}}}}}
}
printf("\nA sua senha eh: ");
printf("%s\n", cse);
nc=numerodecombinacoes(ncasas,nc);
printf("numero de senhas possiveis:%d \nnumero de digitos: %d\n", nc,ncasas);
printf("numero de senhas geradas: %d", qs);
fclose(a);
 return 0;}

int numerodecombinacoes(int a, int b){
int cont;
b=94;
for(cont=1;cont<a;cont++){
    b=b*94;}
return b;}

int verificacao(char se[10],char cse[10],char csed[10]){
int v=0;
int cont1;
qs=qs+1;
//fprintf(a," %s\n", cse);
if((se[0]==cse[0])&&(se[1]==cse[1])&&(se[2]==cse[2])&&(se[3]==cse[3])&&(se[4]==cse[4])
   &&(se[5]==cse[5])&&(se[6]==cse[6])&&(se[7]==cse[7])&&(se[8]==cse[8])&&(se[9]==cse[9])){
    v=1;}
if(v==1){
    for(cont1=1;cont1<=10;cont1++){
        csed[cont1]=cse[cont1];}}
return v;
}

