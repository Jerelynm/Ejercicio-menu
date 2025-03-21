//MENU
//Programa de seleccion para cualquiera de los 30 programas creados

#include <iostream>
using namespace std;

int ejercicio1();
int ejercicio2();
int ejercicio3();
int ejercicio4();
int ejercicio5();
int ejercicio6();
int ejercicio7();
int ejercicio8();
int ejercicio9();
int ejercicio10();
int ejercicio11();
int ejercicio12();
int ejercicio13();
int ejercicio14();
int ejercicio15();
int ejercicio16();
int ejercicio17();
int ejercicio18();
int ejercicio19();
int ejercicio20();
int ejercicio21();
int ejercicio22();
int ejercicio23();
int ejercicio24();
int ejercicio25();
int ejercicio26();
int ejercicio27();
int ejercicio28();
int ejercicio29();
int ejercicio30();

int Menu(int ejercicio) {
     switch (ejercicio) {
         case 1: return ejercicio1();
         case 2: return ejercicio2();
         case 3: return ejercicio3();
         case 4: return ejercicio4();
         case 5: return ejercicio5();
         case 6: return ejercicio6();
         case 7: return ejercicio7();
         case 8: return ejercicio8();
         case 9: return ejercicio9();
         case 10: return ejercicio10();
         case 11: return ejercicio11();
         case 12: return ejercicio12();
         case 13: return ejercicio13();
         case 14: return ejercicio14();
         case 15: return ejercicio15();
         case 16: return ejercicio16();
         case 17: return ejercicio17();
         case 18: return ejercicio18();
         case 19: return ejercicio19();
         case 20: return ejercicio20();
         case 21: return ejercicio21();
         case 22: return ejercicio22();
         case 23: return ejercicio23();
         case 24: return ejercicio24();
         case 25: return ejercicio25();
         case 26: return ejercicio26();
         case 27: return ejercicio27();
         case 28: return ejercicio28();
         case 29: return ejercicio29();
         case 30: return ejercicio30();
         default: cout<<"La opcion no existe"<<endl;
         return -1;
     }
}

