# Map-2D
Ce projet en C utilise la bibliothèque SDL pour créer un jeu de déplacement où un joueur (carré vert) peut parcourir la map sans toucher les murs (carrés violets) en utilisant les flèches directionnelles du clavier.

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
*j'ai tout coder sur macos donc si vous avez êtes sur Windows/Linux essayer peut être cette méthode :*
```
gcc -o mon_programme main.c -lSDL2 -lSDL2_ttf -lSDL2_image -lSDL2_mixer
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

### Mon GitHub :
[**GitHub**](https://github.com/Sinayel)
