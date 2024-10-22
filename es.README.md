
# Repositorio de 42 Piscine

Este repositorio contiene mis ejercicios y proyectos del 42 Piscine.

## Tabla de Contenidos
- [Acerca de](#acerca-de)
- [Norminette](#norminette)
- [Compilación de Archivos C](#compilación-de-archivos-c)
- [Generación de Encabezados Estándar](#generación-de-encabezados-estándar)

## Acerca de
42 Piscine es un bootcamp intensivo de un mes que cubre los fundamentos de la programación en C, scripts en shell y sistemas Unix. Ayuda a preparar a los estudiantes para el cursus completo de 42.

## Norminette
**Norminette** es la herramienta utilizada en 42 para verificar la conformidad del código con el estilo de codificación 42. Tu código debe pasar la Norminette sin errores antes de ser enviado.

### Uso
Ejecuta Norminette en un archivo o en un directorio completo:

```bash
norminette <file.c>
norminette <directory>
```

## Compilación de Archivos C
En 42 Piscine, todos los archivos C deben ser compilados con ciertas banderas:

```bash
cc -Wall -Wextra -Werror <file.c> -o <output>
```

## Generación de Encabezados Estándar
Para generar el encabezado estándar en **vim**, utiliza el comando `Stdheader`.

### Pasos para Generar el Encabezado:
1. Abre el archivo en `vim`.
2. Presiona `Esc` para entrar en modo de comandos.
3. Escribe `:Stdheader` y presiona Enter.
