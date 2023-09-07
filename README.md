# Map-2D
Map 2D utilisants la bibliothèque sdl2, pour afficher et se déplacer.

## Commands :
<div style="text-align:center;">
  <div style="position:relative; display:inline-block;">
    <div style="position:absolute; top:-1.5em; left:0; right:0; text-align:center;">
      ↑
    </div>
    Texte centré avec une flèche vers le haut au-dessus
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
