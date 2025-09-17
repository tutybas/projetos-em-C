#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    system("cls");

    // palavra original
    char palavra[6] = "sorte";
    char npalavra[6];

    // lista de palavras de 5 letras
    char *lista[] = {
        "sagaz", "âmago", "termo", "negro", "êxito", "mexer", "nobre", "senso", "afeto", "ética",
        "algoz", "plena", "fazer", "assim", "tênue", "mútua", "sobre", "aquém", "seção", "vigor",
        "poder", "sutil", "porém", "fosse", "cerne", "ideia", "sanar", "audaz", "moral", "inato",
        "quiçá", "desde", "muito", "justo", "sonho", "honra", "torpe", "razão", "amigo", "ícone",
        "égide", "etnia", "fútil", "anexo", "dengo", "tange", "haver", "lapso", "então", "expor",
        "tempo", "boçal", "seara", "hábil", "mútuo", "saber", "casal", "graça", "xibiu", "óbice",
        "ávido", "dizer", "ardil", "pesar", "estar", "dever", "causa", "tenaz", "sendo", "ainda",
        "pária", "crivo", "coser", "temor", "brado", "genro", "comum", "ápice", "posse", "prole",
        "ânimo", "assaz", "ceder", "corja", "pauta", "detém", "fugaz", "censo", "ânsia", "culto",
        "atroz", "digno", "mundo", "forte", "mesmo", "vulgo", "vício", "gleba", "saúde", "criar",
        "cozer", "todos", "revés", "valha", "jeito", "pudor", "denso", "dogma", "neném", "louco",
        "atrás", "regra", "ordem", "limbo", "feliz", "pedir", "homem", "mercê", "clava", "impor",
        "ajuda", "usura", "banal", "round", "coisa", "juízo", "forma", "legal", "sábio", "falso",
        "certo", "falar", "servo", "prosa", "tenro", "pífio", "desse", "presa", "posso", "cunho",
        "herói", "devir", "viril", "vendo", "fácil", "ontem", "valor", "visar", "linda", "manso",
        "sério", "meiga", "ébrio", "puder", "mágoa", "acaso", "guisa", "fluir", "reaça", "afago",
        "ímpio", "lugar", "platô", "temer", "abrir", "garbo", "praxe", "união", "obter", "gerar",
        "burro", "matiz", "óbvio", "afins", "cisma", "bruma", "êxodo", "pleno", "crise", "vênia",
        "álibi", "tédio", "fluxo", "ritmo", "morte", "senil", "havia", "levar", "olhar", "enfim",
        "casta", "tomar", "visão", "gênio", "prumo", "ouvir", "parvo", "brega", "cabal", "reles",
        "falta"

    };

    int total = sizeof(lista) / sizeof(lista[0]);

    srand(time(NULL));
    int indice = rand() % total;

    strcpy(npalavra, lista[indice]); // palavra sorteada para npalavra

    // tentativa do jogador
    printf("Tente uma palavra: \n");
    scanf("%5s", npalavra);

    while (strcmp(npalavra, palavra) != 0) {

        for (int a = 0; a < strlen(npalavra); a++) {
            int encontrado = 0;

            // se a letra está na mesma posição
            if (npalavra[a] == palavra[a]) {
                printf("%c", toupper(npalavra[a]));
                continue;
            }

            // se a letra existe em outra posição
            for (int i = 0; i < strlen(palavra); i++) {
                if (npalavra[a] == palavra[i]) {
                    encontrado = 1;
                    break;
                }
            }

            if (encontrado) {
                printf("%c", tolower(npalavra[a]));
            } else {
                printf("X");
            }
        }

        scanf("%5s", npalavra);
    }

    printf("Você acertou a palavra!!!\n");
    return 0;
}
