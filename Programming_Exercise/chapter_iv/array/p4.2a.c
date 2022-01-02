#include <stdio.h>

int main()
{
    int vison_moja[12] = {722,316,598,102,455,256,634,334,574,580,670,933};
    int ekhoni_khabo[12] = {517,402,645,98,310,401,589,357,680,535,674,843};
    int visonMoja = 0;
    int ekhoniKhabo = 0;

    for(int i = 0; i < 12; i++) {
        visonMoja = visonMoja + vison_moja[i];
    }
    for(int i = 0; i < 12; i++) {
        ekhoniKhabo = ekhoniKhabo + ekhoni_khabo[i];
    }

    if(visonMoja > ekhoniKhabo) {
        printf("Vison Moja sold much more\n", visonMoja);
    }
    else {
        printf("Ekoni Khabo sold much more\n", ekhoniKhabo);
    }

    return 0;
}