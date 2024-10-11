/**
·*·@file·Borrador_juego·cpp
·*·@author·Jose·Miguel·Ramirez·
·*·@brief·Trivia_Futbolera·
·*·@version·1.0·
·*·@date·2023-12-13·
**
**
*/


#include<iostream>
#include <string>
#include <thread> // Incluir la biblioteca para dormir
#include <cstdlib>
//#include<conio.h>
/**
·*·@brief· Punto·de·inicio·del·programa.
·*·
·*· Se·crean·instancias·de·las·clases·Usuario·y·Juego,·
·*·y·se·inicializa·el·juego·con·su·interfaz·interactiva·
·*·
·*·@return·0·finaliza·programa·
*/


using namespace std;

void dinamica();
void final();


class Usuario{
	private://Atributos
		string nombre;
		int puntaje;
	
	public://Metodos
		Usuario(string,int);//Constructor
		Usuario(int,int);
		void nombre_usuario();
		void puntajes(int);
		int getPuntaje() const;
};

Usuario::Usuario(string elNombre,int elPuntaje){
	nombre=elNombre;
	
	puntaje=elPuntaje;
	
}
Usuario::Usuario(int id, int elPuntaje) {
    nombre = "Jugador" + to_string(id);
    puntaje = elPuntaje;
}
//Se·inicializa·el·constructor·para·el·nombre·del·usuario·
void Usuario::nombre_usuario(){
	//	system("cls");
	cout<<"Soy: "<<nombre<<endl;

}
//Se·inicializa·el·constructor·para·el·puntaje·
void Usuario::puntajes(int puntos){//Puntaje
	
		puntaje+=puntos;
	
}
int Usuario::getPuntaje() const {
    return puntaje;
}

class Juego{
	
	private://Atributos
	string preguntas;

	
	public://metodos
	Juego(string);//constructor
	void preguntas_responder(Usuario&);
	void historia(); 
	string anecdotas[10];
	
};
//Se·inicializa·el·costructor·
Juego::Juego(string _preguntas){
	
	preguntas=_preguntas;
	
	
}
/**
·*·@brief Se·inicializa·el·metodo·preguntas_responder·para·ingresar·las·preguntas·y·respuestas·
·*·@param &jugador· Nombre·del·usuario·
*/

void Juego::preguntas_responder(Usuario &jugador){
	
	int posicion=1;
	
	

	
	cout<<"Pregunta #"<<posicion<<endl<<endl;//pregunta#1
	cout<<"1.Quien gano la copa libertadores del 2001?"<<endl;
	cout<<"A.Boca Juniors"<<endl<<"B.Cruz Azul"<<endl<<"C.River"<<endl<<"D.Palmeiras"<<endl<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta1;
	cin>>Respuesta1;
	
	if(Respuesta1=='a'||Respuesta1=='A'){
		cout<<"Respuesta Correcta =D "<<endl;

	
        
       historia(); // Muestra·las·anecdotas·despues·de·la·respuesta·correcta·
        cout << "\n";
        jugador.puntajes(100); // Incrementa·el·puntaje·si·es·correcta·
    	 cout << "Puntaje actual: " << jugador.getPuntaje() << endl<< "\n";;//Muestra·el·puntaje·actual·del·jugador·
		cout << "#----Anecdota relacionada----#" <<endl<<endl;
		cout<<anecdotas[0]<<endl;//Se·llama·el·arreglo·de·anecdotas·para·que·muestre·la·anecdota·correspondiente·
		cout << "\n"; 
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;) .Es la opcion A"<<endl;
		cout<<"\n";
		cout<<anecdotas[0]<<endl;
		cout<<"\n";
		
		
	}
	cin.get();
	//system("pause");
	//system("cls");//Limpiando la consola

