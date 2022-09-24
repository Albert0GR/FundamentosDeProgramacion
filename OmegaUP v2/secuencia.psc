Algoritmo secuencias_saltarinas
	Dimension secuencia[1000],numeros[1000]
	Leer num
	Si num>=2 Y num<=1000 Entonces
		Para i<-0 Hasta num Hacer
			Leer num
			secuencia[i] <- 0
		FinPara
		Para i<-0 Hasta num Hacer
			resta <- abs(numeros[i-1]-numeros[i])
			secuencia[resta] <- secuencia[resta]+1
		FinPara
		Para i<-1 Hasta num Hacer
			Si i<num Entonces
				Escribir i
			SiNo
				Escribir 0
			FinSi
		FinPara
	FinSi
FinAlgoritmo
