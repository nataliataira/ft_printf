# ft_printf

Este projeto é uma reimplementação da função `printf` da biblioteca padrão do C. Ele faz parte do currículo da 42 School e tem como objetivo aprofundar o entendimento de formatação de strings, gerenciamento de argumentos variádicos e manipulação de tipos.

## 📚 Objetivo

Criar uma função `ft_printf` que reproduz o comportamento do `printf`, suportando os principais especificadores de formato e lidando com os argumentos de forma genérica.

## ✅ Especificações implementadas

A função suporta os seguintes conversores:

- `%c` → caractere
- `%s` → string
- `%p` → ponteiro
- `%d` ou `%i` → inteiros com sinal
- `%u` → inteiros sem sinal
- `%x` → hexadecimal minúsculo
- `%X` → hexadecimal maiúsculo
- `%%` → símbolo de porcentagem literal

## 🧩 Arquivos

| Arquivo            | Descrição                                     |
|-------------------|-----------------------------------------------|
| `ft_printf.c`      | Função principal que processa o texto formatado. |
| `ft_flags.c`       | Encaminha os especificadores para os handlers.  |
| `ft_format_*.c`    | Handlers para cada tipo de formatação (`c`, `s`, `id`, `p`, `x`, `u`, `X`). |
| `ft_printf_utils.c`| Funções auxiliares (ex: `putchar`, `putnum`). |
| `ft_printf.h`      | Cabeçalho com definições e protótipos.        |
| `Makefile`         | Arquivo de automação da build.                |

## ⚙️ Como compilar

Execute:

```bash
make
```

Ou para recompilar:

```bash
make re
```

E para limpar arquivos objeto:

```bash
make clean
```

## 🔎 Exemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Valor: %d, Hex: %x\n", "mundo", 42, 42);
    return (0);
}
```

## 🧪 Testes

Você pode comparar com o `printf` padrão usando:

```c
printf("Valor real: %d\n", 42);
ft_printf("Valor custom: %d\n", 42);
```

## 📜 Licença

Este projeto está licenciado sob os termos do arquivo `LICENSE`.

---

> Projeto desenvolvido por [ngomes-t@student.42sp.org.br].
