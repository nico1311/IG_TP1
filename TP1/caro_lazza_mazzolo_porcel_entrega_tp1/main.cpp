/**
 * PRE-ENTREGA TP1
 * INTEGRANTES:
 * - Caro, Nicolás
 * - Lazza, Camila
 * - Mazzolo, Nazareno
 * - Porcel, Nicolás
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    enum item
    {
        DAGA,
        HACHA,
        MARTILLO,
        LIBRO,
        COPA_DEL_MUNDO,
        BOTELLA,
        BOLSA_CERRADA_DE_CAFE
    };

    bool salir_del_juego = false;
    int opcion = 0;

    while (!salir_del_juego)
    {
        do
        {
            system("clear");
            // Menu de Inicio
            cout << " ______________________________________________________________________________________________________________________ " << endl;
            cout << "|                                                                                                                      |" << endl;
            cout << "|                                                                                                                      |" << endl;
            cout << "|                                                                                                                      |" << endl;
            cout << "|                                ____  _                    _                                                          |" << endl;
            cout << "|                               / __ \\| |                  | |                                                         |" << endl;
            cout << "|                              | |  | | |_ _ __ ___        | |_   _  ___  __ _  ___                                    |" << endl;
            cout << "|                              | |  | | __| '__/ _ \\   _   | | | | |/ _ \\/ _` |/ _ \\                                   |" << endl;
            cout << "|                              | |__| | |_| | | (_) | | |__| | |_| |  __/ (_| | (_) |                                  |" << endl;
            cout << "|                               \\____/ \\__|_|  \\___/   \\____/ \\__,_|\\___|\\__, |\\___/                                   |" << endl;
            cout << "|                                | |      |  \\/  |                        __/ |                                        |" << endl;
            cout << "|                              __| | ___  | \\  / | __ _ _____ __ ___   __|___/__ _ __ __ _ ___                         |" << endl;
            cout << "|                             / _` |/ _ \\ | |\\/| |/ _` |_  / '_ ` _ \\ / _ \\| '__| '__/ _` / __|                        |" << endl;
            cout << "|                            | (_| |  __/ | |  | | (_| |/ /| | | | | | (_) | |  | | | (_| \\__ \\                        |" << endl;
            cout << "|                             \\__,_|\\___| |_|  |_|\\__,_/___|_| |_| |_|\\___/|_|  |_|  \\__,_|___/                        |" << endl;
            cout << "|                                                                                                                      |" << endl;
            cout << "|                                                                                                                      |" << endl;
            cout << "|                                                                                                                      |" << endl;
            cout << "|______________________________________________________________________________________________________________________|" << endl;
            cout << "\nMENU PRINCPAL";
            cout << "\nSeleccione la opción ingresando el número correspondiente y presionando ENTER" << endl;
            cout << "1 - Juego Nuevo\n2 - Salir\n"
                 << endl;
            cin >> opcion;

            if (cin.fail())
            { // Se introdujo algo que no es numérico
                cout << "Por favor, ingresa un número válido." << endl;
                cin.clear();             // Limpia el estado de error
                cin.ignore(10000, '\n'); // Se asume que no habrá más de 10000 caracteres inválidos
                opcion = 0;
                cout << "Presiona ENTER para continuar..." << endl;
                cin.get();
            }
            else
            {
                if (opcion != 1 && opcion != 2)
                { // Si se ingresó un número diferente a 1 o 2
                    cout << "Opción no válida. Por favor, ingresa 1 o 2." << endl;
                    cin.ignore(10000, '\n');
                    opcion = 0; // Reinicia la opción para que el bucle continúe
                    cout << "Presiona ENTER para continuar..." << endl;
                    cin.get();
                }
                else
                {
                    cin.ignore(); // Limpia el buffer de entrada (después sale del bucle)
                }
            }
        } while (opcion == 0);

        if (opcion == 2)
        {
            salir_del_juego = true;
        }
        else
        {
            // Variables con el estado de los items
            bool daga_disponible = true,
                 hacha_disponible = true,
                 martillo_disponible = true,
                 libro_disponible = true,
                 botella_disponible = true,
                 copa_disponible = true,
                 bolsa_cafe_disponible = true;

            // Variables para controlar el estado clear de cada enemigo
            bool slime_clear = false,
                 esqueleto_clear = false,
                 araña_clear = false,
                 tablon_clear = false,
                 alcalde_clear = false;

            // Variables de control del juego
            bool game_over = false;
            int vidas = 10;
            string entrada;

            system("clear");

            for (int i = 0; i < 7; i++)
            {
                switch (i)
                {
                case (item)DAGA:
                    if (daga_disponible)
                    {
                        cout << " |Daga| ";
                    }
                    break;

                case (item)HACHA:
                    if (hacha_disponible)
                    {
                        cout << " |Hacha| ";
                    }
                    break;

                case (item)MARTILLO:
                    if (martillo_disponible)
                    {
                        cout << " |Martillo| ";
                    }
                    break;

                case (item)LIBRO:
                    if (libro_disponible)
                    {
                        cout << " |Libro| ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (copa_disponible)
                    {
                        cout << " |Copa_Del_Mundo| ";
                    }
                    break;

                case (item)BOTELLA:
                    if (botella_disponible)
                    {
                        cout << " |Botella| ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (bolsa_cafe_disponible)
                    {
                        cout << " |Bolsa_Cerrada_De_Cafe| ";
                    }
                    break;

                default:
                    break;
                }
            }
            cout << endl;

            cout << "\nBienvenidos a \"Otro Juego de Mazmorras\", una aventura de texto ambientada en un mundo de fantasía donde todo puede\nser posible" << endl;
            cout << "Antes de comenzar, te vamos a comentar como se juega el juego" << endl;
            cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
            cin.get();

            system("clear");

            for (int i = -1; i < 7; i++)
            {
                switch (i)
                {
                case -1:
                    cout << "Vidas: " << vidas << "   ";

                    break;

                case (item)DAGA:
                    if (daga_disponible)
                    {
                        cout << " |Daga| ";
                    }
                    break;

                case (item)HACHA:
                    if (hacha_disponible)
                    {
                        cout << " |Hacha| ";
                    }
                    break;

                case (item)MARTILLO:
                    if (martillo_disponible)
                    {
                        cout << " |Martillo| ";
                    }
                    break;

                case (item)LIBRO:
                    if (libro_disponible)
                    {
                        cout << " |Libro| ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (copa_disponible)
                    {
                        cout << " |Copa_Del_Mundo| ";
                    }
                    break;

                case (item)BOTELLA:
                    if (botella_disponible)
                    {
                        cout << " |Botella| ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (bolsa_cafe_disponible)
                    {
                        cout << " |Bolsa_Cerrada_De_Cafe| ";
                    }
                    break;

                default:
                    break;
                }
            }
            cout << endl;

            cout << "\n\nComo podrás observar, a la derecha de las vidas hay varios nombres de objetos, en la parte superior de la pantalla." << endl;
            cout << "Este es nuestro inventario." << endl;
            cout << "\n\nPara poder avanzar en el juego deberemos utilizar verbos asociados a estos objetos, para poder usarlos y avanzar." << endl;
            cout << "\n****Es importante escribir las palabras en minúscula, ya que de otra forma no serán detectadas.****\n"
                 << endl;
            cout << "Cuando utilicemos el verbo/objeto correcto, avanzaremos en la historia y perderemos el objeto." << endl;
            cout << "Así, pueden darse varios desenlaces a medida de que avances y uses distintos objetos." << endl;
            cout << "Algunos objetos se perderán si se usan en el momento incorrecto." << endl;
            cout << "\nCada vez que fallemos al tratar de descubrir una palabra/utilizar un objeto, perderemos una vida." << endl;
            cout << "Cuando nuestras vidas lleguen a 0, perderemos el juego y deberemos comenzar desde el principio." << endl;
            cout << "\n\n¡Disfruta el juego!" << endl;
            cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
            cin.get();
            system("clear");

            for (int i = -1; i < 7; i++)
            {
                switch (i)
                {
                case -1:
                    cout << "Vidas: " << vidas << "   ";

                    break;

                case (item)DAGA:
                    if (daga_disponible)
                    {
                        cout << " |Daga| ";
                    }
                    break;

                case (item)HACHA:
                    if (hacha_disponible)
                    {
                        cout << " |Hacha| ";
                    }
                    break;

                case (item)MARTILLO:
                    if (martillo_disponible)
                    {
                        cout << " |Martillo| ";
                    }
                    break;

                case (item)LIBRO:
                    if (libro_disponible)
                    {
                        cout << " |Libro| ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (copa_disponible)
                    {
                        cout << " |Copa_Del_Mundo| ";
                    }
                    break;

                case (item)BOTELLA:
                    if (botella_disponible)
                    {
                        cout << " |Botella| ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (bolsa_cafe_disponible)
                    {
                        cout << " |Bolsa_Cerrada_De_Cafe| ";
                    }
                    break;

                default:
                    break;
                }
            }
            cout << endl;

            cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << endl
                 << endl;
            cout << "                uu                 ,ccc,,,,,,,,xx.                                   cx,,,,,,xc                      .," << endl;
            cout << "                 u               ,cc, ..     ...cx,                                  cc      cc                    .,,," << endl;
            cout << "            uuuuuu               cc   ,,     .. ,xc.                                 cx.     cc                  .,l,  " << endl;
            cout << "       uu  uuxc                  ,xxc.  .,.    .cc.                             .,cxxxxc,,,,,x0xxl,,.          .,,....," << endl;
            cout << "       uu   uuuuu    ,,,,,,,,.    .cxc.   .,.  .xx.                             .,,,,.       .,,,,,,.        .,cl.  ,xx" << endl;
            cout << "uuuuuu          uuuu,,,      ,,.    ,ccc,,lxxc,,c,                            .,,.     _   _       .,,.    .,c,..   ,xx" << endl;
            cout << "      uuuuuu      uuu        ...,     cc .,,,c,                              ,c.   ___-     -____     ,c. .,lxxl,,,,,cx" << endl;
            cout << "       uuuuu       u   000000c,.,,.   ,l. ,, cc                              cl     _         _        cc.ccxx,,,,,,,,," << endl;
            cout << "                  u   00   000c   .   .c, ,, cc                              cc    | |       | |        lc   cc        " << endl;
            cout << "             uuuuu    00    00l  ..   cc     cc                              cc    |_|       |_|        cc   cc        " << endl;
            cout << "uuuuuuuuu    uuuu     00    00c  ..c, ,c. .,.lx.                             cc                         cc   ccc,cl,   " << endl;
            cout << "uuuuuu          uuu,,,0,,,,0000c..,,ccc,cc .cc,cc.                            cc       _____           cc    ccx,xx, cc" << endl;
            cout << "                uuu                                                          .,,.     -     -        ,c.     ccc,cc, cc" << endl;
            cout << "               uuu                                                             ,l...           .,. .,,.      cc      cc" << endl;
            cout << "      uuuuu uuuuu                                                               .,cxc,,,,,,,,,,cxxxx,        cc      cc" << endl;
            cout << "uuuuuuuuxuuuuuu                                                               .,,,,c00xxxxxxxxxxc,,,,,.      cx,,,,,,xx" << endl;
            cout << "      |                                                                       .c,    .c0WWWWWx,.      .l,              " << endl;
            cout << "      |                                                                     ,c.     .cc,xW0cc,        lc               " << endl;
            cout << "      |                                                                    .c,     .c, .xWx.cc        cl               " << endl;
            cout << "      |                                                                    cc       cc cWWWlcc        cl               " << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "El Alcalde, aparentemente desesperado y nervioso, nos cuenta que los últimos aventureros no volvieron de" << endl;
            cout << "la mazmorra y está preocupado de que el demonio que la habita vuelva a atacar la aldea. Ya no vienen aventureros, así" << endl;
            cout << "que somos la única persona a la que puede recurrir para entrar en las profundidades de la mazmorra." << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;

            cin.get();
            system("clear");
            for (int i = -1; i < 7; i++)
            {
                switch (i)
                {
                case -1:
                    cout << "Vidas: " << vidas << "   ";

                    break;

                case (item)DAGA:
                    if (daga_disponible)
                    {
                        cout << " |Daga| ";
                    }
                    break;

                case (item)HACHA:
                    if (hacha_disponible)
                    {
                        cout << " |Hacha| ";
                    }
                    break;

                case (item)MARTILLO:
                    if (martillo_disponible)
                    {
                        cout << " |Martillo| ";
                    }
                    break;

                case (item)LIBRO:
                    if (libro_disponible)
                    {
                        cout << " |Libro| ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (copa_disponible)
                    {
                        cout << " |Copa_Del_Mundo| ";
                    }
                    break;

                case (item)BOTELLA:
                    if (botella_disponible)
                    {
                        cout << " |Botella| ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (bolsa_cafe_disponible)
                    {
                        cout << " |Bolsa_Cerrada_De_Cafe| ";
                    }
                    break;

                default:
                    break;
                }
            }
            cout << endl;

            cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "@@%######*+=-: .=*##*==::: .-*#####+==::::::.  ::::::...:::::: .: :-====-.:=*##+= ::++++++::  :=++===:  " << endl;
            cout << "########*==:. :=*###==-::. :-+###*+=-::::....   .=%@@@#*+=-.::::  ::-===-.-=*##*=..-+++++-:. .:===-:  .:" << endl;
            cout << "#####**==-:. .=*###*==:::  :-=++==::..  #@%#+==.@@@@@@@@#**=-:.::..::-==:.:=*##*=..=++++-:: .::::. .::::" << endl;
            cout << "##*+===-::  :=*###*+=-::: :::===:-*####%@@@@@@@@@@@@@@@@%+=+%%@@#.-=..:::::=*##+=.:=+++-:: .:-::::::::::" << endl;
            cout << "*====-::.  .=*@####+=-::.-*=:::.#@@@@@**@@@@@@%#@@@@@@@#=%@@@@@@@#####*:.::-+##==::=+=-::.:====-:::::::." << endl;
            cout << "==-::::.  :=*%@###*==::.-**=: :+%@*+===--+%@%#*+=-+*+===+*%@@@@@%+#%@@@@+  -=*+==::--:::::=*====-:::::: " << endl;
            cout << "-:::::.  :=+#@%###*=-:..+#+::=*##*++++-:.               --=+*#+=-=====*%%*-.=====::::::::=###+===-::::  " << endl;
            cout << "::::.    -=*@@####+=:: :+=-.-=+*%%@@@@%                          :=++++###+=.===::::::.:=#####+===::::  " << endl;
            cout << "::. .=::.-=#@%###*==:. :-:.:%@@@%#**%@-                           %@@@@%#*===.=::::::..-+#@@###+==-:::  " << endl;
            cout << ". .++=-:.:=#%####+=-:.  :@@@@@@@@@@@%:                            -%**#@@@@@@= .::::. .-+%@@@##*+=-:::  " << endl;
            cout << ".+##*=-::.=*###*===::: +@@@@@@@@@@@@@*                             .%@@@@@@@@@@%- :    :=+%@@@##*==:::. " << endl;
            cout << "#@@#*=-:::=+#*+==-::: +#@@@@@@#@@@@@@#                            .#@@@@@@@@@@@@@+  ::. :=+#@%##*==:::. " << endl;
            cout << "@@@#*=-:::-=====-::. =##@@@@%#@@@@*++*                            -*#%@@@@#%@@@@@#= :::. :-=*###*==:::. " << endl;
            cout << "@@@#*=-:::.===-:::.::+###@@###@@@#+++-                             *++#@@@%#%@@@###-.:::. :-=+*#+==:::: " << endl;
            cout << "@@##+=-::. :-:::::::+++#######@%#++++                              ++++#@@%###@%###+:.:::: ::======::-- " << endl;
            cout << "=  -=*#*+:.::::::::.=++*#**####**++++                               +++*%%%######*+++.:==:: ::==+*##+=- " << endl;
            cout << "     ======+*#+=:-=: =*###+++=++==+++                               +++*#+*###*####*- .=#+=+#*+======   " << endl;
            cout << "  ..   .========**=::*#####+========                                 +====+=+*######*:.=#+==+====-   ..." << endl;
            cout << ":.......  ::-====+#-=###########*+=                                   ====**##########+#+====::.   .  .." << endl;
            cout << "=:.  .......-======#+*@##########==                                    +++*###########*======- .....   ." << endl;
            cout << "-==. .  .....=====-+#**@##*+**##*=+                                   :+==############=-====-......   .=" << endl;
            cout << "-===: .. ....-===.==***+%++###+==*=                                    ====@########%*==:===: .......-==" << endl;
            cout << "===*+=::......++.-==+**+++########+                                     =+####**#@#**+==-:+=.   ..::=*+=" << endl;
            cout << "==+*====::-. .--.====*-==++#@@@@@@                                     ########*++*+*====.=:...=.:====*+" << endl;
            cout << "==+=====.:=+#.::=====*-===+**##%@                                       @@@%@+++=+=++====--.:#==:.====++" << endl;
            cout << "=======:.:==#+*-====*+**+++**++++                                        ##***+++++*+*====-*+#==:.-=====" << endl;
            cout << "=+=====: :-=*===++-..----------=+%%#*+==--===++***#########**+++=+===%%%#==----------.:-++===*=-: -===-=" << endl;
            cout << ":===-==-  :=*====+:.  .:--:-==+*+=#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*=+*+==-:-::.  .-====++-.  ===:==" << endl;
            cout << " -==-:-=   .=+=+=:==:. ...=======+++@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+++===-==- .. .:+=-===+=.   =-:===" << endl;
            cout << "  ::::::     .:=- :===+: ==--======+#**#@@@@@@@@@@@@@@@@@@@@@@@@@@%###*======-=== :+==-..==:.     :::::." << endl;
            cout << "  .::::.      ::: .::::=*##*****######%%%%%%%%%%%%%@@@@@@@@@@@@@%%%%######****=+++-:::: .::.      :::::." << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Entras en la mazmorra con la determinación de defender a tu gente, eliminando el problema de raíz de una vez por todas." << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;

            cin.get();
            system("clear");

            if (!game_over)
            {

                do
                {
                    for (int i = -1; i < 7; i++)
                    {
                        switch (i)
                        {
                        case -1:
                            cout << "Vidas: " << vidas << "   ";

                            break;

                        case (item)DAGA:
                            if (daga_disponible)
                            {
                                cout << " |Daga| ";
                            }
                            break;

                        case (item)HACHA:
                            if (hacha_disponible)
                            {
                                cout << " |Hacha| ";
                            }
                            break;

                        case (item)MARTILLO:
                            if (martillo_disponible)
                            {
                                cout << " |Martillo| ";
                            }
                            break;

                        case (item)LIBRO:
                            if (libro_disponible)
                            {
                                cout << " |Libro| ";
                            }
                            break;

                        case (item)COPA_DEL_MUNDO:
                            if (copa_disponible)
                            {
                                cout << " |Copa_Del_Mundo| ";
                            }
                            break;

                        case (item)BOTELLA:
                            if (botella_disponible)
                            {
                                cout << " |Botella| ";
                            }
                            break;

                        case (item)BOLSA_CERRADA_DE_CAFE:
                            if (bolsa_cafe_disponible)
                            {
                                cout << " |Bolsa_Cerrada_De_Cafe| ";
                            }
                            break;

                        default:
                            break;
                        }
                    }
                    cout << endl;

                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << endl;
                    cout << "                        |                                                            |                           " << endl;
                    cout << "                        |                                                            |                           " << endl;
                    cout << "                        |                                                            |                           " << endl;
                    cout << "                        |                                                            |                           " << endl;
                    cout << "                        |                     ________________                       |                           " << endl;
                    cout << "                        |        ~~~         |                 |          ~~~        |                           " << endl;
                    cout << "                        |       TTTTT        |                 |         TTTTT       |                           " << endl;
                    cout << "                        |        T_T         |                 |          T_T        |                           " << endl;
                    cout << "                        |         |          | OOOOOOOOOOOOOO  |           |         |                           " << endl;
                    cout << "                        |        [|]      oOOOO              OOOOo        [|]        |                           " << endl;
                    cout << "                        |         |    OOO   |                 |  OOO      |         |                           " << endl;
                    cout << "                        |             O      |                 |     O               |                           " << endl;
                    cout << "                        |            O       | U             U |      O              |                           " << endl;
                    cout << "                       _|___________O________|_________________|_____  O_____________|_                          " << endl;
                    cout << "                     _X             0      ooooooooooooooooooooooo     O               X_                        " << endl;
                    cout << "                   _X               0 ooooo                       oooo 0                 X_                      " << endl;
                    cout << "                 _X                 0o                                oO                   X_                    " << endl;
                    cout << "               _X                    0________________________________O                      X_                  " << endl;
                    cout << "             _X                                                                                X_                " << endl;
                    cout << "            X                                                                                    X               " << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "SLIME" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "\nEscribe y presiona ENTER - (usa solo minúsculas)" << endl;
                    cin >> entrada;
                    cin.ignore();
                    cout << endl;

                    if ((entrada == "apuñalar" || entrada == "pinchar" || entrada == "clavar" || entrada == "lanzar") && daga_disponible)
                    {
                        cout << "Destruyes el nucleo del slime con tu daga, pero esta se desintegra en el proceso." << endl;
                        daga_disponible = false;
                        slime_clear = true;
                    }
                    else if ((entrada == "cortar" || entrada == "tajar" || entrada == "talar") && hacha_disponible)
                    {
                        cout << "Partes el slime en 2, pero con tanta fuerza que el hacha se queda clavada en el piso y no la puedes sacar." << endl;
                        hacha_disponible = false;
                        slime_clear = true;
                    }
                    else if ((entrada == "martillar" || entrada == "romper" || entrada == "triturar" || entrada == "destruir") && martillo_disponible)
                    {
                        cout << "Destruyes el slime y el mango se parte, ya no sirve." << endl;
                        martillo_disponible = false;
                        slime_clear = true;
                    }
                    else if (entrada == "leer")
                    {
                        cout << "Es un slime, vulnerable a casi todo objeto metálico que tengas a disposición." << endl;
                    }
                    else if (entrada == "revolear" && libro_disponible)
                    {
                        cout << "Le revoleas el libro y el slime desintegra las páginas" << endl;
                        libro_disponible = false;
                    }
                    else if ((entrada == "presumir" || entrada == "aplastar") && copa_disponible)
                    {
                        cout << "Quieres presumir de la copa que trajo Messi, y se te cae arriba del bicho, el cual muere aplastado humillantemente pero" << endl;
                        cout << "no sin antes desintegrar la copa con sus últimas fuerzas." << endl;
                        copa_disponible = false;
                        slime_clear = true;
                    }
                    else if ((entrada == "derramar" || entrada == "regalar" || entrada == "verter") && botella_disponible)
                    {
                        cout << "Viertes el contenido del envase en la criatura, la cual muere agonizantemente por el veneno." << endl;
                        botella_disponible = false;
                        slime_clear = true;
                    }
                    else if (entrada == "beber" && botella_disponible)
                    {
                        cout << "¡Mueres agonizantemente por el veneno!" << endl;
                        cout << "Porque te tomaste la botella?... Borrachin." << endl;
                        vidas = 0;
                    }
                    else if (entrada == "abrir" && bolsa_cafe_disponible)
                    {
                        cout << "El slime se come la bolsa y su contenido, estaba rico." << endl;
                        bolsa_cafe_disponible = false;
                    }
                    else
                    {
                        vidas -= 1;
                        cout << "No logras hacer nada y el slime te escupe ácido, lastimándote en el proceso." << endl;
                    }

                    if (vidas == 0 || entrada == "salir")
                    {
                        game_over = true;
                        cout << "Has muerto patéticamente en batalla contra un SLIME, deberías sentir vergüenza." << endl;
                        cout << "*********************************GAME OVER*************************************" << endl;
                    }

                    cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
                    cin.get();
                    system("clear");

                    if (slime_clear)
                    {
                        for (int i = -1; i < 7; i++)
                        {
                            switch (i)
                            {
                            case -1:
                                cout << "Vidas: " << vidas << "   ";

                                break;

                            case (item)DAGA:
                                if (daga_disponible)
                                {
                                    cout << " |Daga| ";
                                }
                                break;

                            case (item)HACHA:
                                if (hacha_disponible)
                                {
                                    cout << " |Hacha| ";
                                }
                                break;

                            case (item)MARTILLO:
                                if (martillo_disponible)
                                {
                                    cout << " |Martillo| ";
                                }
                                break;

                            case (item)LIBRO:
                                if (libro_disponible)
                                {
                                    cout << " |Libro| ";
                                }
                                break;

                            case (item)COPA_DEL_MUNDO:
                                if (copa_disponible)
                                {
                                    cout << " |Copa_Del_Mundo| ";
                                }
                                break;

                            case (item)BOTELLA:
                                if (botella_disponible)
                                {
                                    cout << " |Botella| ";
                                }
                                break;

                            case (item)BOLSA_CERRADA_DE_CAFE:
                                if (bolsa_cafe_disponible)
                                {
                                    cout << " |Bolsa_Cerrada_De_Cafe| ";
                                }
                                break;

                            default:
                                break;
                            }
                        }
                        cout << endl;

                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                     ___________                      |                                   " << endl;
                        cout << "                             |        ~~~         |           |          ~~~        |                                   " << endl;
                        cout << "                             |       TTTTT        |           |         TTTTT       |                                   " << endl;
                        cout << "                             |        T_T         |           |          T_T        |                                   " << endl;
                        cout << "                             |         |          |           |           |         |                                   " << endl;
                        cout << "                             |        [|]         |           |          [|]        |                                   " << endl;
                        cout << "                             |         |          |           |           |         |                                   " << endl;
                        cout << "                             |                    |           |                     |                                   " << endl;
                        cout << "                             |                    |           |                     |                                   " << endl;
                        cout << "                            _|____________________|___________|_____________________|_                                  " << endl;
                        cout << "                          _X                    ooooooooooooooo                       X_                                " << endl;
                        cout << "                        _X                 ooooo   X      X    oooo                     X_                              " << endl;
                        cout << "                      _X                  o           n            o                      X_                            " << endl;
                        cout << "                    _X                    0________________________O                        X_                          " << endl;
                        cout << "                  _X                                                                          X_                        " << endl;
                        cout << "                 X                                                                              X                       " << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << "Has derrotado al slime, y te sientes victorioso, pero sabes que aún queda mucho por hacer." << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << "Presiona ENTER para ir a la siguiente habitación." << endl;

                        cin.get();
                        system("clear");
                    }
                } while (!slime_clear && !game_over);

                do
                {
                    for (int i = -1; i < 7; i++)
                    {
                        switch (i)
                        {
                        case -1:
                            cout << "Vidas: " << vidas << "   ";

                            break;

                        case (item)DAGA:
                            if (daga_disponible)
                            {
                                cout << " |Daga| ";
                            }
                            break;

                        case (item)HACHA:
                            if (hacha_disponible)
                            {
                                cout << " |Hacha| ";
                            }
                            break;

                        case (item)MARTILLO:
                            if (martillo_disponible)
                            {
                                cout << " |Martillo| ";
                            }
                            break;

                        case (item)LIBRO:
                            if (libro_disponible)
                            {
                                cout << " |Libro| ";
                            }
                            break;

                        case (item)COPA_DEL_MUNDO:
                            if (copa_disponible)
                            {
                                cout << " |Copa_Del_Mundo| ";
                            }
                            break;

                        case (item)BOTELLA:
                            if (botella_disponible)
                            {
                                cout << " |Botella| ";
                            }
                            break;

                        case (item)BOLSA_CERRADA_DE_CAFE:
                            if (bolsa_cafe_disponible)
                            {
                                cout << " |Bolsa_Cerrada_De_Cafe| ";
                            }
                            break;

                        default:
                            break;
                        }
                    }
                    cout << endl;

                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << endl;
                    cout << "                             |                                                      |                                   " << endl;
                    cout << "                             |                                                      |                                   " << endl;
                    cout << "                             |                                                      |                                   " << endl;
                    cout << "                             |                                                      |                                   " << endl;
                    cout << "                             |                     ___________                      |                                   " << endl;
                    cout << "                             |        ~~~         |           |          ~~~        |                                   " << endl;
                    cout << "                             |       TTTTT        |  ______   |         TTTTT       |                                   " << endl;
                    cout << "                             |        T_T       x | [      ]  |          T_T        |                                   " << endl;
                    cout << "                             |         |        X || O ,, O | |           |         |                                   " << endl;
                    cout << "                             |        [|]       X | |  xx  |  |          [|]        |                                   " << endl;
                    cout << "                             |         |       X | |  xx  |  |            |         |                                   " << endl;
                    cout << "                             |                 [+]___-[_|_]-| |                     |                                   " << endl;
                    cout << "                             |                  o |   [_|_] | |                     |                                   " << endl;
                    cout << "                            _|____________________|___[ | ]_|_|_____________________|_                                  " << endl;
                    cout << "                          _X                           _|_  |                         X_                                " << endl;
                    cout << "                        _X                            |   |                             X_                              " << endl;
                    cout << "                      _X                              |   |                               X_                            " << endl;
                    cout << "                    _X                                |   |                                 X_                          " << endl;
                    cout << "                  _X                                  W   W                                   X_                        " << endl;
                    cout << "                 X                                                                              X                       " << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "ESQUELETO" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

                    cout << "\nEscribe y presiona ENTER - (usa solo minúsculas)" << endl;
                    cin >> entrada;
                    cin.ignore();
                    cout << endl;

                    if ((entrada == "apuñalar" || entrada == "pinchar" || entrada == "clavar" || entrada == "lanzar") && daga_disponible)
                    {
                        cout << "Tratas de clavar la daga en el esqueleto sin éxito, ya que no tiene carne, y la daga queda atrapada entre los huesos." << endl;
                        daga_disponible = false;
                        vidas -= 1;
                    }
                    else if ((entrada == "cortar" || entrada == "tajar" || entrada == "talar") && hacha_disponible)
                    {
                        cout << "Partes a la criatura en dos como si fuera tofu, pero con tanta fuerza que el hacha se queda clavada en el piso y no la puedes sacar." << endl;
                        hacha_disponible = false;
                        esqueleto_clear = true;
                    }
                    else if ((entrada == "martillar" || entrada == "romper" || entrada == "triturar" || entrada == "destruir") && martillo_disponible)
                    {
                        cout << "Le revientas el cráneo al esqueleto con el martillo, pero este se desintegra en el proceso." << endl;
                        martillo_disponible = false;
                        esqueleto_clear = true;
                    }
                    else if (entrada == "leer")
                    {
                        cout << "El libro dice que los esqueletos son vulnerables a casi todo objeto metálico que tengas a disposición." << endl;
                    }
                    else if (entrada == "revolear" && libro_disponible)
                    {
                        cout << "El libro golpea al esqueleto pero no le hace daño, perdiste el libro." << endl;
                        libro_disponible = false;
                        vidas -= 1;
                    }
                    else if ((entrada == "presumir" || entrada == "aplastar") && copa_disponible)
                    {
                        cout << "Presumes la copa del mundo, el esqueleto se enoja, la rompe y se va llorando." << endl;
                        copa_disponible = false;
                        esqueleto_clear = true;
                    }
                    else if ((entrada == "derramar" || entrada == "regalar" || entrada == "verter") && botella_disponible)
                    {
                        cout << "Viertes el contenido del envase en la criatura, pero el esqueleto es inmune al veneno." << endl;
                        botella_disponible = false;
                        vidas -= 1;
                    }
                    else if (entrada == "beber" && botella_disponible)
                    {
                        cout << "¡Mueres agonizantemente por el veneno!" << endl;
                        cout << "Porque te tomaste la botella?... Borrachin. " << endl;
                        vidas = 0;
                    }
                    else if (entrada == "abrir" && bolsa_cafe_disponible)
                    {
                        cout << "El esqueleto te mira frustrado por no poder disfrutar de un rico café, ya que" << endl;
                        cout << "no tiene estómago ni nariz. Te pega haciéndote soltar el café, que termina" << endl;
                        cout << "desparramado en el piso." << endl;
                        bolsa_cafe_disponible = false;
                        vidas -= 1;
                    }
                    else
                    {
                        vidas -= 1;
                        cout << "No logras hacer nada y el esqueleto te golpea, lastimándote en el proceso." << endl;
                    }

                    if (vidas == 0 || entrada == "salir")
                    {
                        game_over = true;
                        cout << "Has muerto patéticamente en batalla contra un ESQUELETO, deberías sentir vergüenza." << endl;
                        cout << "*********************************GAME OVER*************************************" << endl;
                    }

                    cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
                    cin.get();
                    system("clear");

                    if (esqueleto_clear)
                    {
                        for (int i = -1; i < 7; i++)
                        {
                            switch (i)
                            {
                            case -1:
                                cout << "Vidas: " << vidas << "   ";

                                break;

                            case (item)DAGA:
                                if (daga_disponible)
                                {
                                    cout << " |Daga| ";
                                }
                                break;

                            case (item)HACHA:
                                if (hacha_disponible)
                                {
                                    cout << " |Hacha| ";
                                }
                                break;

                            case (item)MARTILLO:
                                if (martillo_disponible)
                                {
                                    cout << " |Martillo| ";
                                }
                                break;

                            case (item)LIBRO:
                                if (libro_disponible)
                                {
                                    cout << " |Libro| ";
                                }
                                break;

                            case (item)COPA_DEL_MUNDO:
                                if (copa_disponible)
                                {
                                    cout << " |Copa_Del_Mundo| ";
                                }
                                break;

                            case (item)BOTELLA:
                                if (botella_disponible)
                                {
                                    cout << " |Botella| ";
                                }
                                break;

                            case (item)BOLSA_CERRADA_DE_CAFE:
                                if (bolsa_cafe_disponible)
                                {
                                    cout << " |Bolsa_Cerrada_De_Cafe| ";
                                }
                                break;

                            default:
                                break;
                            }
                        }
                        cout << endl;

                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                                                      |                                   " << endl;
                        cout << "                             |                     ___________                      |                                   " << endl;
                        cout << "                             |        ~~~         |           |          ~~~        |                                   " << endl;
                        cout << "                             |       TTTTT        |  ______   |         TTTTT       |                                   " << endl;
                        cout << "                             |        T_T         | [      ]  |          T_T        |                                   " << endl;
                        cout << "                             |         |          || X ,, X | |           |         |                                   " << endl;
                        cout << "                             |        [|]       / | |  nn  |  |          [|]        |                                   " << endl;
                        cout << "                             |         |        X |  ------   |           |         |                                   " << endl;
                        cout << "                             |                 [+]___-[_|_]-| |                     |                                   " << endl;
                        cout << "                             |                  o |   [_|_] | |                     |                                   " << endl;
                        cout << "                            _|____________________|___[ | ]_|_|_____________________|_                                  " << endl;
                        cout << "                          _X                           _|_  |                         X_                               " << endl;
                        cout << "                        _X                            |   |                             X_                             " << endl;
                        cout << "                      _X                              |   |                               X_                           " << endl;
                        cout << "                    _X                                |   |                                 X_                         " << endl;
                        cout << "                  _X                                  W   W                                   X_                       " << endl;
                        cout << "                 X                                                                              X                      " << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << "Has derrotado al esqueleto, y te sientes victorioso, pero sabes que aún queda mucho por hacer." << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << "Presiona ENTER para ir a la siguiente habitación." << endl;

                        cin.get();
                        system("clear");
                    }
                } while (!esqueleto_clear && !game_over);

                do
                {
                    for (int i = -1; i < 7; i++)
                    {
                        switch (i)
                        {
                        case -1:
                            cout << "Vidas: " << vidas << "   ";

                            break;

                        case (item)DAGA:
                            if (daga_disponible)
                            {
                                cout << " |Daga| ";
                            }
                            break;

                        case (item)HACHA:
                            if (hacha_disponible)
                            {
                                cout << " |Hacha| ";
                            }
                            break;

                        case (item)MARTILLO:
                            if (martillo_disponible)
                            {
                                cout << " |Martillo| ";
                            }
                            break;

                        case (item)LIBRO:
                            if (libro_disponible)
                            {
                                cout << " |Libro| ";
                            }
                            break;

                        case (item)COPA_DEL_MUNDO:
                            if (copa_disponible)
                            {
                                cout << " |Copa_Del_Mundo| ";
                            }
                            break;

                        case (item)BOTELLA:
                            if (botella_disponible)
                            {
                                cout << " |Botella| ";
                            }
                            break;

                        case (item)BOLSA_CERRADA_DE_CAFE:
                            if (bolsa_cafe_disponible)
                            {
                                cout << " |Bolsa_Cerrada_De_Cafe| ";
                            }
                            break;

                        default:
                            break;
                        }
                    }
                    cout << endl;

                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << endl;
                    cout << R"(                             |                         ||                           |                                   )" << endl;
                    cout << R"(                             |                         ||                           |                                   )" << endl;
                    cout << R"(                             |                         ||                           |                                   )" << endl;
                    cout << R"(                             |                         ||                           |                                   )" << endl;
                    cout << R"(                             |                     ____||_____                      |                                   )" << endl;
                    cout << R"(                             |        ~~~         |    ||     |          ~~~        |                                   )" << endl;
                    cout << R"(                             |       TTTTT       _ /\  ||  /\ _         TTTTT       |                                   )" << endl;
                    cout << R"(                             |        T_T       / X  \.--./  X \         T_T        |                                   )" << endl;
                    cout << R"(                             |         |       /_/ \/´    `\/ \_\         |         |                                   )" << endl;
                    cout << R"(                             |        [|]     /|(´-/\_/)(\_/\-`)|\       [|]        |                                   )" << endl;
                    cout << R"(                             |         |     ( |´ (_(.oOOo.)_)|`| )       |         |                                   )" << endl;
                    cout << R"(                             |               ´ |  ´//\(  )/\\`| | `                 |                                   )" << endl;
                    cout << R"(                             |                 (  // ()\/() \\| )                   |                                   )" << endl;
                    cout << R"(                            _|_________________´__(___\__/___)__`___________________|_                                  )" << endl;
                    cout << R"(                          _X                       \        /                         X_                                )" << endl;
                    cout << R"(                        _X                         ´        `                           X_                              )" << endl;
                    cout << R"(                      _X                                                                  X_                            )" << endl;
                    cout << R"(                    _X                                                                      X_                          )" << endl;
                    cout << R"(                  _X                                                                          X_                        )" << endl;
                    cout << R"(                 X                                                                              X                       )" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "ARAÑA" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

                    cout << "\nEscribe y presiona ENTER - (usa solo minúsculas)" << endl;
                    cin >> entrada;
                    cin.ignore();
                    cout << endl;

                    if ((entrada == "apuñalar" || entrada == "pinchar" || entrada == "clavar" || entrada == "lanzar") && daga_disponible)
                    {
                        cout << "La araña es muy ágil y se te sube al brazo. En el pánico te empezas a sacudir, la daga sale volando y se pierde para siempre en la oscuridad de la mazmorra." << endl;
                        daga_disponible = false;
                        vidas -= 1;
                    }
                    else if ((entrada == "cortar" || entrada == "tajar" || entrada == "talar") && hacha_disponible)
                    {
                        cout << "Partes a la araña en 2, pero con tanta fuerza que el hacha se queda clavada en el piso y no la puedes sacar." << endl;
                        hacha_disponible = false;
                        araña_clear = true;
                    }
                    else if ((entrada == "martillar" || entrada == "romper" || entrada == "triturar" || entrada == "destruir") && martillo_disponible)
                    {
                        cout << "Martillas a la araña de forma violenta, y se rompe porque le diste con mucha fuerza." << endl;
                        martillo_disponible = false;
                        araña_clear = true;
                    }
                    else if (entrada == "leer")
                    {
                        cout << "Es una araña." << endl;
                    }
                    else if (entrada == "revolear" && libro_disponible)
                    {
                        cout << "Aplastas a la araña con el libro, que ahora esta todo lleno de sangre de arácnido." << endl;
                        libro_disponible = false;
                        araña_clear = true;
                    }
                    else if ((entrada == "presumir" || entrada == "aplastar") && copa_disponible)
                    {
                        cout << "Aplastas a la araña de forma violenta, y la copa se rompe porque le diste con mucha fuerza." << endl;
                        copa_disponible = false;
                        araña_clear = true;
                    }
                    else if ((entrada == "derramar" || entrada == "regalar" || entrada == "verter") && botella_disponible)
                    {
                        cout << "La araña aprovecha el baño de veneno para acicalarse un poco, la calmaste un poquito pero todavía te quiere picar." << endl;
                        botella_disponible = false;
                        vidas -= 1;
                    }
                    else if (entrada == "beber" && botella_disponible)
                    {
                        cout << "¡Mueres agonizantemente por el veneno!" << endl;
                        cout << "Porque te tomaste la botella?... Borrachin. " << endl;
                        vidas = 0;
                    }
                    else if (entrada == "abrir" && bolsa_cafe_disponible)
                    {
                        cout << "La araña salta adentro de la bolsa y la tiras al piso del repelus, chau café..." << endl;
                        bolsa_cafe_disponible = false;
                        vidas -= 1;
                    }
                    else
                    {
                        vidas -= 1;
                        cout << "No logras hacer nada y la araña te pica, lastimándote en el proceso." << endl;
                    }

                    if (vidas == 0 || entrada == "salir")
                    {
                        game_over = true;
                        cout << "Has muerto patéticamente en batalla contra una ARAÑA, deberías sentir vergüenza." << endl;
                        cout << "*********************************GAME OVER*************************************" << endl;
                    }

                    cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
                    cin.get();
                    system("clear");

                    if (araña_clear)
                    {
                        for (int i = -1; i < 7; i++)
                        {
                            switch (i)
                            {
                            case -1:
                                cout << "Vidas: " << vidas << "   ";

                                break;

                            case (item)DAGA:
                                if (daga_disponible)
                                {
                                    cout << " |Daga| ";
                                }
                                break;

                            case (item)HACHA:
                                if (hacha_disponible)
                                {
                                    cout << " |Hacha| ";
                                }
                                break;

                            case (item)MARTILLO:
                                if (martillo_disponible)
                                {
                                    cout << " |Martillo| ";
                                }
                                break;

                            case (item)LIBRO:
                                if (libro_disponible)
                                {
                                    cout << " |Libro| ";
                                }
                                break;

                            case (item)COPA_DEL_MUNDO:
                                if (copa_disponible)
                                {
                                    cout << " |Copa_Del_Mundo| ";
                                }
                                break;

                            case (item)BOTELLA:
                                if (botella_disponible)
                                {
                                    cout << " |Botella| ";
                                }
                                break;

                            case (item)BOLSA_CERRADA_DE_CAFE:
                                if (bolsa_cafe_disponible)
                                {
                                    cout << " |Bolsa_Cerrada_De_Cafe| ";
                                }
                                break;

                            default:
                                break;
                            }
                        }
                        cout << endl;

                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << R"(                             |                         ||                           |                                   )" << endl;
                        cout << R"(                             |                         ||                           |                                   )" << endl;
                        cout << R"(                             |                         ||                           |                                   )" << endl;
                        cout << R"(                             |                         ||                           |                                   )" << endl;
                        cout << R"(                             |                     ____||_____                      |                                   )" << endl;
                        cout << R"(                             |        ~~~         |    ||     |          ~~~        |                                   )" << endl;
                        cout << R"(                             |       TTTTT       _ /\  ||  /\ _         TTTTT       |                                   )" << endl;
                        cout << R"(                             |        T_T       / X  \.--./  X \         T_T        |                                   )" << endl;
                        cout << R"(                             |         |       /_/ \/´    `\/ \_\         |         |                                   )" << endl;
                        cout << R"(                             |        [|]     /|(´-/\_/)(\_/\-`)|\       [|]        |                                   )" << endl;
                        cout << R"(                             |         |     ( |´ (_(.xXXx.)_)|`| )       |         |                                   )" << endl;
                        cout << R"(                             |               ´ |  ´//\(  )/\\`| | `                 |                                   )" << endl;
                        cout << R"(                             |                 (  // ()\/() \\| )                   |                                   )" << endl;
                        cout << R"(                            _|_________________´__(___\__/___)__`___________________|_                                  )" << endl;
                        cout << R"(                          _X                       \        /                         X_                                )" << endl;
                        cout << R"(                        _X                         ´        `                           X_                              )" << endl;
                        cout << R"(                      _X                                                                  X_                            )" << endl;
                        cout << R"(                    _X                                                                      X_                          )" << endl;
                        cout << R"(                  _X                                                                          X_                        )" << endl;
                        cout << R"(                 X                                                                              X                       )" << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << "Has derrotado a la araña. Sientes un ruido extraño proveniente de la habitación del fondo..." << endl;
                        cout << "Decides ir a investigar." << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << "Presiona ENTER para ir a la siguiente habitación." << endl;

                        cin.get();
                        system("clear");
                    }
                } while (!araña_clear && !game_over);

                do
                {
                    for (int i = -1; i < 7; i++)
                    {
                        switch (i)
                        {
                        case -1:
                            cout << "Vidas: " << vidas << "   ";

                            break;

                        case (item)DAGA:
                            if (daga_disponible)
                            {
                                cout << " |Daga| ";
                            }
                            break;

                        case (item)HACHA:
                            if (hacha_disponible)
                            {
                                cout << " |Hacha| ";
                            }
                            break;

                        case (item)MARTILLO:
                            if (martillo_disponible)
                            {
                                cout << " |Martillo| ";
                            }
                            break;

                        case (item)LIBRO:
                            if (libro_disponible)
                            {
                                cout << " |Libro| ";
                            }
                            break;

                        case (item)COPA_DEL_MUNDO:
                            if (copa_disponible)
                            {
                                cout << " |Copa_Del_Mundo| ";
                            }
                            break;

                        case (item)BOTELLA:
                            if (botella_disponible)
                            {
                                cout << " |Botella| ";
                            }
                            break;

                        case (item)BOLSA_CERRADA_DE_CAFE:
                            if (bolsa_cafe_disponible)
                            {
                                cout << " |Bolsa_Cerrada_De_Cafe| ";
                            }
                            break;

                        default:
                            break;
                        }
                    }
                    cout << endl;

                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << endl;
                    cout << R"(                             |                                                      |                                   )" << endl;
                    cout << R"(                             |                                                      |                                   )" << endl;
                    cout << R"(                             |                      :::::::::                       |                                   )" << endl;
                    cout << R"(                             |                     :::::::::::                      |                                   )" << endl;
                    cout << R"(                             |                    <:  0` ´0  :>                     |                                   )" << endl;
                    cout << R"(                             |        ~~~         ||    7    ||          ~~~        |                                   )" << endl;
                    cout << R"(                             |       TTTTT        | \_ v v _/ |         TTTTT       |                                   )" << endl;
                    cout << R"(                             |        T_T      ___|__|\_^_/|__|___       T_T        |                                   )" << endl;
                    cout << R"(                             |         |      /       \| |/       \       |         |                                   )" << endl;
                    cout << R"(                             |        [|]    /         \_/         \     [|]        |                                   )" << endl;
                    cout << R"(                             |         |    /    /\    | |    /\    \     |         |                                   )" << endl;
                    cout << R"(                             |              |    |||   ! !   |||    |               |                                   )" << endl;
                    cout << R"(                             |              |    ||\ ___V___ /||    |               |                                   )" << endl;
                    cout << R"(                            _|______________|____||_|   !   |_||____|_______________|_                                  )" << endl;
                    cout << R"(                          _X               (______) |   A   | (______)                X_                                )" << endl;
                    cout << R"(                        _X                          |  / \  |                           X_                              )" << endl;
                    cout << R"(                      _X                            |  | |  |                             X_                            )" << endl;
                    cout << R"(                    _X                             _|__| |__|_                              X_                          )" << endl;
                    cout << R"(                  _X                              /____! !____\                               X_                        )" << endl;
                    cout << R"(                 X                                                                              X                       )" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "ALCALDE VAMPIRO" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

                    cout << "\nEscribe y presiona ENTER - (usa solo minúsculas)" << endl;
                    cin >> entrada;
                    cin.ignore();
                    cout << endl;

                    if ((entrada == "apuñalar" || entrada == "pinchar" || entrada == "clavar" || entrada == "lanzar") && daga_disponible)
                    {
                        cout << "Has derrotado al alcalde etc etc" << endl;
                        daga_disponible = false;
                        vidas -= 1;
                    }
                    else if ((entrada == "cortar" || entrada == "tajar" || entrada == "talar") && hacha_disponible)
                    {
                        cout << "Partes a la araña en 2, pero con tanta fuerza que el hacha se queda clavada en el piso y no la puedes sacar." << endl;
                        hacha_disponible = false;
                        alcalde_clear = true;
                    }
                    else if ((entrada == "martillar" || entrada == "romper" || entrada == "triturar" || entrada == "destruir") && martillo_disponible)
                    {
                        cout << "Martillas a la araña de forma violenta, y se rompe porque le diste con mucha fuerza." << endl;
                        martillo_disponible = false;
                        alcalde_clear = true;
                    }
                    else if (entrada == "leer")
                    {
                        cout << "Es una araña." << endl;
                    }
                    else if (entrada == "revolear" && libro_disponible)
                    {
                        cout << "Aplastas a la araña con el libro, que ahora esta todo lleno de sangre de arácnido." << endl;
                        libro_disponible = false;
                        alcalde_clear = true;
                    }
                    else if ((entrada == "presumir" || entrada == "aplastar") && copa_disponible)
                    {
                        cout << "Aplastas a la araña de forma violenta, y la copa se rompe porque le diste con mucha fuerza." << endl;
                        copa_disponible = false;
                        alcalde_clear = true;
                    }
                    else if ((entrada == "derramar" || entrada == "regalar" || entrada == "verter") && botella_disponible)
                    {
                        cout << "La araña aprovecha el baño de veneno para acicalarse un poco, la calmaste un poquito pero todavía te quiere picar." << endl;
                        botella_disponible = false;
                        vidas -= 1;
                    }
                    else if (entrada == "beber" && botella_disponible)
                    {
                        cout << "¡Mueres agonizantemente por el veneno!" << endl;
                        cout << "Porque te tomaste la botella?... Borrachin. " << endl;
                        vidas = 0;
                    }
                    else if (entrada == "abrir" && bolsa_cafe_disponible)
                    {
                        cout << "La araña salta adentro de la bolsa y la tiras al piso del repelus, chau café..." << endl;
                        bolsa_cafe_disponible = false;
                        vidas -= 1;
                    }
                    else
                    {
                        vidas -= 1;
                        cout << "No logras hacer nada y el slime te escupe ácido, lastimándote en el proceso." << endl;
                    }

                    if (vidas == 0 || entrada == "salir")
                    {
                        game_over = true;
                        cout << "Has muerto patéticamente en batalla contra el ALCALDE, deberías sentir vergüenza." << endl;
                        cout << "*********************************GAME OVER*************************************" << endl;
                    }

                    cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
                    cin.get();
                    system("clear");

                    if (alcalde_clear)
                    {
                        for (int i = -1; i < 7; i++)
                        {
                            switch (i)
                            {
                            case -1:
                                cout << "Vidas: " << vidas << "   ";

                                break;

                            case (item)DAGA:
                                if (daga_disponible)
                                {
                                    cout << " |Daga| ";
                                }
                                break;

                            case (item)HACHA:
                                if (hacha_disponible)
                                {
                                    cout << " |Hacha| ";
                                }
                                break;

                            case (item)MARTILLO:
                                if (martillo_disponible)
                                {
                                    cout << " |Martillo| ";
                                }
                                break;

                            case (item)LIBRO:
                                if (libro_disponible)
                                {
                                    cout << " |Libro| ";
                                }
                                break;

                            case (item)COPA_DEL_MUNDO:
                                if (copa_disponible)
                                {
                                    cout << " |Copa_Del_Mundo| ";
                                }
                                break;

                            case (item)BOTELLA:
                                if (botella_disponible)
                                {
                                    cout << " |Botella| ";
                                }
                                break;

                            case (item)BOLSA_CERRADA_DE_CAFE:
                                if (bolsa_cafe_disponible)
                                {
                                    cout << " |Bolsa_Cerrada_De_Cafe| ";
                                }
                                break;

                            default:
                                break;
                            }
                        }
                        cout << endl;

                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << R"(                             |                                                      |                                   )" << endl;
                        cout << R"(                             |                                                      |                                   )" << endl;
                        cout << R"(                             |                      :::::::::                       |                                   )" << endl;
                        cout << R"(                             |                     :::::::::::                      |                                   )" << endl;
                        cout << R"(                             |                    <:  X` ´X  :>                     |                                   )" << endl;
                        cout << R"(                             |        ~~~         ||    7    ||          ~~~        |                                   )" << endl;
                        cout << R"(                             |       TTTTT        | \_ v v _/ |         TTTTT       |                                   )" << endl;
                        cout << R"(                             |        T_T      ___|__|\_^_/|__|___       T_T        |                                   )" << endl;
                        cout << R"(                             |         |      /       \| |/       \       |         |                                   )" << endl;
                        cout << R"(                             |        [|]    /         \_/         \     [|]        |                                   )" << endl;
                        cout << R"(                             |         |    /    /\    | |    /\    \     |         |                                   )" << endl;
                        cout << R"(                             |              |    |||   ! !   |||    |               |                                   )" << endl;
                        cout << R"(                             |              |    ||\ ___V___ /||    |               |                                   )" << endl;
                        cout << R"(                            _|______________|____||_|   !   |_||____|_______________|_                                  )" << endl;
                        cout << R"(                          _X               (______) |   A   | (______)                X_                                )" << endl;
                        cout << R"(                        _X                          |  / \  |                           X_                              )" << endl;
                        cout << R"(                      _X                            |  | |  |                             X_                            )" << endl;
                        cout << R"(                    _X                             _|__| |__|_                              X_                          )" << endl;
                        cout << R"(                  _X                              /____! !____\                               X_                        )" << endl;
                        cout << R"(                 X                                                                              X                       )" << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << "Has derrotado al alcalde, etc etc." << endl;
                        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl;
                        cout << "Presiona ENTER para salir de la mazmorra." << endl;

                        cin.get();
                        system("clear");
                    }
                } while (!alcalde_clear && !game_over);

                if (!game_over)
                {
                    for (int i = -1; i < 7; i++)
                    {
                        switch (i)
                        {
                        case -1:
                            cout << "Vidas: " << vidas << "   ";

                            break;

                        case (item)DAGA:
                            if (daga_disponible)
                            {
                                cout << " |Daga| ";
                            }
                            break;

                        case (item)HACHA:
                            if (hacha_disponible)
                            {
                                cout << " |Hacha| ";
                            }
                            break;

                        case (item)MARTILLO:
                            if (martillo_disponible)
                            {
                                cout << " |Martillo| ";
                            }
                            break;

                        case (item)LIBRO:
                            if (libro_disponible)
                            {
                                cout << " |Libro| ";
                            }
                            break;

                        case (item)COPA_DEL_MUNDO:
                            if (copa_disponible)
                            {
                                cout << " |Copa_Del_Mundo| ";
                            }
                            break;

                        case (item)BOTELLA:
                            if (botella_disponible)
                            {
                                cout << " |Botella| ";
                            }
                            break;

                        case (item)BOLSA_CERRADA_DE_CAFE:
                            if (bolsa_cafe_disponible)
                            {
                                cout << " |Bolsa_Cerrada_De_Cafe| ";
                            }
                            break;

                        default:
                            break;
                        }
                    }
                    cout << endl;

                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << R"(                             _   _    _    ____     ____    _    _   _    _    ____   ___                            )" << endl;
                    cout << R"(                            | | | |  / \  / ___|   / ___|  / \  | \ | |  / \  |  _ \ / _ \                           )" << endl;
                    cout << R"(                            | |_| | / _ \ \___ \  | |  _  / _ \ |  \| | / _ \ | | | | | | |                          )" << endl;
                    cout << R"(                            |  _  |/ ___ \ ___) | | |_| |/ ___ \| |\  |/ ___ \| |_| | |_| |                          )" << endl;
                    cout << R"(                            |_| |_/_/   \_\____/   \____/_/   \_\_| \_/_/   \_\____/ \___/                           )" << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "¡Felicidades! Has completado la mazmorra." << endl;
                    cout << "Has derrotado a todos los enemigos y has sobrevivido." << endl;
                    cout << "El pueblo ha recuperado su paz y tranquilidad... por ahora." << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << endl;

                    cout << "¡Gracias por jugar!" << endl;
                    cout << "Presiona ENTER para volver a la pantalla principal." << endl;
                    cin.get();
                    system("clear");
                }
            }
        }
    }

    system("clear");
    cout << "Gracias por jugar!" << endl;
    cout << "Presiona ENTER para salir" << endl;
    cin.get();

    return 0;
}
