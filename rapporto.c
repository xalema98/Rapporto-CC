#include <stdio.h>
#include <string.h>

struct rapporto {
    int caso;
    char orario[7];
    char rilascio[15];
    char nomeop1[70];
    char nomeop2[70];
    char nomeop3[70];
    char veicolo[100];
    char targa[10];
    char nome[50];
    int nop;
    char tipo[19];
    int civico;
    char esito[9];
    char sostanza[20];
    char sanzioni[300];
};

int main(){
    int continua = 0;
    struct rapporto rapporto1[100];
    int scelta;
    int i = 0, j = 0;
    char motivo[20];
    scelta = 1;
    int formaz = 0;
    while(scelta != 0){
        while(continua == 0){
            printf("Ciao, fai il tuo rapporto in maniera semplice\n1 rilasci licenze\n2 formazioni PMZ/Autoradio/Fiamma/Doppia Charlie\n3 fermi\n4 inseguimenti\n5 rapine\n6 controlli sostanze\n7 controlli forestali\n8 scioglimento PMZ/autoradio/Fiamma/Doppia Charlie\n0 termina\n--> ");
            scanf("%d", &scelta);
            getchar();
            switch (scelta){
                case 1:
                    rapporto1[i].caso = 1;
                    printf("Ore: ");
                    fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                    rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                    printf("Licenza rilasciata: ");
                    fgets(rapporto1[i].rilascio, sizeof(rapporto1[i].rilascio), stdin);
                    rapporto1[i].rilascio[strcspn(rapporto1[i].rilascio, "\n")] = '\0';
                    printf("Nome: ");
                    fgets(rapporto1[i].nome, sizeof(rapporto1[i].nome), stdin);
                    rapporto1[i].nome[strcspn(rapporto1[i].nome, "\n")] = '\0';
                    i++;
                    break; 
                case 2:
                    if(formaz == 0){
                        rapporto1[i].caso = 2;
                        printf("Ore: ");
                        fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                        rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                        printf("PMZ, Autoradio, Fiamma o Doppia Charlie: ");
                        fgets(rapporto1[i].tipo, sizeof(rapporto1[i].tipo), stdin);
                        rapporto1[i].tipo[strcspn(rapporto1[i].tipo, "\n")] = '\0';
                        printf("numero operatori: ");
                        scanf("%d", &rapporto1[i].nop);
                        getchar();
                        do{
                            if(rapporto1[i].nop == 2){
                                printf("Nome operatore 1: ");
                                fgets(rapporto1[i].nomeop1, sizeof(rapporto1[i].nomeop1), stdin);
                                rapporto1[i].nomeop1[strcspn(rapporto1[i].nomeop1, "\n")] = '\0';
                                printf("Nome operatore 2: ");
                                fgets(rapporto1[i].nomeop2, sizeof(rapporto1[i].nomeop2), stdin);
                                rapporto1[i].nomeop2[strcspn(rapporto1[i].nomeop2, "\n")] = '\0';
                            }else if(rapporto1[i].nop == 3){
                                printf("Nome operatore 1: ");
                                fgets(rapporto1[i].nomeop1, sizeof(rapporto1[i].nomeop1), stdin);
                                rapporto1[i].nomeop1[strcspn(rapporto1[i].nomeop1, "\n")] = '\0';
                                printf("Nome operatore 2: ");
                                fgets(rapporto1[i].nomeop2, sizeof(rapporto1[i].nomeop2), stdin);
                                rapporto1[i].nomeop2[strcspn(rapporto1[i].nomeop2, "\n")] = '\0';
                                printf("Nome operatore 3: ");
                                fgets(rapporto1[i].nomeop3, sizeof(rapporto1[i].nomeop3), stdin);
                                rapporto1[i].nomeop3[strcspn(rapporto1[i].nomeop3, "\n")] = '\0';
                            }else if(rapporto1[i].nop == 0){
                                printf("che reparto ha avviato la doppia charlie: ");
                                scanf("%s", motivo);
                                motivo[strlen(motivo)] = '\0';
                                break;
                            }
                        }while(rapporto1[i].nop < 2 || rapporto1[i].nop > 3 && rapporto1[i].nop != 0);
                        i++;
                        formaz = 1;
                    }else{
                        printf("hai già formato una pattuglia\n");
                    }
                    break;
                case 3:
                    if(formaz == 1){
                        rapporto1[i].caso = 3;
                        printf("Ore: ");
                        fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                        rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                        printf("Veicolo: ");
                        fgets(rapporto1[i].veicolo, sizeof(rapporto1[i].veicolo), stdin);
                        rapporto1[i].veicolo[strcspn(rapporto1[i].veicolo, "\n")] = '\0';
                        printf("Targa: ");
                        fgets(rapporto1[i].targa, sizeof(rapporto1[i].targa), stdin);
                        rapporto1[i].targa[strcspn(rapporto1[i].targa, "\n")] = '\0';
                        printf("Nome soggetto: ");
                        fgets(rapporto1[i].nome, sizeof(rapporto1[i].nome), stdin);
                        rapporto1[i].nome[strcspn(rapporto1[i].nome, "\n")] = '\0';
                        printf("Civico: ");
                        scanf("%d", &rapporto1[i].civico);
                        getchar();
                        printf("Sanzioni: ");
                        fgets(rapporto1[i].sanzioni, sizeof(rapporto1[i].sanzioni), stdin);
                        rapporto1[i].sanzioni[strcspn(rapporto1[i].sanzioni, "\n")] = '\0';
                        i++;
                    }else{
                        printf("non hai formato nessuna pattuglia\n");
                    }
                    break;
                case 4:
                    if(formaz == 1){
                        rapporto1[i].caso = 4;
                        printf("Ore: ");
                        fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                        rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                        printf("Veicolo: ");
                        fgets(rapporto1[i].veicolo, sizeof(rapporto1[i].veicolo), stdin);
                        rapporto1[i].veicolo[strcspn(rapporto1[i].veicolo, "\n")] = '\0';
                        printf("Targa: ");
                        fgets(rapporto1[i].targa, sizeof(rapporto1[i].targa), stdin);
                        rapporto1[i].targa[strcspn(rapporto1[i].targa, "\n")] = '\0';
                        printf("Civico: ");
                        scanf("%d", &rapporto1[i].civico);
                        getchar();
                        printf("Esito inseguimento: ");
                        fgets(rapporto1[i].esito, sizeof(rapporto1[i].esito), stdin);
                        i++;
                    }else{
                        printf("non hai formato nessuna pattuglia\n");
                    }
                    break;
                case 5:
                    if(formaz == 1){
                        rapporto1[i].caso = 5;
                        printf("Ore: ");
                        fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                        rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                        printf("Civico: ");
                        scanf("%d", &rapporto1[i].civico);
                        getchar();
                        printf("Esito: ");
                        fgets(rapporto1[i].esito, sizeof(rapporto1[i].esito), stdin);
                        rapporto1[i].esito[strcspn(rapporto1[i].esito, "\n")] = '\0';
                        i++;
                    }else{
                        printf("non hai formato nessuna pattuglia\n");
                    }
                    break;
                case 6:
                    if(formaz == 1){
                        rapporto1[i].caso = 6;
                        printf("Ore: ");
                        fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                        rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                        printf("Sostanza trovata: ");
                        fgets(rapporto1[i].sostanza, sizeof(rapporto1[i].sostanza), stdin);
                        i++;
                    }else{
                        printf("non hai formato nessuna pattuglia\n");
                    }
                    break;
                case 7:
                if(formaz == 1){
                    rapporto1[i].caso = 7;
                    printf("Ore: ");
                    fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                    rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                    printf("Esito: ");
                    fgets(rapporto1[i].esito, sizeof(rapporto1[i].esito), stdin);
                    rapporto1[i].esito[strcspn(rapporto1[i].esito, "\n")] = '\0';
                    i++;
                    }else{
                        printf("non hai formato nessuna pattuglia\n");
                    }
                    break;
                case 8:
                    if(formaz == 1){
                        rapporto1[i].caso = 8;
                        printf("Ore: ");
                        fgets(rapporto1[i].orario, sizeof(rapporto1[i].orario), stdin);
                        rapporto1[i].orario[strcspn(rapporto1[i].orario, "\n")] = '\0';
                        printf("PMZ, Autoradio, Fiamma o Doppia Charlie: ");
                        fgets(rapporto1[i].tipo, sizeof(rapporto1[i].tipo), stdin);
                        rapporto1[i].tipo[strcspn(rapporto1[i].tipo, "\n")] = '\0';
                        getchar();
                    }else{
                        printf("non hai formato nessuna pattuglia\n");
                    }
                    break;
                case 0:
                    printf("fine rapporto");
                    continua = 1;
                    break;
                default:
                    printf("Errore: Input non valido\n");
                    break;
            }
        }
    }
    
    printf("\nEcco il tuo rapporto finale:\n");
    for(j = 0; j <= i; j++){
        switch (rapporto1[j].caso){
            case 1:
                printf("- Ore %s Rilascio %s al civile %s\n", rapporto1[j].orario, rapporto1[j].rilascio, rapporto1[j].nome);
                break;
            case 2:
                    if(rapporto1[j].nop == 2){
                        printf("- Ore %s Formata %s composta da %s e %s\n", rapporto1[j].orario, rapporto1[j].tipo, rapporto1[j].nomeop1, rapporto1[j].nomeop2);
                    }else if(rapporto1[j].nop == 3){
                        printf("- Ore %s Formata %s composta da %s, %s e %s\n", rapporto1[j].orario, rapporto1[j].tipo, rapporto1[j].nomeop1, rapporto1[j].nomeop2, rapporto1[j].nomeop3);
                    }else if(rapporto1[j].nop == 0){
                        printf("%s - Ore %s Formata %s", motivo, rapporto1[j].orario, rapporto1[j].tipo);
                    }
                break;
            case 3:
                printf("- Ore %s Fermo %s Targa %s Sogg. %s Civ. %d, Sanzioni Emanate: %s\n", rapporto1[j].orario, rapporto1[j].veicolo, rapporto1[j].targa, rapporto1[j].nome, rapporto1[j].civico, rapporto1[j].sanzioni);
                break;
            case 4:
                printf("- Ore %s Inseguimento %s Targa %s Civ: %d, Esito: %s\n", rapporto1[j].orario, rapporto1[j].veicolo, rapporto1[j].targa, rapporto1[j].civico, rapporto1[j].esito);
                break;
            case 5:
                printf("- Ore %s Rapina Civ %d, Esito: %s\n", rapporto1[j].orario, rapporto1[j].civico, rapporto1[j].esito);
                break;
            case 6:
                printf("Reparti\n- Ore %s Controllo sostanze, Sostanza trovata: %s\n", rapporto1[j].orario, rapporto1[j].sostanza);
                break;
            case 7:
                printf("Reparti\n- Ore %s Controllo Zone di Caccia, Esito: %s\n", rapporto1[j].orario, rapporto1[j].esito);
                break;
            case 8:
                printf("- Ore %s sciolta %s", rapporto1[j].orario, rapporto1[j].tipo);
        }
    }
    return 0;
}