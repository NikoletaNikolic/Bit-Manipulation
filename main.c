#include <stdio.h>
#include <stdlib.h>


//prototip
void Meni();
void zapisiBinarno(unsigned int broj);
void setBit(unsigned int broj, unsigned int n);
void resetBit(unsigned int broj_reset, unsigned int m);
void brojiJedinice(unsigned int broj_broji);
void proveraBita(unsigned int broj_provera, unsigned int bit_provera);
void karakterBinarno(unsigned char karakter);
void pretvoriuMalo(unsigned char karakter);
void pretvoriuVeliko(unsigned char karakter);

int main()
{
    int opcija; //bira jednu od opcija iz menija
    int odg_meni=0; //osigurava validan unos opcije

    //za case 1:
    unsigned int broj;
    int uspeo_broj=0;
    //za case 2:
    unsigned int broj_set;
    unsigned int n;
    int uspeo_set_br=0;
    int uspeo_set_n=0;
    //za case 3:
    unsigned int broj_reset;
    unsigned int m;
    int uspeo_reset_br=0;
    int uspeo_reset_m=0;
    //za case 4:
    unsigned int broj_broji;
    int uspeo_broji_broj=0;
    //za case 5:
    unsigned int broj_provera;
    unsigned int bit_provera;
    int uspeo_broj_provera=0;
    int uspeo_bit_provera=0;
    //za case 6:
    unsigned char karakter;
    //za case 7:
    unsigned char kk_veliko_u_malo;
    //za case 8:
    unsigned char kk_malo_u_veliko;



    //POCETAK BLOKA: VRTI PROGRAM SVE DOK SE NE IZABERE 0 ZA KRAJ PROGRAMA
    do
    {
        //MENi
        Meni();
        //KRAJ MENIJA

        //POCETAK BLOKA: ZASTITA UNOSA VALIDNE OPCIJE
        do
        {
            printf("\nIzaberite zeljenu opciju: ");
            if(scanf("%d",&opcija)!=1)
            {
                printf("\nUneli ste nenumericki karakter. Molimo Vas, izaberite jednu od ponudjenih opcija u meniju.\n");
                fflush(stdin); //ukoliko se ne stavi, neprestano se ispisuje gornji printf
            }
            else if(opcija<0 || opcija>8)
            {
                printf("\nMolimo Vas, izaberite jednu od ponudjenih opcija u meniju.\n");

            }
            else
            {
                odg_meni=1;
            }

        }
        while(odg_meni==0);
        //KRAJ BLOKA: ZASTITA UNOSA VALIDNE OPCIJE


        switch(opcija)
        {
        case 1:
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tPRIKAZ BROJA U BINARNOM ZAPISU \n");
            printf("\n-------------------------------------------------------------------------------------\n");
            //zastita unosa validnog broja
            do
            {

                printf("\nUnesite celi broj: ");
                if(scanf("%d", &broj)!=1)
                {
                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }
                else
                {
                    uspeo_broj=1;
                }
            }
            while(uspeo_broj==0);
            //kraj zastite unosa validnog broja

            zapisiBinarno(broj);

            break;
        }
        case 2:
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tSET BITA \n");
            printf("\n-------------------------------------------------------------------------------------\n");
            //zastita unosa int broja za set bita
            do
            {
                printf("\nUnesite broj za set bita: ");

                if(scanf("%u", &broj_set)!=1)
                {

                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }


                else
                {
                    uspeo_set_br=1;
                }
            }
            while(uspeo_set_br==0);
            //kraj: zastita unosa int broja za set bita

            zapisiBinarno(broj_set);

            //zastita unosa rednog broja bita
            do
            {
                printf("\nUnesite redni broj bita kog zelite da setujete: ");

                if(scanf("%u", &n)!=1)
                {
                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }

                else if(n<0 || n>31)
                {
                    printf("\nMolimo Vas, unesite broj u odgovarajucem opsegu.\n");
                    fflush(stdin);
                }

                else
                {
                    uspeo_set_n=1;
                }


            }
            while(uspeo_set_n==0);
            //kraj: zastita unosa rednog broja bita

            setBit(broj_set,n);

            break;
        }
        case 3:
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tRESET BITA \n");
            printf("\n-------------------------------------------------------------------------------------\n");
            //zastita unosa int broja za reset bita
            do
            {
                printf("\nUnesite broj za reset bita: ");

                if(scanf("%u", &broj_reset)!=1)
                {

                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }


                else
                {
                    uspeo_reset_br=1;
                }
            }
            while(uspeo_reset_br==0);
            //kraj: zastita unosa int broja za reset bita

            zapisiBinarno(broj_reset);

            //zastita unosa rednog broja bita
            do
            {
                printf("\nUnesite redni broj bita kog zelite da resetujete: ");

                if(scanf("%u", &m)!=1)
                {
                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }

                else if(m<0 || m>31)
                {
                    printf("\nMolimo Vas, unesite broj u odgovarajucem opsegu.\n");
                    fflush(stdin);
                }

                else
                {
                    uspeo_reset_m=1;
                }


            }
            while(uspeo_reset_m==0);
            //kraj: zastita unosa rednog broja bita

            resetBit(broj_reset,m);
            break;
        }
        case 4:
        {

            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tPREBROJAVANJE JEDINICA U BINARNOM ZAPISU \n");
            printf("\n-------------------------------------------------------------------------------------\n");
            //zastita unosa int broja
            do
            {
                printf("\nUnesite broj za prebrojavanje jedinica u binarnom zapisu: ");

                if(scanf("%u", &broj_broji)!=1)
                {

                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }


                else
                {
                    uspeo_broji_broj=1;
                }
            }
            while(uspeo_broji_broj==0);
            //kraj: zastita unosa int broja
            brojiJedinice(broj_broji);
            break;
        }
        case 5:
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tPROVERA BITA \n");
            printf("\n-------------------------------------------------------------------------------------\n");
            //zastita unosa int broja
            do
            {
                printf("\nUnesite broj za proveru bita: ");

                if(scanf("%u", &broj_provera)!=1)
                {

                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }


                else
                {
                    uspeo_broj_provera=1;
                }
            }
            while(uspeo_broj_provera==0);
            //kraj: zastita unosa int broja

            zapisiBinarno(broj_provera);


            //zastita unosa int broja
            do
            {
                printf("\nUnesite redni broj bita kog zelite da proverite: ");

                if(scanf("%u", &bit_provera)!=1)
                {
                    printf("\nUneli ste nenumericki karakter. Molimo Vas, unesite celi broj:\n");
                    fflush(stdin);
                }

                else if(bit_provera<0 || bit_provera>31)
                {
                    printf("\nMolimo Vas, unesite broj u odgovarajucem opsegu.\n");
                    fflush(stdin);
                }

                else
                {
                    uspeo_bit_provera=1;
                }


            }
            while(uspeo_bit_provera==0);
            //kraj: zastita unosa int broja

            proveraBita(broj_provera,bit_provera);

            break;
        }
        case 6:
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tBINARNI ZAPIS KARAKTERA \n");
            printf("\n-------------------------------------------------------------------------------------\n");
            //zastita unosa karaktera
            do
            {
                printf("\n\nUnesi slovo: ");
                scanf(" %c", &karakter);
                if(!((karakter>65 && karakter<90)|| (karakter>97 && karakter<122)))
                {
                    printf("\nGreska. Niste uneli slovo.\n");
                }
            }
            while(!((karakter>65 && karakter<90)|| (karakter>97 && karakter<122)));
            //kraj: zastita unosa karaktera
            karakterBinarno(karakter);
            break;
        }
        case 7:
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tKONVERZIJA VELIKOG SLOVA U MALO \n");
            printf("\n-------------------------------------------------------------------------------------\n");
            //zastita unosa karaktera
            do
            {
                printf("\n\nUnesi slovo: ");
                scanf(" %c", &kk_veliko_u_malo);
                if(!((kk_veliko_u_malo>65 && kk_veliko_u_malo<90)|| (kk_veliko_u_malo>97 && kk_veliko_u_malo<122)))
                {
                    printf("\nGreska. Niste uneli slovo.\n");
                }
            }
            while(!((kk_veliko_u_malo>65 && kk_veliko_u_malo<90)|| (kk_veliko_u_malo>97 && kk_veliko_u_malo<122)));
            //kraj: zastita unosa karaktera


            pretvoriuMalo(kk_veliko_u_malo);
            break;


        }
        case 8:
        {
            system("cls");
            printf("\n-------------------------------------------------------------------------------------\n");
            printf("\n\t\t\tKONVERZIJA MALOG SLOVA U VELIKO \n");
            printf("\n-------------------------------------------------------------------------------------\n");

            //zastita unosa karaktera
            do
            {
                printf("\n\nUnesi slovo: ");
                scanf(" %c", &kk_malo_u_veliko);
                if(!((kk_malo_u_veliko>65 && kk_malo_u_veliko<90)|| (kk_malo_u_veliko>97 && kk_malo_u_veliko<122)))
                {
                    printf("\nGreska. Niste uneli slovo.\n");
                }
            }
            while(!((kk_malo_u_veliko>65 && kk_malo_u_veliko<90)|| (kk_malo_u_veliko>97 && kk_malo_u_veliko<122)));
            //kraj: zastita unosa karaktera

            pretvoriuVeliko(kk_malo_u_veliko);

            break;
        }

        }
    }
    while(opcija!=0);
    //KRAJ BLOKA: VRTI PROGRAM SVE DOK SE NE IZABERE 0 ZA KRAJ PROGRAMA
    return 0;
}



