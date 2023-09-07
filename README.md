<div style="width:100%;height:0;padding-bottom:100%;position:relative;"><iframe src="https://giphy.com/embed/mCnNJF00DZbXlEy1TH" width="100%" height="100%" style="position:absolute" frameBorder="0" class="giphy-embed" allowFullScreen></iframe></div><p><a href="https://giphy.com/gifs/icecube-cubemelt-cubemeltgif-mCnNJF00DZbXlEy1TH">via GIPHY</a></p>

# Map-2D
Ce projet en C utilise la bibliothèque SDL pour créer un jeu de déplacement où un joueur (carré vert) peut parcourir la map sans toucher les murs (carrés violets) en utilisant les flèches directionnelles du clavier.

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

### Compile :
```
gcc -o map main.c $(sdl2-config --cflags --libs)
```
### Start :
```
./map
```

## Liens utile :

[**Comprendre La Bibliothèque SDL**](https://zestedesavoir.com/tutoriels/1014/utiliser-la-sdl-en-langage-c/) | [**Wiki de la SDL**](https://wiki.libsdl.org/SDL2/Tutorials)

C'est plus pour faire de la 3D que de la 2D mais c'est super intéressant :
[**Comprendre le raycasting et le fonctionnement d'une map**](https://lodev.org/cgtutor/raycasting.html)

### Mon GitHub :
[**GitHub**](https://github.com/Sinayel)
