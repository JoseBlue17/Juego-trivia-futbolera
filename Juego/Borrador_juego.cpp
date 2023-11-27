#include<iostream>
#include <conio.h>



using namespace std;

void dinamica();
void final();


class Usuario{
	private://Atributos
		string nombre;
		int puntaje;
	
	public://Metodos
		Usuario(string,int);//Constructor
		void nombre_usuario();
		void puntajes(int);
		int getPuntaje() const;
};

Usuario::Usuario(string elNombre,int elPuntaje){
	nombre=elNombre;
	
	puntaje=elPuntaje;
	
}

void Usuario::nombre_usuario(){//Nombre de usuario
	system("cls");
	
	
	cout<<"Soy: "<<nombre<<endl;


	
}

void Usuario::puntajes(int puntos){//Puntaje
	
	
	
	puntaje+=puntos;
	
}
int Usuario::getPuntaje() const {
    return puntaje;
}

class Juego{
	
	private://Atributos
	string preguntas;
	string anecdotas[10];
	
	public://metodos
	Juego(string,string);//constructor
	void preguntas_responder(Usuario&);
	void historia(); 
	
	
};

Juego::Juego(string _preguntas,string _anecdotas){
	
	preguntas=_preguntas;
		
	anecdotas[0]="anecdota1";
	anecdotas[1]="anecdota2";
	anecdotas[2]="anecdota3";
	anecdotas[3]="anecdota4";
	anecdotas[4]="anecdota5";
	anecdotas[5]="anecdota6";
	anecdotas[6]="anecdota7";
	anecdotas[7]="anecdota8";
	anecdotas[8]="anecdota9";
	anecdotas[9]="anecdota10";
}

