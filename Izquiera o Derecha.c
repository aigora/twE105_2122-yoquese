#include <stdio.h>
#include <string.h>
#define N 50

void comienzo ();
void cambio (char nombre []);
void PuertaDerecha ();
void SegundaOportunidad ();
void SiguientePrueba ();
void PuertaIzquierda ();
void IrAClase ();
void andaluza ();
void cafeteria ();
void ExamenesEnero1 ();
void ExamenesEnero2 ();
void ExamenesEnero3 ();
void resultados1 ();
void resultados2 ();
void resultados3 ();

typedef struct{
	char nombre[N];
	char autor[N];
}prueba;

int main () {

	int MenuOpcion, puertas;
	
	printf ("Bienvendo a Izquierda o Derecha,tu mision es escapar de la simulacion.\n");
	printf ("(1) Empieza a jugar.\n(2) Salir.\n");
	scanf ("%i", &MenuOpcion);
	
	switch (MenuOpcion) {
	
		case 1: {
			comienzo ();
			
			printf ("Pulsa (1) si quieres abrir la puerta de la derecha y (2) si quieres abrir la puerta de la izquierda.");
			scanf ("%i", &puertas);
			
			if (puertas == 1) {
				PuertaDerecha ();
			}
			else {
				PuertaIzquierda ();			
			}
			break;
		}
		case 2: {
			printf ("Has salido del juego");
			break;
		}
	}
	
	system ("pause");
	return 0;
}

void comienzo () {
	
	char nombre [15];
	
	printf ("Escribe tu nombre: ");
	fflush (stdin);
	fgets (nombre,15,stdin);
	
	cambio (nombre);
	
	printf ("Te levantas en una habitacion. No recuerdas nada, no sabes quien eres. Miras a tu alrededor pero todote resulta desconocido.\n");
	printf ("Hay una mesa en el centro de la sala y cuando te acercas ves que lo unico que hay encima es una hoja de papel, en la hoja esta escrito lo siguiente:\n");
	printf ("%s.\nAsumes que %s es tu nombre y decides que tienes que salir de esa habitacion.\n", &nombre, &nombre);
	printf ("Ademas de la mesa, la habitacion esta completamente vacia, opuesta la una de la otra, hay dos puertas de madera, la de la derecha tiene el pomo blanco y la de la izquierda negro.\n");

}

void cambio (char nombre []) {
	
	int i;
	
	for (i = 0; i < 15; i++) {
		if (nombre [i] == '\n') {
			nombre [i] = '\0';
		}
	}
}

void PuertaDerecha () {
	int boton;
	int LibrosOpcion, i;
	int aux;
	
	printf ("Has abierto la puerta derecha.\n");
	printf ("Entras en otra sala, y en en frente tienes un armario, con una frase escrita: \n\n");
	printf ("'Las palabras son, en mi no tan humilde opinion, nuestra mas inagotable fuente de magia, capaces de infringir dano y de remediarlo'.\n\n");			
	printf ("La puerta del armario se abre y revela una estanteria llena de libros,\nhay una nota que dice que tienes que sacar el libro del que provenga la frase que estaba encima de la puerta para salir de la habitacion.\n");
	printf ("Todos los libros estan llenos de polvo menos siete, que estan limpios y destacan mas, esos libros son: .\n\n");
	printf ("(1) El nombre del viento, Patrick Rothfuss.\n(2) Juego de tronos, George R. R. Martin.\n(3) Seis de cuervos, Leigh Bardugo.\n(4) Harry Potter y la Piedra Filosofal, J. K. Rowling\n(5) Percy Jackson y el Ladron del Rayo, Rick Riordan.\n(6) El guardian entre el centeno, J. D. Salinger.\n(7) Diez negritos, Agatha Christie.\n");
	printf ("Tienes 3 intentos.\n");
	
	for (i == 0; i < 3 && aux != 0; i++) {
		printf ("%i intento, elige un libro: .\n",i+1);
		scanf ("%i", &LibrosOpcion);
		if (LibrosOpcion == 4) {
			aux = 0;
		}
	}
	
	if (aux == 0) {
		printf ("Has acertado, la estanteria se corre a un lado y revela un pasillo que lleva a otra sala.\n");
		SiguientePrueba ();
	}
	else {
		printf ("No has acertado, pero no te preocupes: tienes otra oportunidad para avanzar, sin embargo, tendras que superar otra prueba.\n");
		SegundaOportunidad ();
	}
}
	
