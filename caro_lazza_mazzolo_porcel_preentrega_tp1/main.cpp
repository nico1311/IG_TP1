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
    bool Daga = true, Hacha = true, Martillo = true, Libro = true, Botella = true, Copa = true, Cafe = true, Game_Over = false, Fin, lvl_clear;
    int opcion = 0;
    int vidas;
    string seleccion;

    while (!Game_Over)
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

        } while (opcion != 1 && opcion != 2);

        if (opcion == 2)
        {
            Game_Over = true;
        }
        else
        {
            // insertar arte ascii de tutorial
            // Tutorial
            system("clear");
            Fin = false;
            vidas = 10;
            for (int i = 0; i < 7; i++)
            {
                switch (i)
                {
                case (item)DAGA:
                    if (Daga)
                    {
                        cout << " | Daga | ";
                    }
                    break;

                case (item)HACHA:
                    if (Hacha)
                    {
                        cout << " | Hacha | ";
                    }
                    break;

                case (item)MARTILLO:
                    if (Martillo)
                    {
                        cout << " | Martillo | ";
                    }
                    break;

                case (item)LIBRO:
                    if (Libro)
                    {
                        cout << " | Libro | ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (Copa)
                    {
                        cout << " | Copa_Del_Mundo | ";
                    }
                    break;

                case (item)BOTELLA:
                    if (Botella)
                    {
                        cout << " | Botella | ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (Cafe)
                    {
                        cout << " | Bolsa_Cerrada_De_Cafe | ";
                    }
                    break;

                default:
                    break;
                }
            }
            cout << "\n\nBienvenidos a \"Otro Juego de Mazmorras\", una aventura de texto ambientada en un mundo de fantasía donde todo puede\nser posible" << endl;
            cout << "Antes de comenzar, te vamos a comentar como se juega el juego" << endl;
            cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
            cin.ignore().get();

            system("clear");

            for (int i = -1; i < 7; i++)
            {
                switch (i)
                {
                case -1:
                    cout << "Vidas: " << vidas << "   ";

                    break;

                case (item)DAGA:
                    if (Daga)
                    {
                        cout << " |Daga| ";
                    }
                    break;

                case (item)HACHA:
                    if (Hacha)
                    {
                        cout << " |Hacha| ";
                    }
                    break;

                case (item)MARTILLO:
                    if (Martillo)
                    {
                        cout << " |Martillo| ";
                    }
                    break;

                case (item)LIBRO:
                    if (Libro)
                    {
                        cout << " |Libro| ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (Copa)
                    {
                        cout << " |Copa_Del_Mundo| ";
                    }
                    break;

                case (item)BOTELLA:
                    if (Botella)
                    {
                        cout << " |Botella| ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (Cafe)
                    {
                        cout << " |Bolsa_Cerrada_De_Cafe| ";
                    }
                    break;

                default:
                    break;
                }
            }

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
            cin.ignore().get();
            system("clear");

            for (int i = -1; i < 7; i++)
            {
                switch (i)
                {
                case -1:
                    cout << "Vidas: " << vidas << "   ";

                    break;

                case (item)DAGA:
                    if (Daga)
                    {
                        cout << " |Daga| ";
                    }
                    break;

                case (item)HACHA:
                    if (Hacha)
                    {
                        cout << " |Hacha| ";
                    }
                    break;

                case (item)MARTILLO:
                    if (Martillo)
                    {
                        cout << " |Martillo| ";
                    }
                    break;

                case (item)LIBRO:
                    if (Libro)
                    {
                        cout << " |Libro| ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (Copa)
                    {
                        cout << " |Copa_Del_Mundo| ";
                    }
                    break;

                case (item)BOTELLA:
                    if (Botella)
                    {
                        cout << " |Botella| ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (Cafe)
                    {
                        cout << " |Bolsa_Cerrada_De_Cafe| ";
                    }
                    break;

                default:
                    break;
                }
            }
            cout << "\n------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "\n\n                uu                 ,ccc,,,,,,,,xx.                                   cx,,,,,,xc                      .," << endl;
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

            cin.ignore().get();
            system("clear");
            for (int i = -1; i < 7; i++)
            {
                switch (i)
                {
                case -1:
                    cout << "Vidas: " << vidas << "   ";

                    break;

                case (item)DAGA:
                    if (Daga)
                    {
                        cout << " |Daga| ";
                    }
                    break;

                case (item)HACHA:
                    if (Hacha)
                    {
                        cout << " |Hacha| ";
                    }
                    break;

                case (item)MARTILLO:
                    if (Martillo)
                    {
                        cout << " |Martillo| ";
                    }
                    break;

                case (item)LIBRO:
                    if (Libro)
                    {
                        cout << " |Libro| ";
                    }
                    break;

                case (item)COPA_DEL_MUNDO:
                    if (Copa)
                    {
                        cout << " |Copa_Del_Mundo| ";
                    }
                    break;

                case (item)BOTELLA:
                    if (Botella)
                    {
                        cout << " |Botella| ";
                    }
                    break;

                case (item)BOLSA_CERRADA_DE_CAFE:
                    if (Cafe)
                    {
                        cout << " |Bolsa_Cerrada_De_Cafe| ";
                    }
                    break;

                default:
                    break;
                }
            }
            cout << "\n------------------------------------------------------------------------------------------------------------------------" << endl;
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

            cin.ignore().get();
            system("clear");

            if (!Fin)
            {
                lvl_clear = false;
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
                            if (Daga)
                            {
                                cout << " |Daga| ";
                            }
                            break;

                        case (item)HACHA:
                            if (Hacha)
                            {
                                cout << " |Hacha| ";
                            }
                            break;

                        case (item)MARTILLO:
                            if (Martillo)
                            {
                                cout << " |Martillo| ";
                            }
                            break;

                        case (item)LIBRO:
                            if (Libro)
                            {
                                cout << " |Libro| ";
                            }
                            break;

                        case (item)COPA_DEL_MUNDO:
                            if (Copa)
                            {
                                cout << " |Copa_Del_Mundo| ";
                            }
                            break;

                        case (item)BOTELLA:
                            if (Botella)
                            {
                                cout << " |Botella| ";
                            }
                            break;

                        case (item)BOLSA_CERRADA_DE_CAFE:
                            if (Cafe)
                            {
                                cout << " |Bolsa_Cerrada_De_Cafe| ";
                            }
                            break;

                        default:
                            break;
                        }
                    }
                    cout << "\n------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "\n                        |                                                            |                           " << endl;
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
                    cout << "                     _X             0      ooooooooooooooooooooooo     O                  X_                     " << endl;
                    cout << "                   _X               0 ooooo                       oooo 0                    X_                   " << endl;
                    cout << "                 _X                 0o                                oO                      X_                 " << endl;
                    cout << "               _X                    0________________________________O                         X_               " << endl;
                    cout << "             _X                                                                                   X_             " << endl;
                    cout << "            X                                                                                       X            " << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "SLIME" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "\nEscribe y presiona ENTER - (usa solo minúsculas)" << endl;
                    cin >> seleccion;

                    if (seleccion == "apuñalar" || seleccion == "pinchar" || seleccion == "clavar" || seleccion == "lanzar")
                    {
                        Daga = false;
                        lvl_clear = true;
                        cout << "\nDestruyes el nucleo del slime con tu daga, pero esta se desintegra en el proceso" << endl;
                    }
                    else if (seleccion == "cortar" || seleccion == "tajar" || seleccion == "talar")
                    {
                        Hacha = false;
                        lvl_clear = true;
                        cout << "\nPartes el slime en 2, pero con tanta fuerza que el hacha se queda clavada en el piso y no la puedes sacar" << endl;
                    }
                    else if (seleccion == "martillar" || seleccion == "romper" || seleccion == "triturar" || seleccion == "destruir")
                    {
                        Martillo = false;
                        lvl_clear = true;
                        cout << "\nDestruyes el slime y el mango se parte, ya no sirve" << endl;
                    }
                    else if (seleccion == "leer")
                    {
                        cout << "\nEs un slime, vulnerable a casi todo objeto metálico que tengas a disposición." << endl;
                    }
                    else if (seleccion == "revolear")
                    {
                        Libro = false;
                        cout << "\nLe revoleas el libro y el slime desintegra las páginas" << endl;
                    }
                    else if (seleccion == "presumir" || seleccion == "aplastar")
                    {
                        Copa = false;
                        lvl_clear = true;
                        cout << "\nQuieres presumir de la copa que trajo Messi, y se te cae arriba del bicho, el cual muere aplastado humillantemente pero" << endl;
                        cout << "\nno sin antes desintegrar la copa con sus últimas fuerzas" << endl;
                    }
                    else if (seleccion == "derramar" || seleccion == "regalar" || seleccion == "verter")
                    {
                        Botella = false;
                        lvl_clear = true;
                        cout << "\nViertes el contenido del envase en la criatura, la cual muere agonizantemente por el veneno" << endl;
                    }
                    else if (seleccion == "beber")
                    {
                        cout << "\n¡Mueres agonizantemente por el veneno! \nPorque te tomaste la botella?... Borrachin. " << endl;
                        vidas = 0;
                    }
                    else if (seleccion == "abrir")
                    {
                        Cafe = false;
                        cout << "\nEl slime se come la bolsa y su contenido, estaba rico" << endl;
                    }
                    else
                    {
                        vidas -= 1;
                        cout << "\nNo logras hacer nada y el slime te escupe ácido, lastimándote en el proceso." << endl;
                    }
                    if (vidas == 0 || seleccion == "salir")
                    {
                        Fin = true;
                        lvl_clear = true;
                        cout << "Has muerto patéticamente en batalla contra un SLIME, deberías sentir vergüenza." << endl;
                        cout << "*********************************GAME OVER*************************************" << endl;
                    }
                    cout << "\nPRESIONA ENTER PARA CONTINUAR" << endl;
                    cin.ignore().get();
                    system("clear");

                } while (!lvl_clear);
            }
        }
    }
}
