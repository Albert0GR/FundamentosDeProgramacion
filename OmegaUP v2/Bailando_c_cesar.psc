Algoritmo Bailando_c_cesar
	Leer cant
	Dimension arreglo[cant]
	Dimension opc[cant]
	Para i<-0 Hasta num Hacer
		Leer arreglo[i]
		Leer opc[i]
	FinPara
	Leer nombre
	Para i<-0 Hasta num Hacer
		Si nombre=arreglo[i] Entonces
			Escribir opc[i]
		FinSi
	FinPara
FinAlgoritmo
