# Usar una imagen base de GCC para compilar el proyecto
FROM gcc:latest

# Crear un directorio de trabajo dentro del contenedor
WORKDIR /app

# Copiar los archivos de la subcarpeta 'juego' al directorio de trabajo
COPY ../juego /app

# Compilar el proyecto
RUN g++ -o juego /app/main.cpp -std=c++11 -v

# Asegurarse de que el ejecutable tiene permisos de ejecución
RUN chmod +x juego

# Comando que ejecutará la aplicación cuando se inicie el contenedor
CMD ["./juego"]
