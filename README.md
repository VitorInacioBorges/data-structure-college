# Data_Structure_College (PORTUGUESE) 🇧🇷

Repositório de estudos e exercícios em **C++**, focado no aprendizado de **Estruturas de Dados**, desenvolvido durante a graduação em **Engenharia de Software**.

Este projeto tem caráter **educacional**, com implementações feitas **do zero**, priorizando _clareza_, _entendimento conceitual_ e _prática acadêmica_, evitando o uso da **STL** sempre que possível.

## 📚 Conteúdos abordados

O repositório está organizado por pastas, cada uma representando uma **estrutura de dados ou conceito relacionado**:

- **Vectors**
  - Implementação manual de vetores
  - Operações básicas
  - Manipulação de índices e memória

- **Stacks (Pilha)**
  - Implementação de pilha usando vetor
  - Operações:
    - **push()**
    - **pop()**
    - **top()**
    - verificação de pilha vazia
    - impressão do conteúdo da pilha

- **Searching Algorithms**
  - Algoritmos de busca
  - Comparação conceitual de abordagens
  - Análise teórica de eficiência

- **Ordering / Sorting**
  - Algoritmos de ordenação
  - Implementações manuais com foco _didático_

> _Observação:_ o foco está no aprendizado, **não** em otimização extrema ou uso de bibliotecas prontas.

## 🗂️ Estrutura do repositório

```bash
data-structure-college/
├── build/                     # Arquivos de build (quando aplicável)
├── classes/                   # Conteúdo teórico e anotações
│   ├── vectors.md
│   └── piles.md
├── src/                       # Código-fonte
│   ├── ordering/
│   │   ├── vectors.cpp
│   │   └── piles.cpp
│   └── searching-algorithms/
├── README.md
└── .gitignore
```

## 📁 Observações sobre os arquivos

- Arquivos **.cpp** → código-fonte principal
- Arquivos **.md** → material teórico e explicações
- Arquivos na pasta **build/** → resultados de compilação (quando existirem)
- A estrutura do repositório reflete a **progressão do aprendizado ao longo do curso**

## 🧩 Dependências do Projeto

### 🔹 Dependências obrigatórias:

- **Compilador C++**
  - _GCC / g++_
- **Biblioteca padrão do C++**

### 🔹 Ambiente e instalacoes recomendadas:

- Sistema Operacional: **Linux (Ubuntu)**
- Editor / IDE: **Visual Studio Code**
- Extensões recomendadas:
  - **C/C++ (Microsoft)**
  - _CMake Tools_ (opcional)
  - _Code Runner_ (opcional)

## ▶️ Como compilar e executar

Os arquivos podem ser compilados manualmente utilizando o **G++** via terminal.

### 🔹 Instalacao de Dependências (Ubuntu):

```bash
sudo apt update
sudo apt install build-essential
```

### 🔹 Compilacao Genérica:

```bash
g++ arquivo.cpp -o programa
./programa
```

### 🔹 Exemplo de Compilacao:

```bash
g++ piles.cpp -o piles
./piles
```

## 🎯 Objetivo do repositório

- Aprender Estruturas de Dados na prática
- Fixar conceitos fundamentais de **C++**
- Criar uma base sólida para disciplinas futuras
- Servir como material de estudo e revisão
- Preparar para algoritmos mais avançados

## 🛠️ Tecnologias

- Linguagem: **C++**
- Compilador: **G++**
- Ambiente de desenvolvimento:
  - **Linux (Ubuntu)**
  - **Visual Studio Code**

## 📌 Observações finais

- Projeto com finalidade **educacional**
- Código escrito com foco em _clareza_ e _didática_
- Algumas implementações evitam a **STL** propositalmente
- **Não recomendado para uso em produção**

## 📄 Licença

Este projeto é de uso livre para fins de **estudo e aprendizado**.

# Data_Structure_College (ENGLISH) 🇺🇸

Repository containing **studies and exercises in C++**, focused on learning **Data Structures**, developed during a **Software Engineering undergraduate program**.

This project has an **educational** purpose, with implementations built **from scratch**, prioritizing _clarity_, _conceptual understanding_, and _academic practice_, avoiding the use of the **STL** whenever possible.

## 📚 Covered Topics

The repository is organized into folders, each one representing a **data structure or related concept**:

- **Vectors**
  - Manual vector implementation
  - Basic operations
  - Index and memory manipulation

- **Stacks**
  - Stack implementation using arrays
  - Operations:
    - **push()**
    - **pop()**
    - **top()**
    - empty stack verification
    - stack content printing

- **Searching Algorithms**
  - Search algorithms
  - Conceptual comparison of approaches
  - Theoretical efficiency analysis

- **Ordering / Sorting**
  - Sorting algorithms
  - Manual implementations with a _didactic_ focus

> _Note:_ the focus is on learning, **not** on extreme optimization or the use of ready-made libraries.

## 🗂️ Repository Structure

```bash
data-structure-college/
├── build/                     # Build files (when applicable)
├── classes/                   # Theoretical content and notes
│   ├── vectors.md
│   └── piles.md
├── src/                       # Source code
│   ├── ordering/
│   │   ├── vectors.cpp
│   │   └── piles.cpp
│   └── searching-algorithms/
├── README.md
└── .gitignore
```

## 📁 File Notes

- **.cpp** files → main source code
- **.md** files → theoretical material and explanations
- Files inside the **build/** folder → compilation outputs (when applicable)
- The repository structure reflects the **learning progression throughout the course**

## 🧩 Project Dependencies

### 🔹 Required Dependencies:

- **C++ Compiler**
  - _GCC / g++_
- **C++ Standard Library**

### 🔹 Recommended Environment and Installations:

- Operating System: **Linux (Ubuntu)**
- Editor / IDE: **Visual Studio Code**
- Recommended extensions:
  - **C/C++ (Microsoft)**
  - _CMake Tools_ (optional)
  - _Code Runner_ (optional)

## ▶️ How to Compile and Run

Source files can be compiled manually using **G++** via the terminal.

### 🔹 Dependency Installation (Ubuntu):

```bash
sudo apt update
sudo apt install build-essential
```

### 🔹 Generic Compilation:

```bash
g++ file.cpp -o program
./program
```

### 🔹 Compilation Example:

```bash
g++ piles.cpp -o piles
./piles
```

## 🎯 Repository Purpose

- Learn Data Structures in practice
- Reinforce fundamental **C++** concepts
- Build a solid foundation for future courses
- Serve as study and review material
- Prepare for more advanced algorithms

## 🛠️ Technologies

- Language: **C++**
- Compiler: **G++**
- Development Environment:
  - **Linux (Ubuntu)**
  - **Visual Studio Code**

## 📌 Final Notes

- Project intended for **educational** purposes
- Code written with a focus on _clarity_ and _didactics_
- Some implementations intentionally avoid using the **STL**
- **Not recommended for production use**

## 📄 License

This project is free to use for **learning and educational purposes**.