void SegundaOportunidad () {
	
	int sinonimo;
	
	printf ("La puerta del armario se cierra,\nantes de que puedas procesar lo que esta pasando se abre el suelo debajo de ti y empiezas a caer.\n");
	printf ("Afortunadamente, aterrizas encima de una colchoneta, solo has caido una planta mas abajo.\n");
	printf ("Te bajas de la colchoneta para acercarte  a una pequeña pantallaque hay en la pared. En ella pone lo siguiente: \n");
	printf ("La siguiente prueba es sencilla, tienes que acertar el sinonimo de la siguiente palabra: 'Colegio'\n");
	printf ("(1) Caballo\n(2) Club\n(3) Hogar\n(4) Escuela\n(5) Universidad\n");
	printf ("Cual de estas palabras es el sinonimo?");
	scanf ("%i", &sinonimo);
	
	if (sinonimo == 4) {
		printf ("Respuesta correcta, puedes avanzar.\n");
		printf ("La pared que tienes detras se abre y revela unas escaleras que suben al piso en que estabas antes.\n");
		SiguientePrueba ();
	}
	else {
		printf ("Has perdido, y mira que era dificil equivocarse.");
	}
	
}

void SiguientePrueba () {
	
	int i;
	prueba L;
	
	printf ("En esta ultima prueba vas a crear una biblioteca.\n")
	printf ("Para poder ganar vas a tener que escribir el nombre de 5 libros y sus autores.\n")
	
	for(i = 0; i < 5;i++) {
		printf ("Introduce el nombre del libro: ");
		fflush(stdin);
		fgets(L[i].nombre,N,stdin);
			
		printf ("Introduce el nombre del autor: ");
		fflush(stdin);
		fgets(L[i].autor,N,stdin);
	}
	
	printf ("Enhorabuena, has superado esta prueba con exito.\n");
	printf ("Aunque mas que una prueba era un favor.\n");
	printf ("De cualquier manera, has ganado el juego, puedes irte\n");
}
	

void PuertaIzquierda () {
	int DescansoOpcion, ClaseAlgebra1, ClaseAlgebra2;
	
	printf ("Has abierto la puerta izquierda.\n");
	printf ("Has tenido la suerte, o mala suerte, de haber entrado en la carrera de Ingenieria Electrica en la ETSIDI.\nTu mision es acabar la carrera.\n\n");
	printf ("El primer dia de clase tienes quimica a primera hora, despues de 2 horas de clase tienes 2 opciones:\n(1) Irte a la Andaluza durante el descanso a tomar algo con unos pocos de clase.\n(2) Irte a la cafeteria con otro grupo diferente.");
	scanf ("%i", &DescansoOpcion);
	
	if (DescansoOpcion == 1) {
		printf ("Vas a la Andaluza con gente que te acaba cayendo muy bien, sin embargo, la media hora de descanso acaba rapido.\n");
		printf ("Lo ultimo que te apetece ahora es tragarte 2 horas de algebra que ademas van a ser de introduccion.\nLos repetidores te dicen que la primera clase de algebra no es necesaria, pero no sabes que hacer.\nCuando la mitad del grupo se levanta para volver a la uni tienes que tomar tu decision.\n");
		printf ("(1) Ir a clase.\n(2) Pedirte otra cerveza.");
		scanf ("%i", &ClaseAlgebra1);
		
		if (ClaseAlgebra1 == 1) {
			IrAClase ();
			ExamenesEnero1 ();
		}
		else {
			andaluza ();
			ExamenesEnero3 ();
		}
	}
	else {
		printf ("En la cafeteria te pides un bocata de bacon y queso y conoces a gente muy agradable.\nCuando termina el descanso te planteas no ir a la siguiente clase porque quieres seguir haciendo amigos.\n");
		printf ("La siguiente clase es algebra, van a ser 2 horas de temario que ya has dado en bachillerato, aun asi deberias ir a clase.\n");
		printf ("Si te quedas en la cafeteria con una parte del grupo puedes seguir comiendo y conociendo a gente.\nIr a clase no es el fin del mundo y asi no pierdes el habito, saltarte clase es peligroso sobre todo estudiando una ingenieria.\n");
		printf ("Hay una parte del grupo que decide ir a la andaluza, si vas puedes conocer a la otra mitad de la clase, pero andar es un coñazo y no sabes si te van a cobrar 3 euros por un tercio.\n");
		printf ("Elige:\n(1) Quedarte en la cafeteria.\n(2) Ir a clase.\n(3) Ir a la andaluza");
		scanf ("%i", &ClaseAlgebra2);
		
		switch (ClaseAlgebra2) {
			
			case 1: {
				cafeteria ();
				ExamenesEnero2 ();
				break;
			}
			case 2: {
				IrAClase ();
				ExamenesEnero1 ();
				break;
			}
			case 3: {
				andaluza ();
				ExamenesEnero3 ();
				break;
			}
		}
	}
}

