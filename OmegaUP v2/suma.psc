Algoritmo suma_impares
	Leer f1,f2
	Mientras contador<f2 Hacer
		Si contador MOD 2<>0 Entonces
			suma <- suma+contador
			contador <- contador+1
		FinSi
	FinMientras
	Escribir suma
FinAlgoritmo
