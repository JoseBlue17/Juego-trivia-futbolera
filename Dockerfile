FROM gcc:latest

# Crear un directorio de trabajo en el contenedor
WORKDIR /opt/render/project/src

# Copiar el contenido de la carpeta de trabajo
COPY . .

# Listar el contenido del directorio de trabajo
RUN ls -la

# Listar el contenido de la carpeta juego para verificar que main.cpp existe
RUN ls -la ./juego

# Compilar el archivo main.cpp
RUN g++ -o juego ./juego/main.cpp -std=c++11

# Asegurarse de que el ejecutable tiene permisos de ejecución
RUN chmod +x juego

# Comando para ejecutar el programa
CMD ["./juego"]