void IrAClase () {
	printf ("Aunque ya habias sabias hacer todo lo que han dado en clase, te ha servido de repaso de cosas que no habias tocado desde antes de verano.\nEn la siguiente clase ya vas a dar cosas nuevas y gracias a estas 2 horas vasa entender mejor todo lo demas.\n");
	printf ("Hasta que vuelva a ser todo presencial, algunos dias tienes clase online por la tarde, vuelves a casa a comer y te conectas a la clase online.\n");
	printf ("Ha terminado el dia y entiendes todo lo que has aprendido hoy en clase, vas por buen camino.\n");
}

void cafeteria () {
	printf ("En la cafeteria pasas un buen rato con tus nuevos amigos aunque sientes que han sido 2 horas perdidas, decides que no vas a volver a saltarte clase de una manera tan innecesaria.\n");
	printf ("Comes en casa y te conectas a la clase online que tienes por la tarde y te sientes un poco mejor contigo mismo.\n");
}

void andaluza () {
	printf ("En la andaluza te pides una cerveza tras otra e incluso alguna copa ya que cuestan 2,5 euros.\n");
	printf ("Lo cual es preocupante porque son las 2 de la tarde y es el primer dia de clase.\n");
	printf ("Pierdes la nocion del tiempo y te das cuenta demasiado tarde de que tienes clase online por la tarde.\nTe acaba dando igual, tus amigos y tu llegais a la conclusion de que saltarse clase online no cuenta como saltarse clase.\n");
	printf ("(Si que cuentan, si sigues asi vas a suspender todo)\n");
}

