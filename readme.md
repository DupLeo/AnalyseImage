# 🖼️ AnalyseImage

Projet C++ utilisant **OpenCV** pour lire et afficher une image.  
Ce projet est conçu pour fonctionner sous **WSL (Ubuntu)** avec **CMake** et **g++**.

---

## 🚀 1. Installation du projet

Clone le dépôt GitHub :

```bash
git clone https://github.com/DupLeo/AnalyseImage.git
cd AnalyseImage
```

## ⚙️ 2. Prérequis

Avant tout, assure-toi d’avoir installé les outils suivants dans WSL :

```bash
sudo apt update
sudo apt install -y build-essential cmake pkg-config libopencv-dev
```

Cela installe :
- g++ : le compilateur C++
- CMake : outil de génération de projets
- OpenCV : bibliothèque de traitement d’images


## 📂 3. Structure du projet

```bash
AnalyseImage/
 ├─ CMakeLists.txt
 ├─ src/
 │   └─ main.cpp
 └─ data/
     └─ image.jpg
```

- src/main.cpp → code source principal
- data/image.jpg → image d’entrée à afficher
- CMakeLists.txt → configuration de compilation du projet

## 🧱 4. Première compilation

Depuis le dossier du projet :

```bash
mkdir -p build
cd build
cmake ..
make
```

Une fois la compilation terminée, un exécutable nommé AnalyseImage sera généré dans le dossier build/.

## ▶️ 5. Exécution

Toujours depuis le dossier build :

```bash
./AnalyseImage
```

Le programme :
- charge l’image ../data/image.jpg
- l’affiche dans une fenêtre via OpenCV

## ✅ Recompiler après une modif

Pas besoin de tout supprimer :

```bash
cd build
cmake .. // Uniquement si tu modifies le fichier CMakeLists.txt
make
./AnalyseImage
```

Si tout bugue vraiment... :

```bash
rm -rf build
mkdir build && cd build
cmake ..
make
./AnalyseImage
```

## 👤 11. Auteur

Léo
Étudiant en M2 informatique