int ejercicio1() {
    double number;
    cout<<"Ejercicio 1 IF-ELSE"<<endl;
    cout <<"Ingresa un numero: "<<endl;
    cin >> number;

    //Se identifica si el numero es positivo, negativo o en caso sea 0

    if (number > 0) {
        cout <<"El numero ingresado es positivo"<<endl;
    } else if (number < 0) {
        cout <<"El numero ingresado es negativo"<<endl;
    }
    else{
        cout<<"El numero ingresado es 0"<<endl;
    }
}
int ejercicio2() {
    int n;
    cout<<"Ejercicio 2 IF-ELSE"<<endl;
    cout << "Ingrese un numero: "<<endl;
    cin>>n;

    if (n % 2 == 0) {
        cout << "El numero " << n <<" es par"<<endl;
    } else {
        cout << "El numero " << n <<" es impar"<<endl;
    }
}
int ejercicio3() {
    int a, b, c;
    cout<<"Ejercicio 3 IF-ELSE"<<endl;
    cout<<"Digite tres numeros: "<<endl;
    cin>>a>>b>>c;

    if (a == b && b == c) {
        cout << "Los tres numeros son iguales" << endl;
    } else {
        if (a >= b && a >= c) {
            cout << "El numero " << a << " es el mayor" << endl;
        } else if (b >= a && b >= c) {
            cout << "El numero " << b << " es el mayor" << endl;
        } else {
            cout << "El numero " << c << " es el mayor" << endl;
        }
    }
}
int ejercicio4() {
    int año;
    cout<<"Ejercicio 4 IF-ELSE"<<endl;
    cout<<"El año es bisiesto o no"<<endl;
    cout<<"Escriba el año que desea: "<<endl;
    cin >> año;

    if ((año % 4 != 0 && año % 100 !=0) or (año % 400 == 0)) {
        cout <<"El año "<<año<<" no es bisiesto porque tiene 365 dias"<<endl;
    } else {
        cout <<"El año "<<año<<" es bisiesto tiene 366 dias"<<endl;
    }
}
int ejercicio5() {
    char letter;
    cout<<"Ejercicio 5 IF-ELSE"<<endl;
    cout <<"Digite una letra que deseas: "<<endl;
    cin>> letter;

    if (letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u') {
        cout << "La letra " << letter <<" es una vocal"<<endl;
    } else {
        cout << "La letra "<< letter <<" es una consonante"<<endl;
    }
}
int ejercicio6() {
    int cm;
    cout<<"Ejercicio 6 IF-ELSE"<<endl;
    cout << "Ingrese el numero que desea: "<<endl;
    cin >> cm;

    if (cm % 2 == 0) {
        cout << "El numero " <<cm<< " no es primo"<<endl;
    } else {
        cout << "El numero " <<cm<< " es primo"<<endl;
    }
}
int ejercicio7() {
    int N;
    cout<<"Ejercicio 7 IF-ELSE"<<endl;
    cout <<"Verifique si es un año valido"<<endl;
    cout << "Ingrese el año: "<<endl;
    cin >> N;

    if (N >= 1901 && N <= 2024) {
        cout <<N<<" es un año de nacimiento valido"<<endl;
    } else {
        cout <<N<<" no es un año de nacimiento valido"<<endl;
    }
}
int ejercicio8() {
    int j;
    cout<<"Ejercicio 8 IF-ELSE"<<endl;
    cout<<"Por favor ingrese un numero: "<<endl;
    cin>>j;

    if (j % 5 == 0 && j % 7 == 0) {
        cout << "Es multiplo de 5 y 7"<<endl;
    } else if (j % 5 == 0) {
        cout << "Es multiplo de 5"<<endl;
    } else if (j % 7 == 0) {
        cout << "Es multiplo de 7"<<endl;
    }else {
        cout << "No es multiplo de 5 ni de 7"<<endl;
    }
}
int ejercicio9() {
    int an;
    cout<<"Ejercicio 9 IF-ELSE"<<endl;
    cout << "Determine su calificacion mediante su nota numerica de 0 - 100"<<endl;
    cout << "Ingrese su calificacion numerica: "<<endl;
    cin >> an;

    if (an >= 90 && an <=100) {
        cout << "Su calificacion es A"<<endl;
    } else if (an >=80) {
        cout << "Su calificacion es B"<<endl;
    } else if (an >=70) {
        cout << "Su calificacion es C"<<endl;
    } else if (an >= 60) {
        cout << "Su calificacion es D"<<endl;
    } else if (an >= 0) {
        cout << "Su calificacion es F"<<endl;
    } else {
        cout <<"Calificacion no valida, debe estar entre 0 y 100"<<endl;
    }
}
int ejercicio10() {
    double precio0, PrecioDesc, PrecioFin;
    cout<<"Ejercicio 10 IF-ELSE"<<endl;
    cout<<"Determine el precio con el descuento"<<endl;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio0;

    cout<<"Ingrese el descuento: "<<endl;
    cin>>PrecioDesc;

    if (precio0 < 0 or PrecioDesc < 0) {
        cout <<"No pueden ser numeros negativos"<<endl;
    } else if (PrecioDesc > 100) {
        cout <<"El descuento no puede ser mayor a 100%"<<endl;
    } else if (PrecioDesc == 0) {
        cout <<"No hay descuento "<<precio0<<" es el precio"<<endl;
    } else {
        PrecioFin = precio0-(precio0*(PrecioDesc/100));
        cout<<"El precio con descuento es:Q "<<PrecioFin<<endl;
    }
}
int ejercicio11() {
    cout<<"Ejercicio 11 WHILE"<<endl;
    int i=1;
    while (i<=20) {
        cout << i << " ";
        i++;
    }
    cout<<endl;
}
int ejercicio12() {
    int ut, i=1;
    cout<<"Ejercicio 12 WHILE"<<endl;
    cout << "Ingrese un numero entero: "<<endl;
    cin>>ut;

    if (ut<1) {
        cout<<"El numero no es valido"<<endl;
    } else {
        while (i<=ut) {
            cout<<i<<endl;
            i++;
        }
        cout<<endl;
    }
}
int ejercicio13() {
    int bl, suma=0;
    cout<<"Ejercicio 13 WHILE"<<endl;
    cout<<"Ingrese un numero: "<<endl;
    cin>>bl;

    while (bl>=0) {
        suma+=bl;

        cout<<"Ingrese otro numero positivo: "<<endl;
        cin>>bl;
    }
    cout<<"La suma de los numeros positivos es: "<<suma<<endl;
    cout<<"Se ha detectado un numero negativo";
}
int ejercicio14() {
    int h, x=0, y=1, z=1;
    cout<<"Ejercicio 14 WHILE"<<endl;
    cout<<"Digite un numero: "<<endl;
    cin>>h;

    cout <<"1 "<<endl;
    while (z<=h) {
        z = x + y;
        cout << z << " "<<endl;
        x = y;
        y = z;
    }
    cout<<"\n";
}
int ejercicio15() {
    int rz, suma=0;
    cout<<"Ejercicio 15 WHILE"<<endl;
    cout<<"Ingrese un numero positivo: "<<endl;
    cin>>rz;

    while (rz>=0) {
        if (suma + rz > 100) {
            cout << "La suma ha alcanzado el limite de 100." << endl;
            break; // Salir porque alcanzo el limite
        }
        suma+=rz;
        cout<<"Ingrese otro numero: "<<endl;
        cin>>rz;
    }
    cout<<"La suma es: "<<suma<<endl;
}
int ejercicio16() {
    int MB, i=2;
    cout<<"Ejercicio 16 WHILE"<<endl;
    cout<<"Ingrese un numero: "<<endl;
    cin>>MB;

    while (i<=MB) {
        cout<<i<<endl;
        i+=2;
    }
}
int ejercicio17() {
    double gm;
    double suma = 0.0;
    int contador = 0;
    cout<<"Ejercicio 17 WHILE"<<endl;
    cout << "Ingresa 10 numeros:" << endl;

    // Bucle while para ingresar exactamente 10 números
    while (contador < 10) {
        cin >> gm;

        // Sumar el número a la suma total y aumentar el contador
        suma += gm; // Siempre sumamos el número
        contador++;     // Incrementamos el contador
    }

    // Calculamos la media
    double media = suma / contador;

    cout << "La media de los numeros ingresados es: " << media << endl;
}

