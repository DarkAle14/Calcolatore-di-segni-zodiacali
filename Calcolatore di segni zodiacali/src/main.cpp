#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>

int main(){
    int giorno = 0;
    int mese = 0;

//giorno
    printf(" __________________________________________________________  \n");
    printf("|                                                          | \n");
    printf("|             Inserire il giorno di nascita                | \n");
    printf("|__________________________________________________________| \n");
    printf("Inserisci il giorno di nascita: ");
    scanf("%d", &giorno);

//controllo del giorno
    while(giorno < 1 || giorno > 31){
        printf(" __________________________________________________________  \n");
        printf("|                                                          | \n");
        printf("|     Giorno non valido. Inserire un numero tra 1 e 31     | \n");
        printf("|__________________________________________________________| \n");
        printf("Inserire il giorno di nascita: ");
        scanf("%d", &giorno);
    }

//mese
    printf(" __________________________________________________________  \n");
    printf("|                                                          | \n");
    printf("|                Inserire il mese di nascita               | \n");
    printf("|__________________________________________________________| \n");
    printf("Inserisci il mese di nascita: ");
    scanf("%d", &mese);

//controllo del mese
    while(mese < 1 || mese > 12){
        printf(" __________________________________________________________  \n");
        printf("|                                                          | \n");
        printf("|      Mese non valido. Inserire un numero tra 1 e 12      | \n");
        printf("|__________________________________________________________| \n");
        printf("Inserire il mese di nascita: ");
        scanf("%d", &mese);
    }

//apertura finestra
    initwindow(900, 900, "Calcolatore di segni zodiacali");
    settextstyle(SIMPLEX_FONT, HORIZ_DIR, 5);
    char* Titolo = "Calcolatore di segni zodiacali";
    outtextxy(450 - (textwidth(Titolo) / 2), 6, Titolo);

//calcolo del segno zodiacale
    switch (mese){
        case 1:
            if(giorno >= 20){
                readimagefile("Acquario.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Acquario") / 2), 50,"Il tuo segno e' Acquario");

                if (giorno == 20){ //cuspide con capricorno
                    readimagefile("Acquario.jpg", 100, 100, 800, 800);
                    settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                    outtextxy(450 - (textwidth("Il tuo segno e' Acquario") / 2), 50,"Il tuo segno e' Acquario");
                    outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del capricorno") / 2), 75, "e sei nato/a sulla cuspide del capricorno");
                }
            }
            else{
                readimagefile("Capricorno.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Capricorno") / 2), 50,"Il tuo segno e' Capricorno");

                if (giorno == 19){ //cuspide con acquario
                    readimagefile("Capricorno.jpg", 100, 100, 800, 800);
                    settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                    outtextxy(450 - (textwidth("Il tuo segno e' Capricorno") / 2), 50,"Il tuo segno e' Capricorno");
                    outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dell'Acquario") / 2), 75, "e sei nato/a sulla cuspide dell'Acquario");
                }
            }
            break;
        case 2:
            if(giorno < 1 || giorno > 29){
                readimagefile("CerchioZodiaco.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                setcolor(LIGHTRED);
                outtextxy(450 - (textwidth("La data non e' valida") / 2), 60,"La data non e' valida");
            }
            else if(giorno <= 18){
                readimagefile("Acquario.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Acquario") / 2), 50,"Il tuo segno e' Acquario");

                if (giorno == 18 || giorno == 19){ //cuspide con pesci
                    readimagefile("Acquario.jpg", 100, 100, 800, 800);
                    settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                    outtextxy(450 - (textwidth("Il tuo segno e' Acquario") / 2), 50,"Il tuo segno e' Acquario");
                    outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dei Pesci") / 2), 75, "e sei nato/a sulla cuspide dei Pesci");
                }
            }
            else{
                readimagefile("Pesci.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Pesci") / 2), 50,"Il tuo segno e' Pesci");

                if (giorno == 17) {//cuspide con acquario
                readimagefile("Pesci.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Pesci") / 2), 50,"Il tuo segno e' Pesci");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dell'Acquario") / 2), 75, "e sei nato/a sulla cuspide dell'Acquario");
                }
            }
            break;
        case 3:
           if(giorno <= 20){
                readimagefile("Pesci.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Pesci") / 2), 50,"Il tuo segno e' Pesci");

                if (giorno == 20) { //cuspide con ariete
                readimagefile("Pesci.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Pesci") / 2), 50,"Il tuo segno e' Pesci");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dell'Ariete") / 2), 75, "e sei nato/a sulla cuspide dell'Ariete");
                }
            }
            else{
                readimagefile("Ariete.jpg", 100, 100, 800, 800); 
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Ariete") / 2), 50,"Il tuo segno e' Ariete");

                if (giorno == 21) { //cuspide con pesci
                readimagefile("Ariete.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Ariete") / 2), 50,"Il tuo segno e' Ariete");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dei Pesci") / 2), 75, "e sei nato/a sulla cuspide dei Pesci");
                }
            }
            break;
        case 4:
            if(giorno < 1 || giorno > 30){
                readimagefile("CerchioZodiaco.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                setcolor(LIGHTRED);
                outtextxy(450 - (textwidth("La data non e' valida") / 2), 60,"La data non e' valida");
            }
            else if(giorno <= 19){
                readimagefile("Ariete.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Ariete") / 2), 50,"Il tuo segno e' Ariete");

                if (giorno == 19) { //cuspide con toro
                readimagefile("Ariete.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Ariete") / 2), 50,"Il tuo segno e' Ariete");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Toro") / 2), 75, "e sei nato/a sulla cuspide del Toro");
                }
            }
            else{
                readimagefile("Toro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Toro") / 2), 50,"Il tuo segno e' Toro");

                if (giorno == 20) { //cuspide con ariete
                readimagefile("Toro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Toro") / 2), 50,"Il tuo segno e' Toro");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dell'Ariete") / 2), 75, "e sei nato/a sulla cuspide dell'Ariete");
                }
            }
            break;
        case 5:
            if(giorno <= 20){
                readimagefile("Toro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Toro") / 2), 50,"Il tuo segno e' Toro");

                if (giorno == 20) { //cuspide con gemelli
                readimagefile("Toro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Toro") / 2), 50,"Il tuo segno e' Toro");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dei Gemelli") / 2), 75, "e sei nato/a sulla cuspide dei Gemelli");
                }
            }
            else{
                readimagefile("Gemelli.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Gemelli") / 2), 50,"Il tuo segno e' Gemelli");

                if (giorno == 21) { //cuspide con toro
                readimagefile("Gemelli.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Gemelli") / 2), 50,"Il tuo segno e' Gemelli");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Toro") / 2), 75, "e sei nato/a sulla cuspide del Toro");
                }
            }
            break;
        case 6:
            if(giorno < 1 || giorno > 30){
                readimagefile("CerchioZodiaco.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                setcolor(LIGHTRED);
                outtextxy(450 - (textwidth("La data non e' valida") / 2), 60,"La data non e' valida");
            }
            else if(giorno <= 20){
                readimagefile("Gemelli.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Gemelli") / 2), 50,"Il tuo segno e' Gemelli");

                if (giorno == 20) { //cuspide con cancro
                readimagefile("Gemelli.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Gemelli") / 2), 50,"Il tuo segno e' Gemelli");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Cancro") / 2), 75, "e sei nato/a sulla cuspide del Cancro");
                }
            }
            else{
                readimagefile("Cancro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Cancro") / 2), 50,"Il tuo segno e' Cancro");

                if (giorno == 21) { //cuspide con gemelli
                readimagefile("Cancro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Cancro") / 2), 50,"Il tuo segno e' Cancro");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dei Gemelli") / 2), 75, "e sei nato/a sulla cuspide dei Gemelli");
                }
            }
            break;
        case 7:
            if(giorno <= 22){
                readimagefile("Cancro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Cancro") / 2), 50,"Il tuo segno e' Cancro");

                if (giorno == 22) { //cuspide con leone
                readimagefile("Cancro.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Cancro") / 2), 50,"Il tuo segno e' Cancro");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Leone") / 2), 75, "e sei nato/a sulla cuspide del Leone");
                }
            }
            else{
                readimagefile("Leone.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Leone") / 2), 50,"Il tuo segno e' Leone");

                if (giorno == 23) { //cuspide con cancro
                readimagefile("Leone.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Leone") / 2), 50,"Il tuo segno e' Leone");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Cancro") / 2), 75, "e sei nato/a sulla cuspide del Cancro");
                }
            }
            break;
        case 8:
            if(giorno <= 22){
                readimagefile("Leone.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Leone") / 2), 50,"Il tuo segno e' Leone");

                if (giorno == 22) { //cuspide con vergine
                readimagefile("Leone.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Leone") / 2), 50,"Il tuo segno e' Leone");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide della Vergine") / 2), 75, "e sei nato/a sulla cuspide della Vergine");
                }
            }
            else{
                readimagefile("Vergine.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Vergine") / 2), 50,"Il tuo segno e' Vergine");

                if (giorno == 23) { //cuspide con leone
                readimagefile("Vergine.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Vergine") / 2), 50,"Il tuo segno e' Vergine");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Leone") / 2), 75, "e sei nato/a sulla cuspide del Leone");
                }
            }
            break;
        case 9:
            if(giorno < 1 || giorno > 30){
                readimagefile("CerchioZodiaco.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                setcolor(LIGHTRED);
                outtextxy(450 - (textwidth("La data non e' valida") / 2), 60,"La data non e' valida");
            }
            else if(giorno <= 22){
                readimagefile("Vergine.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Vergine") / 2), 50,"Il tuo segno e' Vergine");

                if (giorno == 22) { //cuspide con bilancia
                readimagefile("Verine.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Vergine") / 2), 50,"Il tuo segno e' Vergine");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide della Bilancia") / 2), 75, "e sei nato/a sulla cuspide della Bilancia");
                }
            }
            else{
                readimagefile("Bilancia.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Bilancia") / 2), 50,"Il tuo segno e' Bilancia");

                if (giorno == 23 ) { //cuspide con vergine
                readimagefile("Bilancia.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Bilancia") / 2), 50,"Il tuo segno e' Bilancia");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide della Vergine") / 2), 75, "e sei nato/a sulla cuspide della Vergine");
                }
            }
            break;
        case 10:
            if(giorno <= 22){
                readimagefile("Bilancia.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Bilancia") / 2), 50,"Il tuo segno e' Bilancia");

                if (giorno == 22) { //cuspide con scorpione
                readimagefile("Bilancia.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Bilancia") / 2), 50,"Il tuo segno e' Bilancia");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dello Scorpione") / 2), 75, "e sei nato/a sulla cuspide dello Scorpione");
                }
            }
            else{
                readimagefile("Scorpione.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Scorpione") / 2), 50,"Il tuo segno e' Scorpione");

                if (giorno == 23) { //cuspide con bilancia
                readimagefile("Scoprione.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Scorpione") / 2), 50,"Il tuo segno e' Scorpione");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide della Bilancia") / 2), 75, "e sei nato/a sulla cuspide della Bilancia");
                }
            }
            break;
        case 11:
            if(giorno < 1 || giorno > 30){
                readimagefile("CerchioZodiaco.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                setcolor(LIGHTRED);
                outtextxy(450 - (textwidth("La data non e' valida") / 2), 60,"La data non e' valida");
            }
            else if(giorno <= 21){
                readimagefile("Scorpione.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Scorpione") / 2), 50,"Il tuo segno e' Scorpione");

                if (giorno == 21) { //cuspide con sagittario
                    readimagefile("Scorpione.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Scorpione") / 2), 50,"Il tuo segno e' Scoprione");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Saggittario") / 2), 75, "e sei nato/a sulla cuspide del Saggittario");
                }
            }
            else{
                readimagefile("Sagittario.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Saggittario") / 2), 50,"Il tuo segno e' Saggittario");

                if (giorno == 22) { //cuspide con scorpione
                readimagefile("Saggittario.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Saggittario") / 2), 50,"Il tuo segno e' Saggittario");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide dello Scorpione") / 2), 75, "e sei nato/a sulla cuspide dello Scorpione");
                }
            }
            break;
        case 12:
            if(giorno <= 21){
                readimagefile("Sagittario.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Saggittario") / 2), 50,"Il tuo segno e' Saggittario");

                if (giorno == 21) { //cuspide con capricorno
                readimagefile("Saggittario.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Saggittario") / 2), 50,"Il tuo segno e' Saggittario");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Capricorno") / 2), 75, "e sei nato/a sulla cuspide del Capricorno");
                }
            }
            else{
                readimagefile("Capricorno.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Capricorno") / 2), 50,"Il tuo segno e' Capricorno");
                
                if (giorno == 22) { //cuspide con sagittario
                readimagefile("Capricorno.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                outtextxy(450 - (textwidth("Il tuo segno e' Capricorno") / 2), 50,"Il tuo segno e' Capricorno");
                outtextxy(450 - (textwidth("e sei nato/a sulla cuspide del Saggittario") / 2), 75, "e sei nato/a sulla cuspide del Saggittario");
                }
            }
            break;
        default:

//errore
            readimagefile("CerchioZodiaco.jpg", 100, 100, 800, 800);
                settextstyle(SIMPLEX_FONT, HORIZ_DIR, 2);
                setcolor(LIGHTRED);
                outtextxy(450 - (textwidth("La data non e' valida") / 2), 60,"La data non e' valida");
            break;
    }
    getch();
    closegraph();
}