void ExamenesEnero1 () {
	
	int viaje;
	
	printf ("Llegan tus primeros examenes finales, afortunadamente, has ido a clase todo este cuatri asi que no vas a tener problema.\n");
	printf ("Llgan las vacaciones de Navidad y la tentacion de relajarte es muy grande, pero tienes examenes a la vuelts de la esquina.\n");
	printf ("Has trabajado mucho estos meses y lo que necesitas es un ultimo empujon, sin embargo, cuando te ofrecen un plan es muy dificil rechazarlo.\n");
	printf ("Tus amigos van a hacer un viaje de ski la primera semana de enero, volverias justo a tiempo para el final de quimica.\n");
	printf ("Esa asignatura se te da bien y la llevas al dia, asi que podrias permitirte irte de viaje unos dias, pero no te confies, estas estudando ingenieria.\n");
	printf ("Quedarte en Madrid no implica encerrase en casa, tambien tienes la opcion de ir a un par de fiestas con amigos que llevas mucho tiempo sin ver.\n");
	printf ("Que vas a hacer?\n");
	printf ("(1) Irte de viaje.\n(2) Quedarte en Madrid pero salir de fiesta todos los dias.\n(3) Encerrarte a estudiar.\n");	
	scanf ("%i", &viaje);
	
	switch (viaje) {
		case 1: {
			printf ("Lo pasaste muy bien de viaje, sin embargo, te has confiado demasiado.\n");
			printf ("Llevabas la asignatura al dia pero no te habias preparado el exaemn adecuadamente.\n");
			printf ("Llegaste a casa 2 dias antes del examen demasiado cansado para estudiar como es debido.\n");
			printf ("Has sacado un 4.6, y el profesor se niega a redondearlo a un 5");
			printf ("Todo el mundo comete errores, lo importante es aprender de ellos, esto te motiva a hacerlo bien en los demas examenes.\n");
			printf ("Acabas aprobando las demas asignaturas, algunas mas justas que otras, pero un aprobado es un aprobado.\n");
			resultados1 ();
			break;
		}
		case 2: {
			printf ("Eres una persona organizada, y eres capaz de salir de fiesta por la noche y estudaiar durante el dia.\n");
			printf ("Esta muy bien eso de tener vida de social, pero igual no es el mejor momento para salir de fiesta y cerrar discotecas todas las noches.\n");
			printf ("Por mucho que al dia siguiente estudies, no estas al 100% de tus capacidades y no te cunde lo mismo.\n");
			printf ("Tambien es dificil concentrarse en los estudios si estas pensando en el plan de esta noche en ves de en lo que tienes delante.\n");
			printf ("Sacas un 4,5 en el examen, y en la revision el profesor se da cuenta de que no te ha corrgido bien un ejercicio y acabas aprobando.\n");
			printf ("Llegas a la conclusion de que mientras lleves todo al dia puedes seguir saliendo todo lo que quieras mientras sigas siendo responsable.\n");
			printf ("Tu nueva filosofia de vida resulta no ser muy efectiva para los demas examenes, es muy facil perder el control.\n");
			printf ("Acabas suspendiendo Fisica I y Expresion Grafica, no ha sido tan desastroso como podria haberlo sido.\n");
			resultados1 ();
			break;
		}
		case 3: {
			printf ("Te quedas estudiando lo que queda de vacaciones, y no es tan malo como suena.\n");
			printf ("Vas con tus amigos todos los dias a la biblioteca y eso te anima a seguir asi.\n");
			printf ("Los descansos son mas divertidos con amigos y te motivan mas a estudiar.\n");
			printf ("Acabas terminando de preparate los examenes antes de tiempo y el mes de enero de lo puedes tomar con calma en vez de con asiedad.\n");
			printf ("Acabas aprobando las 5 asignaturas.\n");
			resultados1 ();
			break;
		}
	}
}

void ExamenesEnero2 () {
	
	int estudiar;
	
	printf ("Te prometiste a ti mismo que no ibas a saltarte clase otra vez innecesariamente.\n");
	printf ("Sin embargo, perdiste el hilo en Algbera, Quimica y Fisica I y te pasaste esas clases en la Terraza con tus amigos.\n");
	printf ("Ahora los examenes estan a la vuelta de la esquina y no tienes ni una sola idea de esas asignaturas.\n");
	printf ("Afortunadamente, Calculo y Expresion Grafica las llevas al dia.\n");
	printf ("Ya has decidido que vas a ignorar a todo el mundo en Navidad y que vas a encerrarte a estudiar.\n");
	printf ("Ahora tienes que tener cuidado, tienes que decidir en que asignaturas quieres centrarte y los examenes a los que quieres presentarte.\n");
	printf ("Puedes centrarte en las dos asignaturas que llevas bien y asegurarte de aprobarlas, eso significaria ir directamente a julio con las otras 3,\n");
	printf ("Tambien puedes elegir centrarte en 1 o 2 de la saignaturas que llevas a mal ademas las otras 2 que llevas bien.\n");
	printf ("O puedes intentar aprobar todas.\n");
	printf ("Que vas a hacer?\n");
	printf ("(1) Estudiar solo Calculo y Expresion Grafica.\n(2) Centrarte en alguna asignatura mas.\n(3) Ir a por todas.\n");
	scanf ("%i", &estudiar);
	
	switch (estudiar) {
		case 1: {
			printf ("Te centras en esas 2 asignaturas y las apruebas con facilidad.\n");
			printf ("Ademas no has sufrido demasiado estres durante este mes de examenes.\n");
			resultados2 ();
			break;
		}
		case 2: {
			printf ("Al final te has presentado a 4 examenes y has aprobado 3, pero con suerte.\n");
			printf ("Estas contento con tus resultados.\n");
			resultados2 ();
			break;
		}
		case 3: {
			printf ("Ir a por todas las asignaturas no ha sido la decision correcta.\n");
			printf ("No sabias por donde empezar y has peridido demasiado tiempo agobiandote y buscando apuntes en Wuolah.\n");
			printf ("Has conseguido aprobar Calculo y Expresion Grafica gracias a una mezcla de estres, falta de sueño y suerte.\n");
			resultados2 ();
			break;
		}
	}
}

