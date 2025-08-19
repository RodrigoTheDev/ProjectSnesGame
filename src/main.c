#include <snes.h>

void main(void) {
    consoleInit(); // Inicializa o console de texto
    setMode(BG_MODE1, 0);
    
    consoleDrawText("Hello World!", 0, 0); // Escreve na linha 0, coluna 0
    consoleDrawText("SNES dev with pvsneslib", 1, 0); // Linha 1, coluna 0

    while(1) {
        WaitForVBlank(); // Espera o próximo VBlank para não travar
    }
}
