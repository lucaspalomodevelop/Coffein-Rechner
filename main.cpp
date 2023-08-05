#include "main.hpp"

#include "./modules/Mate-Rechner/initModule.hpp"
#include "./modules/Kaffee-Rechner/initModule.hpp"

int main(int argc, char *argv[])
{
    modules["Mate-Rechner"] = MateRechner();
    modules["Kaffee-Rechner"] = KaffeeRechner();

    if (argc > 1)
    {
        std::string moduleName = argv[1];
        if (modules.find(moduleName) != modules.end())
        {
            modules[moduleName].runInit();
        }
        else
        {
            std::cout << "Module not found" << std::endl;
        }
    }
    else if (argc == 1)
    {
        std::cout << "auswahl: " << std::endl;
        std::vector<std::string> moduleNames;
        int i = 0;
        for (auto const &module : modules)
        {
            int num = i;
            moduleNames.push_back(module.first);
            std::cout << "[" << num << "] " << module.first << std::endl;
            i++;
        }
        std::cout << "input: ";
        int input;

        std::cin >> input;

        if (modules.find(moduleNames[input]) != modules.end())
        {
            modules[moduleNames[input]].runInit();
        }
        else
        {
            std::cout << "Module not found" << std::endl;
        }
    }

    else
    {
        std::cout << "No module specified" << std::endl;
    }
    return 0;
}