//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*	
	posicion++;//Pregunta#2
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Donde se jugo la final de champions del 2005?"<<endl;
	cout<<"A.Lisboa"<<endl<<"B.Madrid"<<endl<<"C.Estambul"<<endl<<"D.Londres"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta2;
	cin>>Respuesta2;
	
		
	if(Respuesta2=='c'||Respuesta2=='C'){
		cout<<"Respuesta Correcta =D "<<endl;
		
		cout<<"\n";
		 jugador.puntajes(100);// Incrementa·el·puntaje·si·es·correcta·
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl<<"\n";;
		 
		historia();// Muestra·la·anecdota·correspondiente·
		 cout << "#----Anecdota relacionada----#" << endl<<endl;
		 cout<<anecdotas[1]<<endl<< "\n";;//Se·llama·el·arreglo·de·anecdotas·para·que·muestre·la·anecdota·correspondiente·
	}
	
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;). Es la opcion C"<<endl<<"\n";;
		cout<<anecdotas[1]<<endl<<"\n";;
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#3
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien fue el MVP del mundial 2006"<<endl;
	cout<<"A.Del Piero"<<endl<<"B.Buffon"<<endl<<"C.Zinedine Zidane"<<endl<<"D.Michael Ballack"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta3;
	cin>>Respuesta3;
	
	if(Respuesta3=='c'||Respuesta3=='C'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";;
		historia();
		 jugador.puntajes(100);
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl<<"\n";;
		 cout <<"#----Anecdota relacionada----#"<< endl;
		 cout<<anecdotas[2]<<endl<<"\n";
			
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;).Es la opcion C"<<endl<<"\n";;
		cout<<anecdotas[2]<<endl<<"\n";;
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#4
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien gano la premier de la temporada 2010-2011"<<endl;
	cout<<"A.Liverpool"<<endl<<"B.Chelsea"<<endl<<"C.Arsenal"<<endl<<"D.Manchester United"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta4;
	cin>>Respuesta4;
	
		if(Respuesta4=='d'||Respuesta4=='D'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";
		historia();
		
		jugador.puntajes(100);
		cout << "Puntaje actual: " << jugador.getPuntaje() <<endl<<"\n";
		cout << "#----Anecdota relacionada----# "<< endl;
		cout<<anecdotas[3]<<endl<<"\n";
		  
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;).Es la opcion D"<<endl<<"\n";
		cout<<anecdotas[3]<<endl<<"\n";
		
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#5
	cout<<"Pregunta#"<<posicion<<"---DIFICIL---"<<"Vale X2"<<endl;
	cout<<"Quien fue el subcampeon de la UEFA Europa League del 2013"<<endl;
	cout<<"A.Sevilla"<<endl<<"B.Juventus"<<endl<<"C.Benfica"<<endl<<"D.Valenica"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta5;
	cin>>Respuesta5;
	
		if(Respuesta5=='c'||Respuesta5=='C'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";
		 
		historia();
		 jugador.puntajes(200);
		 cout << "#----Anecdota relacionada----# " <<endl<<"\n";
		 cout<<anecdotas[4]<<endl<<"\n";
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl<<"\n";
		 
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;). Es la opcion C"<<endl<<"\n";
		cout<<anecdotas[4]<<endl<<"\n";
				
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#6
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien es el maximo goleador de las eliminatorias sudamericanas"<<endl;
	cout<<"A.Luis Suarez"<<endl<<"B.Lionel Messi"<<endl<<"C.Ronaldo Nazario"<<endl<<"D.Marcelo Moreno"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta6;
	cin>>Respuesta6;
	
	if(Respuesta6=='b'||Respuesta6=='B'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";
		 
		historia();
		 jugador.puntajes(100);
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl<<"\n";
		 cout << "#----Anecdota relacionada----# " << endl;
		 cout<<anecdotas[5]<<endl<<"\n";
		  
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;). Es la opcion B"<<endl<<"\n";
		cout<<anecdotas[5]<<endl<<"\n";
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#7
	cout<<"Pregunta#"<<posicion<<"---DIFICIL---"<<"Vale X2"<<endl;
	cout<<"Quien fue el maximo goleador de la Eurocopa del 2012"<<endl;
	cout<<"A.Mario Balotelli"<<endl<<"B.Cristiano Ronaldo"<<endl<<"C.Dinatale"<<endl<<"D.Fernando Torres"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta7;
	cin>>Respuesta7;
	
	if(Respuesta7=='d'||Respuesta7=='D'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";
		historia();
		 jugador.puntajes(100);
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl<<"\n";
		 cout << "#----Anecdota relacionada----# " << endl;
		 cout<<anecdotas[6]<<endl<<"\n";
		  
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;). Es la opcion D"<<endl<<"\n";
		cout<<anecdotas[6]<<endl<<"\n";
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#8
	cout<<"Pregunta#"<<posicion<<"---DIFICIL---"<<"Vale X2"<<endl;
	cout<<"Cual fue el arbitro que repartio justicia en la final del mundial 2014"<<endl;
	cout<<"A.Wilmar Roldan"<<endl<<"B.Nicola Rizzoli"<<endl<<"C.Felix Brych"<<endl<<"D.Nestor Pitana"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta8;
	cin>>Respuesta8;
	
	if(Respuesta8=='b'||Respuesta8=='B'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";
		historia();
		 jugador.puntajes(200);
		cout << "Puntaje actual: " << jugador.getPuntaje() << endl<<"\n";
		 cout << "#----Anecdota relacionada----# " << endl;
		 cout<<anecdotas[7]<<endl<<"\n";
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;).Es la opcion B"<<endl<<"\n";
		cout<<anecdotas[7]<<endl<<"\n";
		
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#9
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien gano el balon de oro del 2018"<<endl;
	cout<<"A.Cristiano Ronaldo"<<endl<<"B.Lionel Messi"<<endl<<"C.Luka Modric"<<endl<<"D. Antoine Griezmann"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta9;
	cin>>Respuesta9;
	
		if(Respuesta9=='c'||Respuesta9=='C'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";
		historia();
		 jugador.puntajes(100);
		cout << "Puntaje actual: " << jugador.getPuntaje() << endl<<"\n";
		cout << "#----Anecdota relacionada----# " << endl;
		cout<<anecdotas[8]<<endl<<"\n";
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;).Es la opcion C"<<endl<<"\n";
		cout<<anecdotas[8]<<endl<<"\n";
		
	}
	cin.get();
	//system("pause");
	//system("cls");
	
	//-----------------*---------------------*------------------------*--------------------------*-------------------------*---------------------------*
	
	posicion++;//Pregunta#9
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien fue el MVP de la copa libertadores 2007"<<endl;
	cout<<"A.Blas Perez"<<endl<<"B.Juan Roman Riquelme"<<endl<<"C.Salvador Cabanas"<<endl<<"D.Ze Roberto"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta10;
	cin>>Respuesta10;
	
		if(Respuesta10=='b'||Respuesta10=='B'){
		cout<<"Respuesta Correcta =D"<<endl<<"\n";
		historia();
		jugador.puntajes(100);
		cout << "Puntaje actual: " << jugador.getPuntaje() <<endl<<"\n";
		cout << "#----Anecdota relacionada----# " << endl;
		cout<<anecdotas[9]<<endl<<"\n";
	}
	else{
		historia();
		cout<<"Respuesta incorrecta (;_;).Es la opcion B"<<endl;
		cout<<anecdotas[9]<<endl<<"\n";
	}
	cin.get();
	//system("pause");
}

