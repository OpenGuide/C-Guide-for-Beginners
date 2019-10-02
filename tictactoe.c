#include <stdio.h>
#include <string.h>
#define N 3

char win(char m[N][N]);

int main(void){
    char matrice[N][N], winner;
    int r, c;
    for(r = 0; r < N; r++){
        for(c = 0; c < N; c++){
            scanf(" %c", &matrice[r][c]);
        }
    }

    winner = win(matrice);
    if(winner == 'x')
        printf("vince x\n");
    else if(winner == 'o')
        printf("vince o\n");
    else
        printf("pareggio\n");

    return 0;
}

char win(char m[N][N]){
    char win, combinazione[N + 1];
    int r, c;
    combinazione[N] = '\0';

    for(r = 0; r < N; r++){
        for(c = 0; c < N; c++){
            combinazione[c] = m[r][c];
        }
        if(!strcmp(combinazione, "xxx"))
        return 'x';
    else if(!strcmp(combinazione, "ooo"))
        return 'o';
    }



    for(c = 0; c < N; c++){
        for(r = 0; r < N; r++){
            combinazione[r] = m[r][c];
        }
        if(!strcmp(combinazione, "xxx"))
        return 'x';
    else if(!strcmp(combinazione, "ooo"))
        return 'o';
    }




    for(r = 0; r < N; r++){
        combinazione[r] = m[r][r];
    }
        if(!strcmp(combinazione, "xxx"))
            return 'x';
        else if(!strcmp(combinazione, "ooo"))
            return 'o';

    for(c = N-1; c >= 0; c--){
        combinazione[c] = m[c - c][c];
    }

    if(!strcmp(combinazione, "xxx"))
        return 'x';
    else if(!strcmp(combinazione, "ooo"))
        return 'o';

    return 'p';

}
