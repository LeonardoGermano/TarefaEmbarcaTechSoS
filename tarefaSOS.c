#include <stdio.h>
#include "pico/stdlib.h"


// Definindo o pino do LED pino 13
#define led_pin_red 13

// Definindo os tempos
int tempo_ponto = 200;    // 0,2 segundos para ponto
int tempo_traco = 800;    // 0,8 segundos para traço
int tempo_gap = 125;      // Intervalo entre pontos e traços dentro da mesma letra (0,125 segundos)
int tempo_intervalo_letra = 250; // Intervalo entre letras (0,25 segundos)
int tempo_intervalo_ciclo = 3000; // Intervalo entre ciclos (3 segundos)

void enviar_ponto() {
    gpio_put(led_pin_red, true);  // Acende o LED (ponto)
    sleep_ms(tempo_ponto);        // Aguarda o tempo do ponto
    gpio_put(led_pin_red, false); // Apaga o LED
    sleep_ms(tempo_gap);          // Intervalo entre ponto e traço
}

void enviar_traco() {
    gpio_put(led_pin_red, true);  // Acende o LED (traço)
    sleep_ms(tempo_traco);        // Aguarda o tempo do traço
    gpio_put(led_pin_red, false); // Apaga o LED
    sleep_ms(tempo_gap);          // Intervalo entre ponto e traço
}

void enviar_SOS() {
    // Enviar 3 pontos
    for (int i = 0; i < 3; i++) {
        enviar_ponto();
    }

    // Enviar 3 traços
    for (int i = 0; i < 3; i++) {
        enviar_traco();
    }

    // Enviar 3 pontos
    for (int i = 0; i < 3; i++) {
        enviar_ponto();
    }
}

int main() {
    // Inicializa o pino do LED
    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);

    while (true) {
        // Envia o sinal SOS
        enviar_SOS();
        
        // Aguarda o tempo de intervalo entre os ciclos SOS (3 segundos)
        sleep_ms(tempo_intervalo_ciclo);
    }

    return 0;
}
