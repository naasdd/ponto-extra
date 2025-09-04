#include <iostream>
#include <time.h>

using namespace std;

struct Vector3
{
    int x, y, z;
};

Vector3 gerarVetores()
{
    Vector3 temp;
    temp.x = rand() % 10;
    temp.y = rand() % 10;
    temp.z = rand() % 10;

    cout << "Vetor gerado (" << temp.x << ", " << temp.y << ", " << temp.z << ")\n";
    return temp;
}

void getMagnitude()
{
    
}

void getNormalized() {}

int main()
{
    srand(time(NULL));

    Vector3 arrayVetores[2];

    arrayVetores[0] = gerarVetores();
    arrayVetores[1] = gerarVetores();

    int opcao;
    do
    {
        cout << "\n 1 - GetMagnitude()";
        cout << "\n 2 - GetNormalized()";
        cout << "\n 3 - Distance(Vector3, Vector3)";
        cout << "\n 4 - Angle(Vector3, Vector3)";
        cout << "\n 5 - Dot(Vector3, Vector3)";
        cout << "\n 6 - Cross(Vector3, Vector3)";
        cout << "\n 7 - Sair";
        cout << "\nSelecione uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:

            break;

        case 2:

            break;
        case 3:

            break;

        case 4:

            break;
        case 5:

            break;

        case 6:

            break;

        default:
            break;
        }

    } while (opcao != 7);

    cout << "\nSaindo...\n\n";
    return 0;
}