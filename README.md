# Map-2D
Map 2D utilisants la bibliothèque sdl2, pour afficher et se déplacer.

## Commands
   <kbd>  &darr;  </kbd>
 
<kbd>&rarr;</kbd> <kbd>&larr;</kbd>

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
