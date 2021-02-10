#include "Zombie.h"

using namespace std;

int main()
{
    Zombie n1;

    n1.setNom("Michel");
    n1.setDegats(8);
    n1.setPv(10);

    n1.showInfos();


    Zombie n2;
    n2.setDegats(10);
    n2.setNom("Jean-Lasalle");
    n2.setPv(1000);

    Zombie n3;
    n3.setDegats(20);
    n3.setNom("Jéjé le bomber");
    n3.setPv(10);
    n3.setExplose(60);


    n2.showInfos();


    return 0;
}
