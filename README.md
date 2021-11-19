# ISO Integrity

ISO integrity es un pequeño programa dirigido a usuarios de Windows con el fin de comparar la suma de algún Hash para verificar la integridad de una imagen ISO descargada (en espacial de sistemas operativos).

Lo que hace exactamente el código es confirmar que la información dada en el primer y segundo input sea exactamente igual (No distingue entre minúsculas y mayúsculas)

![Iso integrity](https://i.imgur.com/gLBa31q.png)

## Instalación

Descarga el archivo .exe y ejecútalo. Ni más, ni menos :grin:

## ¿Por qué verificar una imagen ISO?

Los sistemas operativos suelen estar contenidos en un archivo `.iso` comúnmente de gran tamaño, esto aumenta la posibilidad de que se corrompa durante la descarga o que la imagen haya sido modificada por un tercero, por ello, los desarrolladores dejan a disposición la suma de algún Hash en particular o en ocasiones diferentes tipos de Hash con el fin de asegurar la integridad de la imagen y evitar futuros inconvenientes.

![kali](https://i.imgur.com/dogVHtt.gif)

## Utilización

Tras descargar la imagen ISO, busca la suma que provee la distribución e identifica su tipo.

![md5](https://i.imgur.com/H3b8h0n.png)

Una vez seleccionada inserta la suma en ISO Integrity y presiona enter.

![input1](https://i.imgur.com/rmsNcoM.gif)

Windows Powershell presenta de manera nativa la posibilidad de calcular las 5 funciones Hash más comunes. [Link de su Documentación](https://docs.microsoft.com/en-us/powershell/module/microsoft.powershell.utility/get-filehash?view=powershell-7.2)

Abre una terminal PowerShell y dirígete a la ubicación del ISO (o bien, copia su ruta exacta del explorador de archivos para usarla a continuación)

Utiliza el cmdlet (script de PowerShell) `Get-FileHash` seguido del nombre de la imagen ISO

![powershell1](https://i.imgur.com/sj3hjUB.png)

En caso de estar en otro directorio usaremos su ruta absoluta.

![powershell2](https://i.imgur.com/8ZOkxjp.png)

El comando por si solo calculara por defecto el SHA256, en caso que se requiera de otra funcion criptografica utilizaremos el parámetro `-algorithm` seguido del nombre del algoritmo deseado.

+ SHA1
+ SHA256
+ SHA384
+ SHA512
+ MD5

```powershell
Get-FileHash "Parrot-security-4.11.3_amd64.iso" -algorithm MD5 | Format-list
```

Es recomendable agregar el cmdlet `| Format-List` para que el output se visualice como una lista y la suma resultante tenga más espacio en la terminal.

![powershell3](https://i.imgur.com/3e19Nra.png)

Copia el resultado de la suma, pégalo en ISO integrity y presiona enter.

![input2](https://i.imgur.com/ahLPHJG.gif)

Si las 2 sumas coinciden nos avisara que la ISO es correcta. En caso contrario dirá que la ISO está corrupta.

![corrupto](https://i.imgur.com/lHicL0Q.png)

Puedes presionar cualquier tecla para entrar al menú y seleccionar alguna opción.

![menu](https://i.imgur.com/TKtm8KX.png)

`1` para verificar un nuevo Hash o `0` para salir.

## Licencia

[MIT](https://opensource.org/licenses/MIT)
