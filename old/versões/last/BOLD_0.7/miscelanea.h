/*
    Biblioteca de funções sem uma categoria específica.
    Ex: uma função "Menu()".
*/

#ifndef MISCELANEA_H_INCLUDED
#define MISCELANEA_H_INCLUDED

void menu(void);
/*

    Função de gerenciamento do programa, recebe o usuário e encaminha para outras partes do programa;
    Não recebe parâmetros;
    Todas suas funções são procedimentos, como chamar funções de layout e cores;
    Não retorna nada;

*/

void atualizar(char *buffer, int *pos);
/*

    Função que imprimi do buffer para a tela;
    Não recebe parâmetros;
    Não retorna nada;

*/

void highlight(char *buffer, int pos);
/*

    Função que imprimi o efeito highlight na tela;
    Não recebe parâmetros;
    Não retorna nada;

*/

void salvar_arquivo(char *buffer);
/*

    Função que salva o arquivo em um diretório informado pelo usuário;
    Não recebe parâmetros;
    Não retorna nada;

*/

void abrir_arquivo(char *buffer);
/*

    Função que abri o arquivo em um diretório informado pelo usuário;
    Não recebe parâmetros;
    Não retorna nada;

*/

void limpar_vetor(char **buffer);
/*

    Função que limpa o vetor;
    Não recebe parâmetros;
    Não retorna nada;
    p.s: não me orgulho disso;

*/

#endif // MISCELANEA_H_INCLUDED
