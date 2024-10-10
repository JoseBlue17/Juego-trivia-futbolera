# Usar una imagen base de GCC para compilar el proyecto
FROM gcc:latest

# Crear un directorio de trabajo dentro del contenedor
WORKDIR /app

# Copiar todos los archivos del proyecto al directorio de trabajo
COPY ./juego /app

# Compilar el proyecto
RUN g++ -o myapp main.cpp

# Comando que ejecutará la aplicación cuando se inicie el contenedor
CMD ["./myapp"]
