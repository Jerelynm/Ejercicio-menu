// Programa que contiene un menu con funciones y procedimientos

#include <iostream>
using namespace std;

//programa que utiliza el procedimiento void
void ejercicio1() {
    double number;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Identifica si el numero es positivo, negativo o 0"<<endl;
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
 //programa con void

void ejercicio2() {
    int n;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determina si el numero es par o impar"<<endl;
    cout <<"Ingrese un numero: "<<endl;
    cin >> n;

    if (n % 2==0) {
        cout <<"El nuermo "<<n<<" es par"<<endl;
    } else {
        cout <<"El numero "<<n<<" es impar"<<endl;
    }
}

//ejercicio utilizando la funcion int
int ejercicio3() {
    int a, b, c;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determine el numero mayor"<<endl;
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
    return 0;
}

//ejercicio con procedimiento void
void ejercicio4() {
    int año;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determine si el año es bisiesto o no"<<endl;
    cout<<"Escriba el año que desea: "<<endl;
    cin >> año;

    if ((año % 4 != 0 && año % 100 !=0) or (año % 400 == 0)) {
        cout <<"El año "<<año<<" no es bisiesto porque tiene 365 dias"<<endl;
    } else {
        cout <<"El año "<<año<<" es bisiesto tiene 366 dias"<<endl;
    }
}
//ejercicio con procedimiento void
void ejercicio5() {
    char letter;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determine si la letra es vocal o consonante"<<endl;
    cout <<"Digite una letra que deseas: "<<endl;
    cin>> letter;

    if (letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u') {
        cout << "La letra " << letter <<" es una vocal"<<endl;
    } else {
        cout << "La letra "<< letter <<" es una consonante"<<endl;
    }
}
//ejercicio con funcion int
int ejercicio6() {
    int cm;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Identifique si el numero es primo"<<endl;
    cout << "Ingrese el numero que desea: "<<endl;
    cin >> cm;

    if (cm % 2 == 0) {
        cout << "El numero " <<cm<< " no es primo"<<endl;
    } else {
        cout << "El numero " <<cm<< " es primo"<<endl;
    }
    return 0;
}
//ejercicio con funcion int
int ejercicio7() {
    int N;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout <<"Verifique si es un año de nacimiento es valido"<<endl;
    cout << "Ingrese el año: "<<endl;
    cin >> N;

    if (N >= 1901 && N <= 2024) {
        cout <<N<<" es un año de nacimiento valido"<<endl;
    } else {
        cout <<N<<" no es un año de nacimiento valido"<<endl;
    }
    return 0;
}
//ejercicio con void
void ejercicio8() {
    int j;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Multiplo de 5 y 7"<<endl;
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
//ejercicio con procedimiento
void ejercicio9() {
    int an;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
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
//ejercicio con procedimiento
void ejercicio10() {
    double precio0, PrecioDesc, PrecioFin;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
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
//ejercicio con procedimiento
void ejercicio11() {
    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Numeros 1-20 en forma ascendente"<<endl;
    int i=1;
    while (i<=20) {
        cout << i << " ";
        i++;
    }
    cout<<endl;
}
//ejercicio con void
void ejercicio12() {
    int ut, i=1;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determine todos los numeros hasta el que ingrese"<<endl;
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
//programa con int
int ejercicio13() {
    int bl, suma=0;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Sume numeros positivos"<<endl;
    cout<<"Ingrese un numero: "<<endl;
    cin>>bl;

    while (bl>=0) {
        suma+=bl;

        cout<<"Ingrese otro numero positivo: "<<endl;
        cin>>bl;
    }
    cout<<"La suma de los numeros positivos es: "<<suma<<endl;
    cout<<"Se ha detectado un numero negativo";

    return 0;
}
//programa con void
void ejercicio14() {
    int h, x=0, y=1, z=1;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Secuencia de Fibonacci hasta el numero ingresado"<<endl;
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
//programa con int
int ejercicio15() {
    int rz, suma=0;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Numeros que suman 100"<<endl;
    cout<<"Ingrese un numero positivo: "<<endl;
    cin>>rz;

    while (rz>=0) {
        if (suma + rz > 100) {
            cout << "La suma ha alcanzado el limite de 100." << endl;
            break;
        }
        suma+=rz;
        cout<<"Ingrese otro numero: "<<endl;
        cin>>rz;
    }
    cout<<"La suma es: "<<suma<<endl;

    return 0;
}
//programa con void
void ejercicio16() {
    int MB, i=2;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Todos los numeros pares hasta el ingresado"<<endl;
    cout<<"Ingrese un numero: "<<endl;
    cin>>MB;

    while (i<=MB) {
        cout<<i<<endl;
        i+=2;
    }
}
//programa con int
int ejercicio17() {
    double gm;
    double suma = 0.0;
    int contador = 0;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"La media de una serie de numeros"<<endl;
    cout << "Ingresa 10 numeros:" << endl;

    // Bucle while para ingresar exactamente 10 números
    while (contador < 10) {
        cin >> gm;

        suma += gm;
        contador++;
    }

    // Calculamos la media
    double media = suma / contador;

    cout << "La media de los numeros ingresados es: " << media << endl;

    return 0;
}
//programa con void
void ejercicio18() {
    int Y;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Imprimime numeros y se detiene en 0"<<endl;
    cout << "Ingresa numeros (ingresa 0 para terminar):" << endl;
    cin >> Y;

    while (Y != 0) {
        cout << "Ingresa otro numero: " << endl;

        // Leer el siguiente número
        cin >> Y;
    }
}
//programa con void
void ejercicio19() {
    int i = 1;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout << "Los primeros 10 numeros naturales y sus cuadrados son:" << endl;


    while (i <= 10) {
        cout << "Numero: " << i << ", Cuadrado: " << (i * i) << endl;
        i++;
    }
}
//prograrma con int
int ejercicio20() {
    int i = 1;
    int producto = 1;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    while (i <= 10) {
        producto *= i;
        i++;
    }

    cout << "El producto de los primeros 10 numeros naturales es: " << producto << endl;

    return 0;
}
//programa con void
void ejercicio21() {
    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout << "Los numeros pares del 2 al 20 son:" << endl;


    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl;
    }
}
//programa con void
void ejercicio22() {
    int numero;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Tabla de multiplicar de un numero"<<endl;
    cout << "Ingresa un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar de " << numero << ":" << endl;

    // Bucle for para imprimir la tabla de multiplicar del número
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}
//programa con int
int ejercicio23() {
    int x;
    int suma = 0;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Calcule la suma de todos los numeros pares hasta el ingresado"<<endl;
    cout << "Ingresa un numero entero positivo: ";
    cin >> x;

    if (x <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1;
    }

    // Bucle for para calcular la suma de los números pares desde 1 hasta n
    for (int i = 2; i <= x; i += 2) {
        suma += i;
    }


    cout << "La suma de los numeros pares desde 1 hasta " << x << " es: " << suma << endl;

    return 0;
}
//programa con int
int ejercicio24() {
    int n1;
    long long factorial = 1;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determine el factorial de un numero"<<endl;
    cout << "Ingresa un numero entero no negativo: ";
    cin >> n1;


    if (n1 < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
        return 1; // Salir del programa si el número es negativo
    }


    for (int i = 1; i <= n1; i++) {
        factorial *= i;
    }


    cout << "El factorial de " << n1 << " es: " << factorial << endl;

    return 0;
}
//programa con void
void ejercicio25() {
    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout << "Los numeros primos del 1 al 50 son:" << endl;


    for (int num = 2; num <= 50; num++) {
        bool esPrimo = true;


        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }


        if (esPrimo) {
            cout << num << " ";
        }
    }

    cout << endl;
}
//programa con int
int ejercicio26() {
    int z;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determine la serie"<<endl;
    cout << "Ingresa un número entero positivo: ";
    cin >> z;


    int suma = 0;

    cout << "La serie de números triangulares hasta " << z << " es:" << endl;


    for (int i = 1; suma <= z; i++) {
        suma += i;

        cout << suma * (suma <= z) << " ";
    }

    cout << endl;

    return 0;
}
//programa con void
void ejercicio27() {
    int n2 = 10;
    int d = 0;
    int e = 1;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout << "Los primeros " << n2 << " terminos de la serie Fibonacci son:" << endl;


    for (int i = 0; i < n2; i++) {
        cout << d << " ";
        int siguiente = d + e;
        d = e;
        e = siguiente;
    }

    cout << endl;
}
//programa con void
void ejercicio28() {
    int suma = 0;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    for (int i = 1; i <= 100; i++) {
        suma += i;
    }


    cout << "La suma de los primeros 100 numeros naturales es: " << suma << endl;
}
//programa con int
int ejercicio29() {
    int aj;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout<<"Determine todos los divisores de un numero"<<endl;
    cout << "Ingresa un numero entero positivo: ";
    cin >> aj;


    if (aj <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1;
    }

    cout << "Los divisores de " << aj << " son:" << endl;


    for (int i = 1; i <= aj; i++) {
        if (aj % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
//programa con void
void ejercicio30() {
    int count = 0;
    int num = 2;

    cout<<"BIENVENIDO AL PROGRAMA"<<endl;
    cout << "Los primeros 10 numeros primos son:" << endl;


    for (count = 0; count < 10; num++) {
        bool esPrimo = true;


        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }


        if (esPrimo) {
            cout << num << " ";
            count++;
        }
    }

    cout << endl;
}

int main() {
    int opc;

    do {
        cout <<"\t MENU  "<<endl;
        cout<<"Selecciona una opcion"<<endl;
        cout<<"1. Elije un programa del 1 al 30"<<endl;
        cout<<"2. Salir"<<endl;
        cin>>opc;

        if (opc == 1) {
            cout <<"Ingrese un numero (1-30): "<<endl;
            cin>>opc;

            switch (opc) {
                case 1: ejercicio1(); break;
                case 2: ejercicio2(); break;
                case 3: ejercicio3(); break;
                case 4: ejercicio4(); break;
                case 5: ejercicio5(); break;
                case 6: ejercicio6(); break;
                case 7: ejercicio7(); break;
                case 8: ejercicio8(); break;
                case 9: ejercicio9(); break;
                case 10: ejercicio10(); break;
                case 11: ejercicio11(); break;
                case 12: ejercicio12(); break;
                case 13: ejercicio13(); break;
                case 14: ejercicio14(); break;
                case 15: ejercicio15(); break;
                case 16: ejercicio16(); break;
                case 17: ejercicio17(); break;
                case 18: ejercicio18(); break;
                case 19: ejercicio19(); break;
                case 20: ejercicio20(); break;
                case 21: ejercicio21(); break;
                case 22: ejercicio22(); break;
                case 23: ejercicio23(); break;
                case 24: ejercicio24(); break;
                case 25: ejercicio25(); break;
                case 26: ejercicio26(); break;
                case 27: ejercicio27(); break;
                case 28: ejercicio28(); break;
                case 29: ejercicio29(); break;
                case 30: ejercicio30(); break;
                default: cout<<"Esta opcion no existe"<<endl;
            }
        }

    }while (opc !=2);
    return 0;
}