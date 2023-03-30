
#include <stdio.h>

int main() {
   
   int caminhao = 80;
   int carro = 110;
   int distancia = 100;
   float tempo,distanciaCar,distanciaCam;
   
   // Calcula o tempo que leva para os veículos se cruzarem
   tempo = distancia / (carro + (caminhao + 10));
   
   distanciaCar = (11/3) * distancia / tempo;
   distanciaCam = (8/3) * distancia / tempo;
   
   if (distanciaCar < distanciaCam) {
     printf("O carro está mais próximo de Ribeirão Preto.");
    } else {
     printf("O caminhão está mais próximo de Ribeirão Preto.");
    }

    return 0;
}

//Cheguei a essa conclusao, pois ja que o carro sai da cidade de ribeirao preto para franca a uma velocidade consideravelmente mais alta que o caminhao. porem nao se trata apenas da velocidade mas da distancia, se o carro estivesse a uma distancia abaixo de 25 km ele estaria mais perto de ribeirao preto, portanto considerando a velociade e a distancia em que o carro esta, podemos afirmar que o caminhao estaria mais perto, pelo motivo de que pela sua lentidao, o carro ja estaria entrando em franca enquanto o caminhao estaria na metade do caminho a ribeirao o qeu o torna mais proximo