/*
·*·@brief Se·hacen·arrays·para·que·cada·anecdota·quede·guardada·en·diferentes·posiciones·y·estas·se·han·llamadas·en·el·void·de·preguntas_responder· 

*/
void Juego::historia(){//HISTORIA O ANECDOTAS
	

	
	
	anecdotas[0]=">> MR soceer:El Boca Junior fue el campeon de aquella edicion de la libertadores contra cruz azul que llego sorprendiendo al mundo entero tras derrotar a River y Rosario central. \nEl partido de ida se jugo en Mexico quedando el marcador 1 a 0 a favor de boca juniors.El cuadro mexicano se jugaba la vida en el partido de vuelta en un estadio muy dificil como la Bombonera, el resultado quedo igualado 1 a 1 y el partido se resolvio en penales, boca acerto 3 y 1 cruz azul dando como consecuencia la consagracion del cuadro xeneize.";

	anecdotas[1]=">> MR soceer: La final de la champions del 2005 se jugo en Estambul donde saldria campeon el Liverpool con un marcador de 3-2 frente al Milan en una final apasionante que muchos no olvidan.";
	
	anecdotas[2]=">> MR soceer: El premio se lo llevo Zinedine Zidane con una gran actuacion en el mundial 2006 a pesar de perder aquella final contra Italia y protagonizar un hecho de violencia a su rival Materazzi que esto lo llevo a la expulsion.\nA pesar de esto se pudo llevar el premio al mejor jugador del mundial.";
	
	anecdotas[3]=">> MR soceer: Fue el Manchester United quien consiguio su 19 Premier League con un total de 80 puntos y con una ventaja de 9 puntos sobre el segundo puesto que era el Chelsea.";
	
	anecdotas[4]=">> MR soceer: El Benfica fue el subcampeon de aquella edicion de la Uefa Europa league tras empatar 0-0 la final se resolvio en penales como resultado 4-2 dando como consecuencia el triunfo del cuadro sevillista";
	
	anecdotas[5]=">> MR soceer: Es Lionel Andres Messi el astro argentino lleva 31 goles, 3 goles por encima de Luis Suarez.";
	
	anecdotas[6]=">> MR soceer: Fue Fernando Torres con 3 goles y 1 asistencia. Y por haber jugado el menor tiempo que el resto de goleadores de aquel torneo.";
	
	anecdotas[7]=">> MR soceer: Nicolla Rizzoli (italiano)fue el encargado de dirigir aquella final del mundial 2014 en la cual se enfrentaron Alemania y Argentina";
	
	anecdotas[8]=">> MR soceer: El premio se lo llevo el croata Luka Modric con una gran actuacion en el mundial 2018 al llegar a la final con su seleccion.\nTambien ganando diferentes titulos con su club Real Madrid entre ellos la Champions League";
	
	anecdotas[9]=">> MR soceer: Juan Roman Riquelme fue elegido como el mejor jugador de la libertadores del 2007 con 8 goles y 7 asistencias.\nAdemas de ser el mejor jugador de los dos partidos de la final de aquella edicion";

}

 
/*
·*·@brief Se·crean·los·objectos·jugador1·de·la·clase·Usuario·y·el·objecto·j1·de·la·clase·Juego·del·mismo·modo·para·con·el·objecto·de·jugador2· 

*/
#include <iostream>
#include <string>
#include <thread> // Incluir la biblioteca para dormir

