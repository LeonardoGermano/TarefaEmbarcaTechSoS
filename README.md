# Projeto: Implementação do Sinal SOS na BitDogLab

## Descrição
Este projeto consiste na implementação do sinal **SOS** em código Morse utilizando um LED conectado à placa **BitDogLab**, baseada na Raspberry Pi Pico. O sinal é gerado por meio de pulsos luminosos que seguem o padrão:
- Um **ponto (.)**: LED aceso por 0,2 segundos.
- Um **traço (-)**: LED aceso por 0,8 segundos.
- Intervalo entre pontos e traços: 0,125 segundos.
- Intervalo entre letras: 0,25 segundos.
- Ciclo completo reiniciado após 3 segundos.

O objetivo é explorar conceitos de sistemas embarcados, controle de GPIOs e temporização usando a linguagem C.

## Ferramentas Utilizadas
- **Visual Studio Code**: Ambiente de desenvolvimento.
- **Extensões**:
  - Wokwi
  - Raspberry Pi Pico SDK
  - C/C++
- **Wokwi Web**: Simulações adicionais online.
- **Placa BitDogLab**: Execução do código no hardware físico.

## Estrutura do Código
O código é modularizado em funções:
- `enviar_ponto()`: Controla o LED para um ponto.
- `enviar_traco()`: Controla o LED para um traço.
- `enviar_SOS()`: Executa o ciclo completo do sinal SOS.
- `main()`: Configura os GPIOs e executa o loop principal.

## Configuração do Ambiente
1. Instale o SDK da Raspberry Pi Pico.
2. Configure o CMake para gerenciamento de build.
3. Instale as extensões mencionadas no Visual Studio Code.
4. Utilize o Wokwi Web para testar rapidamente o comportamento do LED.

## Execução do Código na BitDogLab
1. Compile o código usando o SDK da Raspberry Pi Pico.
2. Gere o arquivo binário.
3. Envie o arquivo para a placa BitDogLab.
4. Conecte um LED ao GPIO 13 e execute o programa.

## Resultados
- O LED reproduz corretamente o sinal SOS em código Morse.
- Testes realizados tanto no Wokwi Web quanto na placa física confirmaram o funcionamento esperado.

## Referências
- [Documentação da Raspberry Pi Pico](https://www.raspberrypi.org/documentation/microcontrollers)
- [Tutorial do Wokwi](https://docs.wokwi.com)
- Datasheet da placa BitDogLab

## Capturas de Tela e Imagens Sugeridas
- **Configuração do Ambiente**: Visual Studio Code configurado.
- **Circuito**: Diagrama de conexão do LED ao GPIO 13.
- **Simulação**: Captura do Wokwi Web com o circuito em execução.
- **Execução no Hardware**: Foto do LED piscando na BitDogLab.

