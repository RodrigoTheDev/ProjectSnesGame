# Como Compilar e executar o código para pvsneslib

## Requistos
- pvsneslib: https://github.com/alekmaul/pvsneslib
- msys2: https://www.msys2.org/
- qualquer emulador de snes que seja capaz de rodar o arquivo .sfc


**IMPORTANTE**: Os comandos serão executados pelo terminal do MSYS2, o terminal em questão já está configurado na pasta .vscode

## Instalando o MSYS2 e pvsneslib

1. Instale o MSYS2 na raíz do disco C (C:/)
2. Crie uma pasta chamada "snesdev" também na raíz do disco C, e extraia as pastas do pvsneslib dentro dela.

## Comandos no terminal

1. No terminal do **MYSYS2 UCRT64**, execute:
`pacman -Syu`
`pacman -S --needed make git python3`

2. Definindo variável de ambiente para a biblioteca pvsneslib:
`setx PVSNESLIB_HOME /c/snesdev`

## Compilando arquivo .sfc

Para compilar um arquivo .sfc apenas rode `make`, o arquivo .sfc será compilado pelo makefile. Lembrando que o nome do arquivo pode ser alterado mudando a variável `ROMNAME` dentro do Makefile.

Para limpar os arquivos compilados, execute `make clean`