using namespace std;

int main() {
    string respuesta;

    do {
        cout << "> Introduzca los jugadores a jugar max.2" << endl; // selección de jugadores
        int c;
        cin >> c;

        if (c == 1) { // Objetos del jugador 1
            cout << ">> Elegiste 1 jugador" << endl;

            Usuario jugador1 = Usuario(c, 0);
            jugador1.nombre_usuario();

            Juego j1 = Juego("Preguntas");
            jugador1.getPuntaje();
            j1.preguntas_responder(jugador1);

            cout << "\n";
            cout << "Puntaje total: " << jugador1.getPuntaje() << endl;

        } else if (c == 2) { // Objetos del jugador 2
            cout << "elegiste 2 jugadores" << endl;

            Usuario jugador1 = Usuario("Jugador1", 0); // Objetos para el jugador 1
            jugador1.nombre_usuario();

            Juego j1 = Juego("Preguntas"); // Objetos preguntas y anécdotas
            jugador1.getPuntaje();
            j1.preguntas_responder(jugador1);

            Usuario jugador2 = Usuario("jugador2", 0); // Objetos para el jugador 2
            jugador2.nombre_usuario();

            Juego juego2 = Juego("Preguntas"); // Objetos preguntas y anécdotas para el jugador 2
            cout << "Mr Soccer, Ahora es turno del jugador 2" << endl;
            juego2.preguntas_responder(jugador2);

            cout << "\n";
            // Puntaje de los dos jugadores
            cout << "Puntaje total Jugador 1: " << jugador1.getPuntaje() << endl;
            cout << "Puntaje Jugador 2: " << jugador2.getPuntaje() << endl;

            // Decisión de quién ganó la partida o si hubo empate
            if (jugador1.getPuntaje() > jugador2.getPuntaje()) {
                cout << "Jugador 1  ganador de la partida" << endl;
            } else if (jugador2.getPuntaje() > jugador1.getPuntaje()) {
                cout << "jugador 2 ganó la partida" << endl;
            } else {
                cout << "Empate, bien jugado" << endl;
            }
        }

        final(); // Palabras finales de Mr Soccer (mascota)

        cout << "\nDesea continuar? (S/N): "; // Si desea reiniciar o finalizar el programa
        cin >> respuesta;

        if (respuesta == "N" || respuesta == "n") {
            cout << "Adiós, vuelva pronto" << endl;
            break; // Esto asegura que el bucle se termine
			
        }
             
    } while (respuesta == "S" || respuesta == "s");
   this_thread::sleep_for(chrono::hours(1));
    return 0;
}

//Explicacion del juego
void dinamica(){
	
	cout<<"#---------------------------------#"<<endl<<endl<<">> Mr Soccer:Hola Jugador Bienvenido a este increible juego,soy la mascota, mi nombre es Mr. Soccer,un placer conocerte."<<endl<<endl;
	cout<<">> Esta es la dinamica del juego: "<<endl;
	cout<<"- El juego consiste en 10 preguntas."<<endl;
	cout<<"- Responde las preguntas correctamente para ganar el mayor puntaje posible."<<endl;
	cout<<"- Si seleccionas 2 jugadores, no dejes qeu tu contricante vea tus preguntas ya que despues de que termines las 10 preguntas estas seran las mismas para el juegador 2."<<endl;
	cout<<"- Si respondes incorrectamente no ganaras puntos."<<endl<<endl;
	cout<<">> Mr soccer: Estare en la parte de anecdotas para contarte de los sucesos de la historia del futbol."<<endl<<endl;
	cout<<"#------INICIO DEL JUEGO------#"<<endl<<endl;
}
// Palabras finales y creditos	
void final(){
	
	cout<<">> Mr soccer: Que triste que haya terminado el juego pero gracias por jugar a la trivia futbolera,nos vemos en una proxima ocasion."<<endl<<endl; 
	cout <<"#------Creditos------#"<<endl;
	cout<<"Creador: *Jose Miguel Ramirez* "<<endl<<endl;
	cout<<">> Anecdota: Gracias por disfutar del juego que he hecho es el primero que hago y me diverti mucho en este proyecto, sigan aprendiendo de este lindo mundo de la programacion ."<<endl;
	cout<<"- Y no olviden que el mejor jugador del mundo es Messi"<<endl<<endl<<">> Mr soccer: Te equivocas es el bicho(CR7) siuuuuu."<<endl;
}	








