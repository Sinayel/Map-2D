# Map-2D
Map 2D utilisants la bibliothèque sdl2, pour afficher et se déplacer.

## Commands :
<div style="text-align:center;">
  <div style="display:inline-block; border:1px solid #ccc; padding:10px;">
    <kbd style="background-color:#f0f0f0;">&#8593;</kbd>
  </div>
</div>


| Touche        | Action        |
| ------------- |:-------------:|
| `←`           | deplacement gauche |
| `→`           | deplacement droite |
| `↑`            | deplacement haut   |
| `↓`            | deplacement bas    |
### Compile :
```
gcc -o map main.c $(sdl2-config --cflags --libs)
```
### Start :
```
./map
```

## Liens utile
tuto pour comprendre la bibliothèque sdl :

https://zestedesavoir.com/tutoriels/1014/utiliser-la-sdl-en-langage-c/

Wiki de sdl :

https://wiki.libsdl.org/SDL2/Tutorials
