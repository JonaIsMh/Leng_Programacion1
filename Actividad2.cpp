#include <stdio.h>
#include <iostream>


int main()

{
    printf("\nActividad 2. Suma, Resta, Multiplicación y División - Jonathan Moreno\n");
    double num1, num2;
    //Aqui le especifico que ingrese dos numeros 
    std::cout << "Ingrese su primer valor: ";
    std::cin >> num1;
    std::cout << "Ingrese su segundo valor: ";
    std::cin >> num2;
    double sumar = num1 + num2;
    double restar = num1 - num2;
    double multiplicacion = num1 * num2;
    double division = (num2 != 0) ? (num1 / num2) : 0;
    
    std::cout << "\nResultados: \n";
    std::cout << "Suma: " << sumar << std::endl;
    std::cout << "Resta: " << restar << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion << std::endl;
    std::cout << "Division: " << division << std::endl;
    
    if(num2 !=0) //Dejamos en claro con un if estrutura condicional para avisar
    //al usuario que no se puede dividir entre cero
    std::cout << "Division: " << division << std::endl;
    else
    std::cout << "Division: no se puede dividir entre ceros " << std::endl;
    
    
    return 0;
}
