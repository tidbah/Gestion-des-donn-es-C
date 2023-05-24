#include <stdio.h>
#include "module1.h"
#include "module2.h"
#include "module3.h"
#include "module4.h"

int main() {
    // Instancier les différents modules
    Module1 module1_instance;
    Module2 module2_instance;
    Module3 module3_instance;
    Module4 module4_instance;

    // Appeler les fonctions et méthodes appropriées des modules
    module1_function1();
    module2_function2();

    module3_method1();
    module4_method2();

    return 0;
}
