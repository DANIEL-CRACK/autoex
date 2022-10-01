Autoex
------

<label>
Este programa sirve para ejecutar uno o varios comandos al realizarse cambios en un archivo especifico.

Creado por **Daniel Andino Camacho** 
hellotecnologic@gmail.com
</label>

> Version: **1.0**

### Compilar codigo fuente

```zsh
gcc main.c -o autoex #Para linux
gcc main.c -o autoex.exe #Para windows
```
### Instalar globalmente en el sistema

```zsh
sudo cp autoex /bin #Para linux
setx path "%path%;Aqui ubicacion del programa" #Para windows
```
### Ejecutar programa 

```zsh
autoex file 'comandos' #file es el archivo a monitoriar y 'comandos' son los comandos a ejecutar.
Ejemplo -> autoex file.txt 'date' #Muestra la hora en linux cuando se realizen cambios en el archivo.
```
