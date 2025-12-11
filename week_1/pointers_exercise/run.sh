#!/bin/bash

# Nome do arquivo fonte (sem extensão)
FILE="dinamic_arry"

# Compila
g++ -std=c++17 -Wall -g "$FILE.cpp" -o "$FILE"

# Se a compilação tiver sucesso, executa
if [ $? -eq 0 ]; then
    echo "Compilação bem-sucedida. Executando..."
    echo ""
    ./"$FILE"
else
    echo "Erro na compilação."
fi
