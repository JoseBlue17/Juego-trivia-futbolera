# Usa la imagen base de GCC
FROM gcc:latest

# Crea un directorio de trabajo en el contenedor
WORKDIR /app

# Copia los archivos de la carpeta 'juego' al directorio de trabajo
COPY ./juego /app

# Lista el contenido del directorio para confirmar que los archivos fueron copiados correctamente
RUN ls -l /app

# Compila el archivo main.cpp, creando el ejecutable 'juego'
RUN g++ -o juego /app/main.cpp -std=c++11

# Asegura que el ejecutable tiene permisos de ejecución
RUN chmod +x /app/juego

# Comando para ejecutar el programa al iniciar el contenedor
CMD ["./juego"]
