/*
    Indicaciones: 
    Paso 1: Verificar la edad del usuario para comprar un dispositivo (1 punto)
    • Si el usuario tiene menos de 16 años, no puede continuar con la compra.
    • Si tiene 16 años o más, puede proceder.

    Paso 2: Solicitar el tipo de usuario (1 punto)
    El programa debe pedir al usuario que seleccione una categoría:
    • Estudiante
    • Profesional
    • Ver todos


*/
#include <iostream>
using namespace std;


int main()
{
    //Declaracion e inicialización de variables
    int edad = 0, eleccionTipo = 0, eleccionDis = 0;
    float descuentoE = 0.020, descuentoP = 0.010, precioLB = 900, precioTE = 600,
    precioCB = 700, precioLA = 1500, precioTP = 1200, precioET = 2000, saldoFijo = 1000, precioFinal = 0, saldoRestante = 0;
    string mensaje = "", nombreProducto = "";

    //Mensaje de contexto al usuario y entrada de dato edad
    cout<<"Bienvenido al sistema de compra de dispositivos electronicos"<<endl;
    cout<<endl<<"Por favor, ingrese su edad antes de continuar: ";
    cin>>edad;
    cout<<endl;

    //Validación de edad
    if(edad>=16){
        //Si cumple con la condicion:
        cout<<"Ahora, seleccione su tipo de usuario: "<<endl;
        cout<<"1) Estudiante"<<endl;
        cout<<"2) Profesional"<<endl;
        cout<<"3) Ver todos"<<endl;
        cout<<"--Yo escogo: ";
        cin>>eleccionTipo;

        switch(eleccionTipo){
            case 1:
            //Se le muestran los dispositivvos disponibles para estudiantes
            cot<<"Muy bien estudiante estos son nuestros productos disponibles para ti: "<<endl;
            cout<<"1) Laptop Basica (900$)"<<endl;
            cout<<"2) Tablet Estudiantil (600$)"<<endl;
            cout<<"3) Chromebook (700$)"<<endl;
            cout<<"--Yo escogo: ";
            cin>>eleccionDis;
            cout<<endl<<"Muy bien, al ser estudiante tenrá un descuento del 20%";

            switch(eleccionDis){
                case 1:
                //Cálculo del precio del producto con el descuento
                precioFinal = precioLB * descuentoE;
                nombreProducto = "Laptop Basica";
                break;
                case 2:
                 //Cálculo del precio del producto con el descuento
                 precioFinal = precioTE * descuentoE;
                 nombreProducto = "Tablet Estudiantil";
                break;
                case 3: 
                //Cálculo del precio del producto con el descuento
                precioFinal = precioTE * descuentoE;
                nombreProducto = "Chromebook";
                break;
                default:
                cout<<"ERROR: Esa opcion no existe";
                return 0;
                break;
            }
            break;
            case 2:
            //Se le muestran los dispositivvos disponibles para estudiantes
            cot<<"Muy bien Profesional estos son nuestros productos disponibles para ti: "<<endl;
            cout<<"1) Laptop Avanzada (1500$)"<<endl;
            cout<<"2) Tablet Pro (1200$)"<<endl;
            cout<<"3) Estación de trabajo (2000$)"<<endl;
            cout<<"--Yo escogo: ";
            cin>>eleccionDis;
            cout<<endl<<"Muy bien, al ser profesional tenrá un descuento del 10%";

            switch(eleccionDis){
                case 1:
                //Cálculo del precio del producto con el descuento
                precioFinal = precioLA * descuentoP;
                nombreProducto = "Laptop Avanzada";
                break;
                case 2:
                 //Cálculo del precio del producto con el descuento
                 precioFinal = precioTP * descuentoP;
                 nombreProducto = "Tablet pro";
                break;
                case 3: 
                //Cálculo del precio del producto con el descuento
                precioFinal = precioET * descuentoP;
                nombreProducto = "Estacion de trabajo";
                break;
                default:
                cout<<"ERROR: Esa opcion no existe";
                return 0;
                break;
            }
            break;
            case 3:
            //Se le muestran los dispositivvos disponibles para estudiantes
            cot<<"Muy bien estos son todos nuestros productos disponibles: "<<endl;
            cout<<"1) Laptop Basica (900$)"<<endl;
            cout<<"2) Tablet Estudiantil (600$)"<<endl;
            cout<<"3) Chromebook (700$)"<<endl;
            cout<<"4) Laptop Avanzada (1500$)"<<endl;
            cout<<"5) Tablet Pro (1200$)"<<endl;
            cout<<"6) Estación de trabajo (2000$)"<<endl;
            cout<<"--Yo escogo: ";
            cin>>eleccionDis;
            cout<<endl<<"Muy bien, al no ser ni profesional ni estudiante, no tiene descuento";

            switch(eleccionDis){
                case 1:
                //Cálculo del precio del producto
                precioFinal = precioLB;
                nombreProducto = "Laptop Basica";
                break;
                case 2:
                 //Cálculo del precio del producto
                precioFinal = precioTE;
                nombreProducto = "Tablet estudiantil";
                break;
                case 3: 
                //Cálculo del precio del producto
                precioFinal = precioCB;
                nombreProducto = "Chromebook";
                break;
                case 4: 
                //Cálculo del precio del producto
                precioFinal = precioLA;
                nombreProducto = "Laptop avanzada";
                break;
                case 5: 
                //Cálculo del precio del producto
                precioFinal = precioTP;
                nombreProducto = "Tablet pro";
                break;
                case 6: 
                //Cálculo del precio del producto
                precioFinal = precioET;
                nombreProducto = "Estacion de trabajo";
                break;
                default:
                cout<<"ERROR: Esa opcion no existe";
                return 0;
                break;
            }
            break;
            default:
            //Mensaje de error pueso que es opcion no existe
            cout<<"ERROR: Escoga una opcion valida";
            return 0;
            break;
        }
                        
        //Validacion de si le alcanza
        if(precioFinal>saldoFijo){
        saldoRestante = precioFinal - saldoFijo;
        //PD: La variable saldoRetante se pasa a strign debido a que no podemos darle valores int a la variable mensaje, puesto que mensaje es string y solo acepta ese tipo de valores :D
        mensaje = "Oh NO, Parece que el precio de la "+nombreProducto+" supera su saldo, le faltan: " + to_string(saldoRestante);
        else{
        saldoRestante = saldoFijo - precioFinal;
        mensaje = "OH, parece que si le alcanza\n: Saldo original: "
        + to_string(saldoFijo) + "\nPrecio con descuento: "+to_string(precioFinal)
        +"\nSaldo restante: "+ to_string(saldoRestante);
        }
        cout<<mensaje<<endl;
        cout<<"Gracias por preferirnos, hasta pronto";
    }else{
        //Mensaje de despedida si no cumple con la condicion
        cout<<"Usted no puede continuar con la compra puesto que es un menor de 16, hasta luegooo";    
    }

    return 0;
}