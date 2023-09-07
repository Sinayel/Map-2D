# Map-2D
Ce projet en C utilise la bibliothèque SDL pour créer un jeu de déplacement où un joueur (carré vert) peut parcourir la map sans toucher les murs (carrés violets) en utilisant les flèches directionnelles du clavier.
*(Vous aurez probablement besoin de la bibliothèque SDL d'installer sur votre OS)*

<img src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExMTdtZHJ1a3BtNWtkejRlODVyN3oya3AwaDNud3ZjanRtcjE3cTZzMCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/cSYlL2WhkgJjZvL6Qt/giphy.gif" alt="Map 2D">

## Déplacement :
<div style="text-align:center;">
  <table>
    <tr>
      <td></td>
      <td><kbd>&#8593;</kbd></td>
      <td></td>
    </tr>
    <tr>
      <td><kbd>&#8592;</kbd></td>
      <td><kbd>&#8595;</kbd></td>
      <td><kbd>&#8594;</kbd></td>
    </tr>
  </table>
</div>

### Compiler :
```
gcc -o map main.c $(sdl2-config --cflags --libs)
```
*j'ai tout codé sur MacOS, donc si vous êtes sur Windows/Linux essayez cette méthode :*
```
gcc -o mon_programme main.c -lSDL2
```
### Start :
```
./map
```

## Liens utile :

[**Comprendre La Bibliothèque SDL**](https://zestedesavoir.com/tutoriels/1014/utiliser-la-sdl-en-langage-c/) | [**Wiki de la SDL**](https://wiki.libsdl.org/SDL2/Tutorials)

*C'est plus pour faire de la 3D que de la 2D mais c'est super intéressant :*  
[**Comprendre le raycasting et le fonctionnement d'une map**](https://lodev.org/cgtutor/raycasting.html)

**(Si vous voulez modifier le code tout ce trouve dans le fichier [main.c](/Map%202D/main.c))**

## Installer SDL :
### Pour Linux
```
sudo apt install libsdl2-2.0-0 libsdl2-gfx-1.0-0 libsdl2-image-2.0-0 libsdl2-mixer-2.0-0 libsdl2-net-2.0-0 libsdl2-ttf-2.0-0
```
### Pour MacOS :
```
brew install sdl2
```
### Pour Windows :
[**Tuto pour installer SDL sur windows**](https://www.matsson.com/prog/sdl2-mingw-w64-tutorial.php)

### Mon GitHub :
[**GitHub**](https://github.com/Sinayel)
