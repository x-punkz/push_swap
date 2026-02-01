# Push_swap - 42 Rio 🇧🇷

![42 Rio](https://img.shields.io/badge/42-Rio-black?style=for-the-badge&logo=42)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

## 📋 Sobre o Projeto
O objetivo do **push_swap** é ordenar um conjunto de dados em uma pilha (stack A), utilizando uma pilha auxiliar (stack B) e um conjunto limitado de instruções, visando o menor número possível de movimentos.

Este projeto foca em **complexidade algorítmica** e otimização de recursos.

## 💡 O Algoritmo: Turk Algorithm (Modified)
A implementação utiliza uma variação do **Turk Algorithm**, otimizada com uma estratégia de pré-divisão para facilitar a ordenação inicial.

### Lógica de Execução:
1.  **Chunks Iniciais:** A stack A é dividida com base na mediana.
    * Primeiro, enviamos todos os números menores que a mediana para a stack B.
    * Em seguida, o restante dos números (exceto os 3 últimos) é enviado para a stack B.
2.  **O "Caso de 3":** Ordenamos os 3 números restantes na stack A usando um algoritmo de ordenação fixa (`sort_three`).
3.  **Cálculo de Custo:** Para cada elemento na stack B, calculamos o "preço" de movê-lo para sua posição correta na stack A.
4.  **Movimentação Barata:** O elemento com o menor custo combinado (movimentos em A + movimentos em B) é movido.
5.  **Ajuste Final:** Após esvaziar a stack B, a stack A é rotacionada até que o menor número esteja no topo.

## 🛠️ Instruções Permitidas
O programa utiliza as seguintes operações:
* `sa`, `sb`, `ss`: Swap (troca os 2 primeiros elementos).
* `pa`, `pb`: Push (move do topo de uma pilha para a outra).
* `ra`, `rb`, `rr`: Rotate (o primeiro elemento vai para o fim).
* `rra`, `rrb`, `rrr`: Reverse Rotate (o último elemento vai para o topo).

## 🚀 Como Executar

### Pré-requisitos
* GCC (Compilador C)
* Make

### Compilação
No terminal, dentro da pasta do projeto, execute:
```bash
make# Push_swap - 42 Rio 🇧🇷

![42 Rio](https://img.shields.io/badge/42-Rio-black?style=for-the-badge&logo=42)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

## 📋 Sobre o Projeto
O objetivo do **push_swap** é ordenar um conjunto de dados em uma pilha (stack A), utilizando uma pilha auxiliar (stack B) e um conjunto limitado de instruções, visando o menor número possível de movimentos.

Este projeto foca em **complexidade algorítmica** e otimização de recursos.

## 💡 O Algoritmo: Turk Algorithm (Modified)
A implementação utiliza uma variação do **Turk Algorithm**, otimizada com uma estratégia de pré-divisão para facilitar a ordenação inicial.

### Lógica de Execução:
1.  **Chunks Iniciais:** A stack A é dividida com base na mediana.
    * Primeiro, enviamos todos os números menores que a mediana para a stack B.
    * Em seguida, o restante dos números (exceto os 3 últimos) é enviado para a stack B.
2.  **O "Caso de 3":** Ordenamos os 3 números restantes na stack A usando um algoritmo de ordenação fixa (`sort_three`).
3.  **Cálculo de Custo:** Para cada elemento na stack B, calculamos o "preço" de movê-lo para sua posição correta na stack A.
4.  **Movimentação Barata:** O elemento com o menor custo combinado (movimentos em A + movimentos em B) é movido.
5.  **Ajuste Final:** Após esvaziar a stack B, a stack A é rotacionada até que o menor número esteja no topo.

## 🛠️ Instruções Permitidas
O programa utiliza as seguintes operações:
* `sa`, `sb`, `ss`: Swap (troca os 2 primeiros elementos).
* `pa`, `pb`: Push (move do topo de uma pilha para a outra).
* `ra`, `rb`, `rr`: Rotate (o primeiro elemento vai para o fim).
* `rra`, `rrb`, `rrr`: Reverse Rotate (o último elemento vai para o topo).

## 🚀 Como Executar

### Pré-requisitos
* GCC (Compilador C)
* Make

### Compilação
No terminal, dentro da pasta do projeto, execute:
```bash
make
