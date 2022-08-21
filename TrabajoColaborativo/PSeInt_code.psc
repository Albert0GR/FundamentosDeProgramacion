Funcion opciones
	Escribir 'Selecciona una opcion:'
	Escribir '------------------------------------------------------------------'
	Escribir ''
	Escribir '1-Suma resta multiplicacion, division de numeros enteros'
	Escribir '2-Serie 1 1 2 3 5 8 13'
	Escribir '3-Desplegar la suma de cuadrados'
	Escribir '4-Conversion de coordenadas'
	Escribir '5-Numero secreto'
	Escribir '6-Calcular area y perímetro'
	Escribir '7-Raices de ecuación cuadratica'
	Escribir '8-Convertir numero a letras'
	Escribir '0-Salir'
FinFuncion

Funcion operaciones
	Definir numero1,numero2,suma,multiplicacion,division,resta Como Real
	Escribir '--------Operaciones---------'
	Escribir 'Ingrese numero A'
	Leer numero1
	Escribir 'Ingrese numero B:'
	Leer numero2
	suma <- numero1+numero2
	resta <- numero1-numero2
	multiplicacion <- numero1*numero2
	division <- numero1/numero2
	Escribir 'suma ',suma
	Escribir 'Resta:',resta
	Escribir 'Multiplicacion:',multiplicacion
	Escribir 'Division:',division
FinFuncion

Funcion serie
	Definir i,j,res,n,cont Como Entero
	Escribir 'Ingrese el numero de valores de la sucesion:'
	Leer n
	Para cont<-0 Hasta n Hacer
		res <- i+j
		Escribir res
		i <- j
		j <- res
	FinPara
FinFuncion

Funcion suma_de_cuadrados
	Definir x,n,contador,cuadrado,impares Como Entero
	Escribir 'Secuencia de suma de cuadrados'
	Escribir 'Ingresa los numeros a mostrar:'
	Leer n
	Para contador<-0 Hasta n Hacer
		Escribir 'No. =',contador
		cuadrado <- 0
		x <- 1
		Repetir
			Escribir impares
			Si x<contador Entonces
				Escribir '+'
				cuadrado <- contador+impares
				impares <- impares+2
				x <- x+x
			FinSi
		Hasta Que x<=contador
	FinPara
FinFuncion

Funcion coordenadas_convert
	Escribir '1-Polares a cartesianas'
	Escribir '1-2-Cartesianas a polares'
	Escribir 'ingresa opcion'
	Segun opc  Hacer
		1:
			polar_to_cartesian
		2:
			cartesian_to_polar
	FinSegun
FinFuncion

Funcion polar_to_cartesian
	Definir val,theta,r,x,y_ Como Real
	val <- 3.1416/180
	Escribir 'Ingresa magnitud'
	Leer r
	Escribir 'Ingresa angulo'
	Leer theta
	x <- r*cos(theta*val)
	y_ <- r*sen(theta*val)
	Escribir x
	Escribir y_
FinFuncion

Funcion cartesian_to_polar
	Definir val,theta,r,x,y_ Como Real
	val <- 3.1416/180
	Escribir 'Ingresa x'
	Leer z
	Escribir 'Ingresa y'
	Leer y_
	r <- raiz(x*x+y_*y_)
	theta <- atan(y_/x)
	Escribir r
	Escribir theta
FinFuncion

Funcion numero_secreto
	Definir secreto,n Como Real
	secreto <- azar(10)
	Escribir 'ingresa el numero secreto'
	Leer secreto
	Mientras secreto<>n Hacer
		Si secreto>=n Entonces
			Escribir 'el numero es mayor'
		SiNo
			Escribir 'el numero es menor'
		FinSi
		Si (n MOD 2=0 Y secreto MOD 2=1) Entonces
			Escribir 'el numero es impar'
		FinSi
		Si (n MOD 2=1 Y secreto MOD 2=0) Entonces
			Escribir 'el numero es par'
		FinSi
		Leer n
	FinMientras
FinFuncion

Funcion area_perimetro
	Definir area,perimetro,a,b Como Real
	Escribir 'ingresa base'
	Leer a
	Escribir 'ingresa altura'
	Leer b
	Si (a>0 Y b>0 Y a<=100 Y b<=200) Entonces
		area <- a*b
		perimetro <- 2*a+2*b
		Escribir 'Area:',area
		Escribir 'Perimetro:',perimetro
	SiNo
		Escribir 'dimensiones invalidas'
	FinSi
FinFuncion

Funcion raices_ecuacion
	Definir a,b,c,d,x1,x2 Como Real
	Escribir 'Ingresa las constantes A B C respectivamente '
	Leer a,b,c
	d <- b*b-4*a*c
	Si (a<>0 Y d>=0) Entonces
		x1 <- (-b+raiz(d)/2*a)
		x1 <- (-b+raiz(d)/2*a)
		Escribir 'x1',x1
		Escribir 'x2',x2
	SiNo
		Escribir 'Sin solucion'
	FinSi
FinFuncion

Funcion numero_letras
	Definir numero_ Como Entero
	Escribir 'introduzca un numero entero(0-10)'
	Leer numero_
	Si (numero_>=1 Y numero_<=10) Entonces
		Segun numero_  Hacer
			1:
				Escribir 'UNO'
			2:
				Escribir 'DOS'
			3:
				Escribir 'TRES'
			4:
				Escribir 'CUATRO'
			5:
				Escribir 'CINCO'
			6:
				Escribir 'SEIS'
			7:
				Escribir 'SIETE'
			8:
				Escribir 'OCHO'
			9:
				Escribir 'NUEVE'
			10:
				Escribir 'DIEZ'
		FinSegun
	SiNo
		Escribir 'Numero invalido'
	FinSi
FinFuncion

Algoritmo funciones_menu
	Repetir
		opciones
		Leer opc
		Segun opc  Hacer
			1:
				operaciones
			2:
				serie
			3:
				suma_de_cuadrados
			4:
				coordenadas_convert
			5:
				numero_secreto
			6:
				area_perimetro
			7:
				raices_ecuacion
			8:
				numero_letras
			0:
				Escribir 'Hasta pronto'
		FinSegun
	Hasta Que opc<>0 Y opc>0 Y opc<9
FinAlgoritmo
