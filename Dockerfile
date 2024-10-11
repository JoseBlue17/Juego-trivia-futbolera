# Usa la imagen base de GCC
FROM gcc:latest

# Crea un directorio de trabajo en el contenedor
WORKDIR /app

# Copia todos los archivos desde el directorio actual (juego) al directorio de trabajo
COPY . /app

# Lista el contenido del directorio para verificar que los archivos fueron copiados
RUN ls -l /app

# Compila el archivo main.cpp usando la ruta correcta
RUN g++ -o juego /app/main.cpp -std=c++11

# Asegúrate de que el ejecutable tiene permisos de ejecución
RUN chmod +x /app/juego

# Comando para ejecutar el programa al iniciar el contenedor
CMD ["./juego"]
