# Usar una imagen base de GCC para compilar el proyecto
FROM gcc:latest

# Crear un directorio de trabajo dentro del contenedor
WORKDIR  /opt/render/project/src

# Copiar todos los archivos del proyecto al directorio de trabajo
COPY . .

# Compilar el proyecto
RUN g++ -o myapp main.cpp

# Asegurarse de que el ejecutable tiene permisos de ejecución
RUN chmod +x juego

# Comando que ejecutará la aplicación cuando se inicie el contenedor
CMD ["./juego"]
