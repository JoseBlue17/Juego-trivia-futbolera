FROM gcc:latest

# Crear un directorio de trabajo en el contenedor
WORKDIR /opt/render/project/src

# Copiar específicamente la carpeta 'juego' desde el host al contenedor
COPY . .

# Verificar que la carpeta 'juego' fue copiada correctamente
RUN ls -la 

# Verificar que la carpeta 'juego' fue copiada correctamente
RUN ls -la ./juego

# Compilar el archivo main.cpp
RUN g++ -o juego ./juego/main.cpp -std=c++11

# Asegurarse de que el ejecutable tiene permisos de ejecución
RUN chmod +x juego

# Comando para ejecutar el programa
CMD ["./juego"]