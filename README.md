# 🎲 Rolagem de Dados RPG em C

Este projeto é um programa simples em **C** que simula rolagens de dados para jogos de RPG.  
Você pode rolar até **4 tipos diferentes de dados** (ex.: `2d6 + 1d8`) e obter os resultados individuais, subtotais e o total final.

---

## 📌 Funcionalidades
- Escolha **quantos tipos de dados diferentes** rolar (1 a 4).
- Para cada tipo, defina:
  - Quantos dados serão rolados.
  - O tipo do dado (`d4`, `d6`, `d8`, `d10`, `d12`, `d20`).
- Exibe:
  - O resultado de cada dado.
  - O subtotal por tipo de dado.
  - O total acumulado de todas as rolagens.

---

## ⚙️ Compilação e Execução

No terminal (Linux/Mac/WSL):
```bash
gcc dados.c -o dados
./dados