//funkcije

void Meni()
{
    printf("\n-------------------------------------------------------------------------------------\n");
    printf("\n\t\t\tPROGRAM ZA RAD SA BITOVIMA \n");
    printf("\n-------------------------------------------------------------------------------------\n");
    printf("\n1. Prikaz broja u binarnom zapisu");
    printf("\n2. Set bit-a");
    printf("\n3. Reset bit-a");
    printf("\n4. Prebrojavanje jedinica u binarnom zapisu");
    printf("\n5. Provera bit-a");
    printf("\n6. Binarni zapis karaktera");
    printf("\n7. Konvertovanje velikog slova u malo");
    printf("\n8. Konvertovanje malog slova u veliko");
    printf("\n0. Izlaz");
    printf("\n\n-------------------------------------------------------------------------------------\n");



}

void zapisiBinarno( unsigned int broj)
{
    unsigned int mask=1<<31;

    printf("\nBinarni zapis broja: ");
    printf("%d =  ", broj);

    //kroz svaku iteraciju proverava se rezultat operacije mask&broj, i u zavisnosti od rezultata upisuje 0 ili 1, a na kraju for petlje siftuje se mask
    for(unsigned int i=1; i<=32; ++i)
    {
        if(mask&broj)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask>>=1; // sifruje keca u mask

        //pravi razmake nakon 4 grupisana bita
        if(i%4==0)
        {
            printf(" ");
        }
    }
    printf("\n");
}