void Juego::preguntas_responder(Usuario &jugador){//Preguntas y respuestas
	
	int posicion=1;
	string a,b,c,d,A;
	

	
	cout<<"Pregunta #"<<posicion<<endl<<endl;//pregunta#1
	cout<<"1.Quien gano la copa libertadores del 2001?"<<endl;
	cout<<"A.Boca Juniors"<<endl<<"B.Cruz Azul"<<endl<<"C.River"<<endl<<"D.Palmeiras"<<endl<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta1;
	cin>>Respuesta1;
	
	if(Respuesta1=='a'||Respuesta1=='A'){
		cout<<"Respuesta Correcta"<<endl;

	
        
       historia(); // Muestra la an�cdota despu�s de la respuesta correcta
        cout << "\n";
        jugador.puntajes(100); // Incrementa el puntaje si es correcta
    	 cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		cout << "\n";
		cout << "Anecdota relacionada" << endl;
		cout<<anecdotas[0]<<endl;
		 
		 cout << "\n"; 
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion A"<<endl;
		cout<<"\n";
		historia();
	}
	system("pause");
system("cls");
	
	posicion++;//Pregunta#2
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Donde se jugo la final de champions del 2005?"<<endl;
	cout<<"A.Lisboa"<<endl<<"B.Madrid"<<endl<<"C.Estambul"<<endl<<"D.Londres"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta2;
	cin>>Respuesta2;
	
		
	if(Respuesta2=='c'||Respuesta2=='C'){
		cout<<"Respuesta Correcta"<<endl;
		
		cout<<"\n";
		 jugador.puntajes(100);
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		 cout<<"\n";
		historia();
		 cout << "Anecdota relacionada" << endl;
		 cout<<anecdotas[1]<<endl;
		 cout << "\n";
	}
	
	else{
		cout<<"Respuesta incorrecta. Es la opcion C"<<endl;
		cout<<"\n";
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#3
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien fue el MVP del mundial 2006"<<endl;
	cout<<"A.Del Piero"<<endl<<"B.Buffon"<<endl<<"C.Zinedine Zidane"<<endl<<"D.Michael Ballack"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta3;
	cin>>Respuesta3;
	
	if(Respuesta3=='c'||Respuesta3=='C'){
		cout<<"Respuesta Correcta"<<endl;
		historia();
		cout<<"\n";
		 jugador.puntajes(100);
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		 cout << "Anecdota relacionada" << endl;
		 cout<<anecdotas[2]<<endl;
			cout<<"\n";
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion C"<<endl;
		historia();
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#4
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien gano la premier de la temporada 2010-2011"<<endl;
	cout<<"A.Liverpool"<<endl<<"B.Chelsea"<<endl<<"C.Arsenal"<<endl<<"D.Manchester United"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta4;
	cin>>Respuesta4;
	
		if(Respuesta4=='d'||Respuesta4=='D'){
		cout<<"Respuesta Correcta"<<endl;
		historia();
		cout<<"\n";
		 jugador.puntajes(100);
		cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		cout << "Anecdota relacionada" << endl;
		cout<<anecdotas[3]<<endl;
		 cout<<"\n"; 
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion D"<<endl;
		historia();
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#5
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien fue el subcampeon de la UEFA Europa League del 2013"<<endl;
	cout<<"A.Sevilla"<<endl<<"B.Juventus"<<endl<<"C.Benfica"<<endl<<"D.Valenica"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta5;
	cin>>Respuesta5;
	
		if(Respuesta5=='c'||Respuesta5=='C'){
		cout<<"Respuesta Correcta"<<endl;
		cout<<"\n"; 
		historia();
		 jugador.puntajes(100);
		 cout << "Anecdota relacionada" << endl;
		 cout<<anecdotas[4]<<endl;
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		cout<<"\n"; 
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion C"<<endl;
		historia();
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#6
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien es el maximo goleador de las eliminatorias sudamericanas"<<endl;
	cout<<"A.Luis Suarez"<<endl<<"B.Lionel Messi"<<endl<<"C.Ronaldo Nazario"<<endl<<"D.Marcelo Moreno"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta6;
	cin>>Respuesta6;
	
	if(Respuesta6=='b'||Respuesta6=='B'){
		cout<<"Respuesta Correcta"<<endl;
		cout<<"\n"; 
		historia();
		 jugador.puntajes(100);
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		 cout << "Anecdota relacionada" << endl;
		 cout<<anecdotas[5]<<endl;
		 cout<<"\n"; 
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion B"<<endl;
		historia();
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#7
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien fue el maximo goleador de la Eurocopa del 2012"<<endl;
	cout<<"A.Mario Balotelli"<<endl<<"B.Cristiano Ronaldo"<<endl<<"C.Dinatale"<<endl<<"D.Fernando Torres"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta7;
	cin>>Respuesta7;
	
	if(Respuesta7=='d'||Respuesta7=='D'){
		cout<<"Respuesta Correcta"<<endl;
		cout<<"\n"; 
		historia();
		 jugador.puntajes(100);
		 cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		 cout << "Anecdota relacionada" << endl;
		 cout<<anecdotas[6]<<endl;
		 cout<<"\n"; 
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion D"<<endl;
		historia();
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#8
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Cual fue el arbitro que repartio justicia en la final del mundial 2014"<<endl;
	cout<<"A.Wilmar Roldan"<<endl<<"B.Nicola Rizzoli"<<endl<<"C.Felix Brych"<<endl<<"D.Nestor Pitana"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta8;
	cin>>Respuesta8;
	
	if(Respuesta8=='b'||Respuesta8=='B'){
		cout<<"Respuesta Correcta"<<endl;
		cout<<"\n";
		historia();
		 jugador.puntajes(200);
		cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		 cout << "Anecdota relacionada" << endl;
		 cout<<anecdotas[7]<<endl;
		cout<<"\n";
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion B"<<endl;
		historia();
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#9
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien gano el balon de oro del 2018"<<endl;
	cout<<"A.Cristiano Ronaldo"<<endl<<"B.Lionel Messi"<<endl<<"C.Luka Modric"<<endl<<"D. Antoine Griezmann"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta9;
	cin>>Respuesta9;
	
		if(Respuesta9=='c'||Respuesta9=='C'){
		cout<<"Respuesta Correcta"<<endl;
		cout<<"\n"; 
		historia();
		 jugador.puntajes(100);
		cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		cout << "Anecdota relacionada" << endl;
		cout<<anecdotas[8]<<endl;
		cout<<"\n";	
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion C"<<endl;
		historia();
	}
	system("pause");
	system("cls");
	
	posicion++;//Pregunta#9
	cout<<"Pregunta#"<<posicion<<endl;
	cout<<"Quien fue el MVP de la copa libertadores 2007"<<endl;
	cout<<"A.Blas Perez"<<endl<<"B.Juan Roman Riquelme"<<endl<<"C.Salvador Cabanas"<<endl<<"D.Ze Roberto"<<endl;
	cout<<"Responde correctamente:"<<endl;
	char Respuesta10;
	cin>>Respuesta10;
	
		if(Respuesta10=='b'||Respuesta10=='B'){
		cout<<"Respuesta Correcta"<<endl;
		historia();
		cout<<"\n";
		 jugador.puntajes(100);
		cout << "Puntaje actual: " << jugador.getPuntaje() << endl;
		cout << "Anecdota relacionada" << endl;
		cout<<anecdotas[9]<<endl;
		 
	}
	else{
		cout<<"Respuesta incorrecta. Es la opcion B"<<endl;
		historia();
	}
		
	system("pause");
	
}
void Juego::historia(){//HISTORIA O ANECDOTAS
	
//char anecdota1,g;
	
	
	anecdotas[0]="MR soceer:El Boca Junior fue el campeon de aquella edicion de la libertadores contra cruz azul que llego sorprendiendo al mundo entero tras derrotar a River y Rosario central.El partido de ida se jugo en Mexico quedando el marcador 1 a 0 a favor de boca juniors.El cuadro mexicano se jugaba la vida en el partido de vuelta en un estadio muy dificil como la Bombonera, el resultado quedo igualado 1 a 1 y el partido se resolvio en penales, boca acerto 3 y 1 cruz azul dando como consecuencia la consagracion del cuadro xeneize.";

	anecdotas[1]="MR soceer: La final de la champions del 2005 se jugo en Estambul donde saldr�a campeon el Liverpool con un marcador de 3-2 frente al Milan en una final apasionante que muchos no olvidan.";
	
	anecdotas[2]="MR soceer: El premio se lo llevo Zinedine Zidane con una gran actuacion en el mundial 2006 a pesar de perder aquella final contra Italia y protagonizar un hecho de violencia a su rival Materazzi que esto lo llevo a la expulsion,a pesar de esto se pudo llevar el premio al mejor jugador del mundial.";
	
	anecdotas[3]="MR soceer: Fue el Manchester United quien consiguio su 19� Premier League con un total de 80 puntos y con una ventaja de 9 puntos sobre el segundo puesto que era el Chelsea.";
	
	anecdotas[4]="MR soceer: El Benfica fue el subcampeon de aquella edicion de la Uefa Europa league tras empatar 0-0 la final se resolvio en penales como resultado 4-2 dando como consecuencia el triunfo del cuadro sevillista";
	
	anecdotas[5]="MR soceer: Es Lionel Andres Messi el astro argentino lleva 31 goles, 3 goles por encima de Luis Suarez.";
	
	anecdotas[6]="MR soceer: Fue Fernando Torres con 3 goles y 1 asistencia. Y por haber jugado el menor tiempo que el resto de goleadores de aquel torneo.";
	
	anecdotas[7]="MR soceer: Nicolla Rizzoli (italiano)fue el encargado de dirigir aquella final del mundial 2014 en la cual se enfrentaron Alemania y Argentina";
	
	anecdotas[8]="MR soceer: El premio se lo llevo el croata Luka Modric con una gran actuacion en el mundial 2018 al llegar a la final con su seleccion y ganando diferentes t�tulos con su club Real Madrid entre ellos la Champions League";
	
	anecdotas[9]="MR soceer: Juan Roman Riquelme fue elegido como el mejor jugador de la libertadores del 2007 con 8 goles y 7 asistencias. Ademas de ser el mejor jugador de los dos partidos de la final de aquella edicion";




}

const int NUM_PREGUNTAS = 10; 

int main(){
	int c;

	
	cout<<"LA TRIVIA FUTBOLERA"<<endl<<endl;//bienvenida
	
	dinamica();//Explicacion del juego
	
	
	cout<<"Introduzca los jugadores a jugar max.2"<<endl; //seleccion de jugadores
	cin>>c;
	
	if(c==1){
		cout<<"elegiste 1 jugador"<<endl;
		
		Usuario jugador1= Usuario("Jugador1",0);
		jugador1.nombre_usuario();
		//u1.sumar_puntos();
		
		Juego j1=Juego("Prenguntas","ANECDOTAS" );
		jugador1.getPuntaje();
		j1.preguntas_responder(jugador1);
		//j1.historia();
	cout<<"\n";
 	final();
	
  
	}
	else if(c==2){
		cout<<"elegiste 2 jugadores"<<endl;
		
		Usuario jugador1= Usuario("Jugador1",0);
		jugador1.nombre_usuario();
		
		Juego j1=Juego("Prenguntas","ANECDOTAS" );
			jugador1.getPuntaje();
			j1.preguntas_responder(jugador1);
			jugador1.puntajes(100);
			
		Usuario jugador2= Usuario("jugador2",0);
		
		jugador2.nombre_usuario();
		
		
		Juego juego2=Juego("Prenguntas","ANECDOTAS" );
		cout<<"Mr Soccer, Ahora esturno del jugador 2"<<endl;
		juego2.preguntas_responder(jugador2);
		jugador2.puntajes(100);
	
	cout<<"\n";
		cout << "Puntaje total Jugador 1: " << jugador1.getPuntaje()<< endl;
		cout << "Puntaje Jugador 2: " << jugador2.getPuntaje() << endl;
	
	if(jugador1.getPuntaje()>jugador2.getPuntaje()){
			cout<<"Jugador 1 a ganador la partida"<<endl;
		}
		else if(jugador2.getPuntaje()){
			cout<<"jugador2 gano la partida"<<endl;
		}	
	else {
		cout<<"Empate,bien jugado"<<endl;
	}
	final();
	
    
getch();	
return 0;
}}


void dinamica(){
	cout<<"Mr Soccer:Hola Jugador Bienvenido a este increible juego,soy la mascota, mi nombre es Mr. Soccer,un placer conocerte."<<endl;
	cout<<"Tal vez te estas prenguntando como es la dinamica de este juego, bueno sin mas preambulos."<<endl<<endl;
	cout<<"La dinamica del juego es la siguiente:"<<endl;
	cout<<"-El juego consiste en 10 preguntas"<<endl;
	cout<<"-Responde las preguntas correctamente para ganar el mayor puntaje posible"<<endl;
	cout<<"Si seleccionas 2 jugadores, no dejes qeu tu contricante vea tus preguntas ya que despues de que termines las 10 preguntas estas seran las mismas para el juegador 2"<<endl;
	cout<<"-Si respondes incorrectamente no ganaras puntos ."<<endl<<endl;
	cout<<"Mr soccer: Estare en la parte de anecdotas para contarte de los sucesos de la historia del futbol.Que te parece si damos inicio."<<endl<<endl;
	
}
	
void final(){
	
	cout<<"Mr soccer: Que triste que haya terminado el juego pero gracias por jugar a la trivia futbolera,nos vemos en una proxima ocasion"<<endl; 
	cout <<"Creditos:"<<endl;
	cout<<"Creador: Jose Miguel Ramirez"<<endl;
}	