void ExamenesEnero3 () {
	
	printf ("Tu y yo sabemos que eres un caso perdido y que te has pasado el cuatri entero jugando al mus en la Terraza");
	printf ("Te encierras todas las navidades a estudiar pero no tienes ningun habito de estudio y no acabas haciendo nada util.\n");
	printf ("Acabas suspendiendo todas, al menos has hecho muchos amigos.\n");
	resultados3 ();
}

void resultados1 () {
	
	char aux;
	
	printf ("Ha llegado julio y ya estas de vaciones.\n\n");
	printf ("Enhorabuena!!\n\n");
	printf ("Con mucho estres, sudor y lagrimas, has aprobado todas menos informatica.\n")
	printf ("Esta simulacion solo llega hasta el final de tu primer año de carrera porque la verdad es que no tengo ni idea de como van a ser los demas.\n");
	printf ("Pero vas por buen camino y yo considero que a este paso te sacas la carrera.\n\n");
	printf ("HAS GANADO EL JUEGO.\n\n");
	printf ("Tus notas son las siguientes: \n");
	
	FILE *pf;
	pf = fopen("notas1.txt", "r"); 
	while (aux != EOF) {
		aux = fgetc (pf);
		printf ("%c",aux);
	}
	printf ("\n");
	
	fclose (pf);
}

void resultados2 () {
	
	char aux;
	
	printf ("Has terminado el curso y ya han llegado las vacaciones.\n");
	printf ("Has acabado aprobando 5 asignaturas de 10, lo cual no esta tan mal, solo tienes que ponerte las pilas el curso que viene.\n");
	printf ("Esta simulacion solo llega hasta el final de tu primer año de carrera porque la verdad es que no tengo ni idea de como van a ser los demas.\n");
	printf ("Pero vas por buen camino y yo considero que a este paso te sacas la carrera.\n\n");
	printf ("HAS GANADO EL JUEGO.\n\n");
	printf ("Tus notas son las siguientes: \n");
	
	FILE *pf;
	pf = fopen ("notas2.txt", "r")
	while (aux != EOF) {
		aux = fgetc (pf);
		printf ("%c",aux);
	}
	printf ("\n");
	
	fclose (pf);
}
 
void resultados3 () {
	
	char aux;
	
	printf ("El curso ha terminado y tu no has aprendido de tus errores.\n");
	printf ("Consigues aprobar Estadistica en julio, pero te conformas con eso y no tiene pinta de que el curso que viene vayas a dejar de lado tus malo habitos.\n");
	printf ("Esta simulacion solo llega hasta el final de tu primer año de carrera porque la verdad es que no tengo ni idea de como van a ser los demas.\n");
	printf ("Esta claro que vas por mal camino y que no te vas a sacar esta carrera.\n")
	printf ("Has peridido\n\n");
	printf ("Tus notas son las siguientes: \n");
	
	FILE *pf;
	pf = fopen ("notas3.txt", "r")
	while (aux != EOF) {
		aux = fgetc (pf);
		printf ("%c",aux);
	}
	printf ("\n");
	
	fclose (pf);
}