void setBit(unsigned int broj, unsigned int n)
{
    if((broj | (1<<n))==broj)
    {
        printf("\nBit je vec na 1 i nije ga potrebno setovati.\n");
    }
    else
    {
        broj= broj | (1<<n);
        printf("\n%d. bit je uspesno setovan. ", n);
        zapisiBinarno(broj);
    }




}

void resetBit(unsigned int broj_reset, unsigned int m)
{
    if((broj_reset & (~(1<<m)))==broj_reset)
    {
        printf("\nBit je vec na 0 i nije ga potrebno resetovati.\n");
    }
    else
    {
        broj_reset= broj_reset & (~(1<<m));
        printf("\n%d. bit je uspesno resetovan. ", m);
        zapisiBinarno(broj_reset);
    }
}

void brojiJedinice(unsigned int broj_broji)
{
    unsigned int mask=1<<31;
    int brojac=0;

    for(int i=1; i<=32; ++i)
    {
        if(broj_broji&mask)
        {
            brojac++;
        }
        mask>>=1;
    }

    zapisiBinarno(broj_broji);
    printf("\nBroj u svom binarnom zapisu ima %d jedinica.\n", brojac);
}

void proveraBita(unsigned int broj_provera, unsigned int bit_provera)
{
    if(broj_provera&(1<<bit_provera))
    {
        printf("\nVrednost %d. bita je 1.\n", bit_provera);
    }
    else
    {
        printf("\nVrednost %d. bita je 0.\n", bit_provera);
    }
}
void karakterBinarno(unsigned char karakter)
{
    unsigned int maska=1<<31;
    printf("\n\n");
    printf("Broj %c je : ", karakter);
    for(unsigned int i=1; i<=32; ++i)
    {

        if(karakter&maska)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        maska>>=1;


        if(i%4==0)
        {
            printf(" ");
        }
    }
    printf("\n\n");
}

void pretvoriuMalo(unsigned char karakter)
{

    //A = 0100 0001
    //a = 0110 0001
    //potrebno setovati 5.bit
    //maska= 0010 0000
    unsigned int maskaLower = 1<<5; //0000 0001<<5 => 0010 0000
    if((maskaLower|karakter)==karakter)
    {
        printf("\nUneli ste malo slovo. Konverzija nije potrebna.\n");
    }
    else
    {
        karakter= maskaLower|karakter;
        printf("\nUmanjeno slovo je: %c", karakter);
        printf("\n\n");

    }




}

void pretvoriuVeliko(unsigned char karakter)
{
    unsigned int maskaUpper = 1<<5; //0000 0001<<5 => 0010 0000
    //a = 0110 0001
    //A = 0100 0001
    //potrebno resetovati 5.bit
    //maska= 0010 0000
    //~maska= 1101 1111

    //a AND ~maska
    //     a  = 0110 0001
    // ~maska = 1101 1111
    // AND    = 0100 0001

    if((karakter & (~maskaUpper))==karakter)
    {
        printf("\nUneli ste veliko slovo. Konverzija nije potrebna.\n");
    }
    else
    {

        karakter= karakter & (~maskaUpper);
        printf("\nUvecano slovo je: %c", karakter);
        printf("\n\n");
    }

}
