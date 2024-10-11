FROM gcc:latest

# Crear un directorio de trabajo en el contenedor
WORKDIR /opt/render/project/src

# Copiar el contenido de la subcarpeta juego al directorio de trabajo
COPY . .

# Listar el contenido del directorio para verificación
RUN ls -la

# Compilar el archivo main.cpp
RUN g++ -o juego ./juego/main.cpp -std=c++11

# Asegurarse de que el ejecutable tiene permisos de ejecución
RUN chmod +x juego

# Comando para ejecutar el programa
CMD ["./juego"]