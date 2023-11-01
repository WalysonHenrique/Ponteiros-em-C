#include <stdio.h>
#include <windows.h>

int resultado_adicao, resultado_subtracao;
int num1 = 10, num2 = 5;

DWORD WINAPI funcao_adicao(LPVOID lpParam) {
    resultado_adicao = num1 + num2;
    return 0;
}

DWORD WINAPI funcao_subtracao(LPVOID lpParam) {
    resultado_subtracao = num1 - num2;
    return 0;
}

int main() {
    HANDLE thread_adicao, thread_subtracao;

    thread_adicao = CreateThread(NULL, 0, funcao_adicao, NULL, 0, NULL);
    thread_subtracao = CreateThread(NULL, 0, funcao_subtracao, NULL, 0, NULL);

    WaitForSingleObject(thread_adicao, INFINITE);
    WaitForSingleObject(thread_subtracao, INFINITE);

    CloseHandle(thread_adicao);
    CloseHandle(thread_subtracao);

    printf("A soma é: %d\n", resultado_adicao);
    printf("A subtração é: %d\n", resultado_subtracao);

    return 0;
}
