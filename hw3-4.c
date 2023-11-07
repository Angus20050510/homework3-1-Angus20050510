#include <stdio.h>
#include <string.h>

int main() {
    char answer[5];
    char guess[5];
    int output[2];
    int ext;
    scanf("%s", answer);
    scanf("%s", guess);
    scanf("%d", &ext);
    if(ext==0){
        game_guessnum(answer,guess,output);
        printf("%dA%dB\n", output[0], output[1]);
    }

    return 0;
}