int ejercicio18() {
    int Y;
    cout<<"Ejercicio 18 WHILE"<<endl;
    cout << "Ingresa numeros (ingresa 0 para terminar):" << endl;
    cin >> Y; // Leer el primer número antes del bucle

    while (Y != 0) {
        cout << "Ingresa otro numero: " << endl;

        // Leer el siguiente número
        cin >> Y;
    }
}
int ejercicio19() {
    int i = 1; // Comenzamos desde el primer número natural
    cout<<"Ejercicio 19 WHILE"<<endl;
    cout << "Los primeros 10 numeros naturales y sus cuadrados son:" << endl;


    while (i <= 10) {
        cout << "Numero: " << i << ", Cuadrado: " << (i * i) << endl;
        i++; // Incrementamos el número natural
    }
}
int ejercicio20() {
    int i = 1; // Comenzamos desde el primer número natural
    int producto = 1; // Inicializamos el producto en 1

    cout<<"Ejercicio 20 WHILE"<<endl;
    while (i <= 10) {
        producto *= i; // Multiplicamos el producto por el número actual
        i++; // Incrementamos el número natural
    }

    cout << "El producto de los primeros 10 numeros naturales es: " << producto << endl;
}
int ejercicio21() {
    cout<<"Ejercicio 21 FOR"<<endl;
    cout << "Los numeros pares del 2 al 20 son:" << endl;


    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl; // Imprimir el número par actual
    }
}
int ejercicio22() {
    int numero;
    cout<<"Ejercicio 22 FOR"<<endl;
    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar de " << numero << ":" << endl;

    // Bucle for para imprimir la tabla de multiplicar del número
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl; // Imprimir el resultado de la multiplicación
    }
}

int ejercicio23() {
    int x;
    int suma = 0; // Variable para almacenar la suma de los números pares
    cout<<"Ejercicio 23 FOR"<<endl;
    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un numero entero positivo: ";
    cin >> x;

    // Verificar que el número ingresado sea positivo
    if (x <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1; // Salir del programa si el número no es positivo
    }

    // Bucle for para calcular la suma de los números pares desde 1 hasta n
    for (int i = 2; i <= x; i += 2) {
        suma += i; // Sumar el número par actual
    }

    // Mostrar el resultado
    cout << "La suma de los numeros pares desde 1 hasta " << x << " es: " << suma << endl;
}

int ejercicio24() {
    int n1;
    long long factorial = 1;
    cout << "Ejercicio 24 FOR" << endl;
    // Solicitar al usuario que ingrese un número entero no negativo
    cout << "Ingresa un numero entero no negativo: ";
    cin >> n1;

    // Verificar que el número ingresado sea no negativo
    if (n1 < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
        return -1;
    }

    // Bucle for para calcular el factorial
    for (int i = 1; i <= n1; i++) {
        factorial *= i; // Multiplicar el factorial por el número actual
    }

    cout << "El factorial de " << n1 << " es: " << factorial << endl;
}

