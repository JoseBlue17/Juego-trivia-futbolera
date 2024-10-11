# Usa la imagen base de GCC
FROM gcc:latest

# Crea un directorio de trabajo en el contenedor
WORKDIR /app

# Copia todo el contenido del directorio actual (incluyendo main.cpp) al directorio de trabajo en el contenedor
COPY . /app

# Lista el contenido del directorio para verificar que los archivos se copian correctamente
RUN ls -l /app

# Compila el archivo main.cpp (si se encuentra en /app)
RUN g++ -o juego /app/main.cpp -std=c++11

# Asegúrate de que el ejecutable tiene permisos de ejecución
RUN chmod +x /app/juego

# Comando para ejecutar el programa al iniciar el contenedor
CMD ["./juego"]
