Programa creado por Alejandro Aleman y Alejandro Alvarez como Proyecto del Primer Bimestre de la materia Programación I en la Escuela Politécnica Nacional.
El programa empezó siendo una calculadora cuadrática, pero terminó evolucionando en un tipo de grupo de calculadoras.

Para dar la sensación de que existe una GUI hicimos uso extensivo de la función gotoxy(int x,int y), pero esta función no se encuentra directamente integrada en la librería de VSCode o la g++, por lo que tuvimos que recrearla en incluirla
en la librería, esto es cierto también para la función SetColor(int background, int text), la cual fue proveída por nuestro profesor Patricio Paccha, de la cual también hicimos uso extensivo para diferenciar el output de la consola con 
el input del usuario. Creamos un margen y cabecera con la función margin() de la libreria.

La función menu() es un simple input reader, que retorna este input al main y ejecuta entonces el procedimiento correspondiente.

El procedimiento calc() se explica a si mismo, empieza pidiendo un numero inicial, un operador y luego un numero para continuar, una vez dado el resultado el usuario puede escoger si continuar desde el inicio, continuar usando la respuesta
obtenida, o regresar al menú. Para lograr esto se usaron un combinación de (do while)s que empiezan desde diferentes partes del procedimiento (uno se extiende durante todo el procedimiento, y otro solamente desde el operador), los cuales
son rotos solamente si el input no encaja con el input que los envía a la parte del procedimiento necesaria. Algo similar se observará en el procedimiento secondDegCalc().

El procedimiento secondDegCalc() es el principal ejemplo del uso del gotoxy(int x,int y) para simular una GUI, ya que al iniciar el procedimiento el usuario encontrara que debe llenar los espacios correspondientes a cada variable (a, b, c)
de una función cuadratica, esto se logro combinando gotoxy(int x,int y), printf y scanf. Esto nos permitió acercarnos lo más posible a una interfaz interactiva en un programa de terminal. Aunque de todas maneras nos hubiera gustado encontrar
una manera de recorrer el texto impreso mientras se ingresan datos. Aparte del uso del gotoxy(int x,int y), tambien se idealizo el uso de una funcion cont() en la libreria que permita detener el display de la secuencia de procedimiento hasta
que el usuario presione una tecla (la cual se recomienda no ser las flechas, ya que se registran dos inputs), tambien hemos creado un procedimiento conDeg en la librería que nos sirve para verificar si el usuario quiere seguir usando esta 
feature o regresarse al menu. En contraste al procedimiento calc(), aquí utilizamos un procedimineto de librería para que el usuario decida si continuar o no por cuestiones de optimización, ya que este procedimiento se aplica tres veces 
(cuando a=0, d=0 y cuando ya finaliza el procedimiento). Tambien cabe mencionar que este procedimiento tiene partes en las que "termina" antes de lo usual, siendo cuando a1=0 ya que no exisitiría solución, o cuando d=0 ya que ambas respuestas
serían iguales, donde igualmente usamos conDeg(). También mencionaré que antes de cualquier tipo de resolucion se calcula el determinante para así saber si existen o no soluciones reales, o si son iguales. Este procedimiento igualmente hace
uso de (do while)s de diferente longitud para causar su reinicio o su salida al menu. Tambien tiene un par de ifs para colocar una "i" si la respuesta calculada es parte de los numeros imaginarios (d<0).

Otra mención importante es el procedimiento end() de la librería, que nos permite mostrarle un mensaje de finalización al usuario y pedirle que ingrese un caracter para, o bien retornar al menu, o bien finalizar todo el programa.