int ejercicio25() {
    cout<<"Ejercicio 25 FOR"<<endl;
    cout << "Los numeros primos del 1 al 50 son:" << endl;

    // Bucle para imprimir los números primos del 1 al 50
    for (int num = 2; num <= 50; num++) { // Comenzamos desde 2, ya que 1 no es primo
        bool esPrimo = true; // Suponemos que el número es primo

        // Verificamos si num es primo
        for (int i = 2; i * i <= num; i++) { // Solo necesitamos verificar hasta la raíz cuadrada de num
            if (num % i == 0) {
                esPrimo = false; // Si es divisible, no es primo
                break; // Salimos del bucle
            }
        }

        // Si es primo, lo imprimimos
        if (esPrimo) {
            cout << num << " ";
        }
    }

    cout << endl; // Salto de línea al final
}
int ejercicio26() {
    int z;
    cout<<"Ejercicio 26 FOR"<<endl;
    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un número entero positivo: ";
    cin >> z;

    // Inicializar la variable para la suma de los números triangulares
    int suma = 0;

    cout << "La serie de números triangulares hasta " << z << " es:" << endl;

    // Bucle for para calcular e imprimir la serie de números triangulares
    for (int i = 1; suma <= z; i++) {
        suma += i; // Sumar el número actual
        // Imprimir el número triangular actual solo si es menor o igual a n
        cout << suma * (suma <= z) << " "; // Multiplicamos por 1 si suma es menor o igual a n, de lo contrario por 0
    }

    cout << endl; // Salto de línea al final
}
int ejercicio27() {
    int n2 = 10; // Número de términos de la serie Fibonacci a imprimir
    int d = 0;  // Primer término
    int e = 1;  // Segundo término
    cout<<"Ejercicio 27 FOR"<<endl;
    cout << "Los primeros " << n2 << " terminos de la serie Fibonacci son:" << endl;

    // Bucle for para calcular e imprimir los términos de la serie Fibonacci
    for (int i = 0; i < n2; i++) {
        cout << d << " "; // Imprimir el término actual
        int siguiente = d + e; // Calcular el siguiente término
        d = e; // Actualizar a para el siguiente término
        e = siguiente; // Actualizar b para el siguiente término
    }

    cout << endl; // Salto de línea al final
}
int ejercicio28() {
    int suma = 0;
    cout<<"Ejercicio 28 FOR"<<endl;
    // Bucle for para sumar los primeros 100 números naturales
    for (int i = 1; i <= 100; i++) {
        suma += i; // Sumar el número actual a la suma total
    }

    // Imprimir el resultado
    cout << "La suma de los primeros 100 numeros naturales es: " << suma << endl;
}

int ejercicio29() {
    int aj;
    cout<<"Ejercicio 29 FOR"<<endl;
    // Solicitar al usuario que ingrese un número entero
    cout << "Ingresa un numero entero positivo: ";
    cin >> aj;

    // Verificar que el número ingresado sea positivo
    if (aj <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return -1;
    }

    cout << "Los divisores de " << aj << " son:" << endl;

    // Bucle for para encontrar e imprimir los divisores del número
    for (int i = 1; i <= aj; i++) {
        if (aj % i == 0) { // Verificar si i es un divisor de numero
            cout << i << " "; // Imprimir el divisor
        }
    }

    cout << endl; // Salto de línea al final
}
int ejercicio30() {
    int count = 0; // Contador de números primos encontrados
    int num = 2;   // Primer número a verificar
    cout<<"Ejercicio 30 FOR"<<endl;
    cout << "Los primeros 10 numeros primos son:" << endl;

    // Bucle for para encontrar los primeros 10 números primos
    for (count = 0; count < 10; num++) {
        bool esPrimo = true; // Suponemos que el número es primo

        // Verificar si num es primo
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false; // No es primo si es divisible
                break; // Salir del bucle si encontramos un divisor
            }
        }

        // Si es primo, imprimirlo y aumentar el contador
        if (esPrimo) {
            cout << num << " ";
            count++; // Aumentar el contador de números primos encontrados
        }
    }

    cout << endl; // Salto de línea al final
}

int main() {
    int opc;
    do {
        cout<<"\t MENU "<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cout<<"1. Elija un programa del 1 al 30"<<endl;
        cout<<"2. Salir"<<endl;
        cin>>opc;

        if (opc == 1) {
            int ejercicio;
            cout<<"Ingrese el numero del programa (1-30)"<<endl;
            cin>>ejercicio;
            Menu(ejercicio);
        }
    }while (opc!=2);
    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.