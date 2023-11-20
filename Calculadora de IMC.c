#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50];
    float peso, altura, imc;
    
    printf("Calculadora de IMC - Índice de Massa Corporal\n");
    printf("Informe o nome do paciente: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0'; // Remover o caractere de nova linha
    
    printf("Informe o peso (em kg): ");
    scanf("%f", &peso);
    
    if (peso <= 0) {
        printf("Peso inválido. O peso deve ser maior que zero.\n");
        return 1; // Saída com erro
    }
    
    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);
    
    if (altura <= 0) {
        printf("Altura inválida. A altura deve ser maior que zero.\n");
        return 1; // Saída com erro
    }
    
    imc = peso / (altura * altura);
    
    printf("\nRelatório IMC para %s:\n", nome);
    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m\n", altura);
    printf("IMC: %.2f\n", imc);
    
    // Tabela de classificação do IMC
    printf("\nClassificação IMC:\n");
    printf("Abaixo do peso: Menos de 18.5\n");
    printf("Peso saudável: 18.5 - 24.9\n");
    printf("Sobrepeso: 25 - 29.9\n");
    printf("Obesidade Grau I: 30 - 34.9\n");
    printf("Obesidade Grau II: 35 - 39.9\n");
    printf("Obesidade Grau III: 40 ou mais\n");
    
    // Classificação do IMC do paciente
    if (imc < 18.5)
        printf("Classificação: Abaixo do peso\n");
    else if (imc >= 18.5 && imc < 25)
        printf("Classificação: Peso saudável\n");
    else if (imc >= 25 && imc < 30)
        printf("Classificação: Sobrepeso\n");
    else if (imc >= 30 && imc < 35)
        printf("Classificação: Obesidade Grau I\n");
    else if (imc >= 35 && imc < 40)
        printf("Classificação: Obesidade Grau II\n");
    else
        printf("Classificação: Obesidade Grau III\n");
    
    return 0;
}

----------------------------------------

Linha 1: Inclui a biblioteca stdio.h, que fornece as funções de entrada e saída padrão.

Linha 2: Inclui a biblioteca stdlib.h, que fornece funções para manipulação de memória.

Linha 3: Inclui a biblioteca string.h, que fornece funções para manipulação de strings.

Linha 5: Declara uma variável do tipo char para armazenar o nome do paciente.

Linha 6: Declara uma variável do tipo float para armazenar o peso do paciente.

Linha 7: Declara uma variável do tipo float para armazenar a altura do paciente.

Linha 9: Imprime uma mensagem de boas-vindas.

Linha 10: Solicita ao usuário o nome do paciente.

Linha 11: Lê o nome do paciente do teclado.

Linha 12: Remove o caractere de nova linha do final da string nome.

Linha 14: Solicita ao usuário o peso do paciente.

Linha 15: Lê o peso do paciente do teclado.

Linha 16: Verifica se o peso é válido.

Linha 17: Se o peso não for válido, imprime uma mensagem de erro e sai do programa.

Linha 19: Solicita ao usuário a altura do paciente.

Linha 20: Lê a altura do paciente do teclado.

Linha 21: Verifica se a altura é válida.

Linha 22: Se a altura não for válida, imprime uma mensagem de erro e sai do programa.

Linha 24: Calcula o IMC do paciente.

Linha 26: Imprime um relatório com as informações do IMC do paciente.

Linha 28: Imprime uma tabela com a classificação do IMC.

Linha 30: Imprime a classificação do IMC do paciente.

Linha 32: Retorna 0 para indicar que o programa terminou com sucesso.

Comentários adicionais:

A função fgets() é usada para ler uma string do teclado.

A função strlen() é usada para obter o tamanho de uma string.

A função strcmp() é usada para comparar duas strings.

A função pow() é usada para calcular o valor de uma potência.

A função printf() é usada para imprimir strings e valores no console.

----------------------------------------------------------------------

O operador sizeof() em C retorna o tamanho de um objeto em bytes. Portanto, sizeof(nome) retornará o tamanho da string nome em bytes.

O tamanho de uma string em C é igual ao número de caracteres na string, mais um para o caractere nulo '\0', que marca o final da string.

Por exemplo, se a string nome for igual a "João", o valor de sizeof(nome) será 5 bytes. Isso porque a string nome contém 4 caracteres (J, o, Ã, o) e um caractere nulo '\0'.

O valor de sizeof(nome) pode ser usado para várias finalidades, como:

Para alocar memória suficiente para armazenar uma string.
Para imprimir o conteúdo de uma string sem imprimir o caractere nulo '\0'.
Para verificar se uma string cabe em um determinado espaço de memória.
Aqui está um exemplo de código que usa o operador sizeof() para verificar se uma string cabe em um determinado espaço de memória:

----------------------------------------------------------
char nome[10];

printf("Informe o nome do paciente: ");
fgets(nome, sizeof(nome), stdin);

if (strlen(nome) > sizeof(nome) - 1) {
  printf("O nome do paciente é muito longo.\n");
} else {
  printf("O nome do paciente é válido.\n");
}
Use o código com cuidado. Saiba mais
Este código irá imprimir a mensagem "O nome do paciente é muito longo." se o nome do paciente tiver mais de 9 caracteres. Isso ocorre porque o tamanho da string nome é de 10 bytes, e um byte é necessário para o caractere nulo '\0'.

----------------------------------------------------
Solicitamos o nome do paciente usando fgets para evitar problemas com espaços em branco no nome.

Solicitamos o peso e a altura do paciente, verificando se os valores inseridos são maiores que zero.

Calculamos o IMC com base nas entradas do usuário.

Exibimos os dados do paciente, incluindo o nome, peso, altura e IMC.

Apresentamos uma tabela de classificação do IMC.

Classificamos o IMC do paciente com base nas faixas de valores da tabela.


https://carlacastanho.github.io/Material-de-APC/aulas/aula9.html#ASC

Mini - Projeto 02 (Desafio)
OBS.: Entrega individual e o envio feito após a data, não computará conceito. 

