# Map-2D
Map 2D utilisants la bibliothèque sdl2, pour afficher et se déplacer.

## Commands :
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

### Actions des touches

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
