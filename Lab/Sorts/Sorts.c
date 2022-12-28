#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <malloc.h>
#include "sys/stat.h"

void bubblesort(int* mass, int size, int* comp, int* swap, int* time) {
    *time = clock();
    int tmp;
    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            (*comp)++;
            if (mass[j] > mass[j + 1]) {
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
                (*swap)++;
            }
        }
    }
    *time = clock() - *time;
}
void shellsort(int* mass, int size, int* comp, int* swap, int* time) {
    *time = clock();
    for (int x = size / 2; x > 0; x /= 2) {
        for (int i = x; i < size; ++i) {
            (*comp)++;
            for (int j = i - x; j >= 0 && mass[j] > mass[j + x]; j -= x) {
                int temp = mass[j];
                mass[j] = mass[j + x];
                mass[j + x] = temp;
                (*swap)++;
                (*comp)++;
            }
        }
    }
    *time = clock() - *time;
}
void shakesort(int* mass, int size, int* comp, int* swap, int* time) {
    int tmp, ind = -1;
    *time = clock();
    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            (*comp)++;
            if (mass[j] > mass[j + 1]) {
                (*swap)++;
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
            }
            for (int j = i; ind < j; j--) {
                (*comp)++;
                if (mass[j - 1] > mass[j]) {
                    (*swap)++;
                    tmp = mass[j - 1];
                    mass[j - 1] = mass[j];
                    mass[j] = tmp;
                }
            }
            ind += 1;
        }
    }
    *time = clock() - *time;
}
void shellksort(int* mass, int size, int* comp, int* swap, int* time) {
    int x = 1;
    for (x = 1; (((x * 3) + 1) * 3) + 1 < size; x = (x * 3) + 1) {
      printf("%d ",x);
    }
    *time = clock();
    for (x; x > 0; x = (x - 1) / 3) {
        for (int i = x; i < size; ++i) {
            (*comp)++;
            for (int j = i - x; j >= 0 && mass[j] > mass[j + x]; j -= x) {
                (*comp)++;
                (*swap)++;
                int temp = mass[j];
                mass[j] = mass[j + x];
                mass[j + x] = temp;
            }
        }
    }
    *time = clock() - *time;
}
int nsearch(int* mass, int size, int a) {
    int id = -1;
    for (int i = 0; i < size; i++) {
        if (mass[i] == a) {
            id = i;
            break;
        }
    }
    return id;
}
int binsearch(int* mass, int size, int a) {
    int id, b = 0, B = size-1;
    while (b <= B) {
        int id = (b + B) / 2;
        if (mass[id] == a) {
            return id;
        } else if (mass[id] < a) {
            b = id + 1;
        }
        else if (mass[id] > a) {
            B = id - 1;
        }
    }
    return -1;
}
int checksort(int* mass, int size) {
    for (int i = 0; i < size-1; i++) {
        if (mass[i] > mass[i + 1]) {
            return 0;
        }
    }
    return 1;
}
       
void printmass(int* mass, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ",mass[i]);
    }
}
void generatemass(int* mass, int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        mass[i] = min + rand() % (max - min + 1);
    }
}
void copymass(int* mass, int* mass_, int size) {
    for (int i = 0; i < size; i++) {
        mass_[i] = mass[i];
    }
}


void draw_table_str(float* d[4]) {
    int count;
    int s = 7;
    int s1 = 4;
    char** headings[7] = {"Сортировка ","Время работы","Замедление","Кол-во перестановок","Увел. перестановок","Кол-во сравнений","Увел. сравнений"};
    char** sorts[4] = {"Пузырьковая","Посл. Шелла","Шейкерная  ","Посл. Кнута"};
    printf("|");
    for (int i = 0; i < s; i++)
    {
        printf("%s |", headings[i]);
    }
    printf("\n|");
    for (int i = 0; i < s1; i++) {
        printf("%s |",sorts[i]);
        for (int j = 0; j < s-1; j++) {
            //printf("    %d %d   ", j, i);
            if (d[i][j] > 1) {
                count = strlen(headings[j+1]) - (floor(abs(log10(abs(d[i][j])))) + 1) + 1 - 3;
            }
            else {
                count = strlen(headings[j+1])-3;
            }
            if (d[i][j] - ((int)d[i][j])*1.0 == 0)
            {
                printf("%duu", (int)d[i][j]);
                count -= 3;
            } else {
                printf("%.02f", d[i][j]);
            }
            for (int t = 0; t < count; t++) {
                printf(" ");
            }
            printf("|");
        }
        if (s1 - i > 1) {
            printf("\n|");
        }
    }
    printf("\n");
}
int main() {
    void (*sorts[4])(int*, int) = {bubblesort,shellsort,shakesort,shellksort};
    srand(time(0));
    setlocale(LC_ALL, "rus");

    /*time_t start, end;
    start = clock();
    double diff;
    int countOfComp = 0;
    int countOfSwap = 0;
    int time = 0;
    int* mas[] = {12,34,5,2,832,14,73,3,63,5,732,73,24,63,25,7,26,72};
    bubblesort(mas, 18, &countOfComp, &countOfSwap, &time);
    end = clock();
    diff = difftime(start, end);
    printf("%lf", diff);*/
    //int a = 4 < 5 ? 13 : 3;
    //printf("%d",567);
    /*float chi1[6] = {135,1,34,3,13,2};
    float chi2[6] = { 112,0.22,12,4.55,142,12 };
    float chi3[6] = { 144,0.123,41,1.65,15,1.33 };
    float chi4[6] = { 122,1.23,21,0.12,64,2.44 };
    float* chif[4][6] = {chi1,chi2,chi3,chi4};
    int countOfComp = 0;
    int countOfSwap = 0;
    printf("%f", chif[0][0]);
    draw_table_str(chif);
    int size1 = 10, size2 = size1;
    int* mass1;
    int* mass2;
    mass1 =(int*)malloc(size1*sizeof(int));
    mass2 = (int*)malloc(size2 * sizeof(int));
    generatemass(mass1,size1,1,100);
    copymass(mass1,mass2,size1);
    shellksort(mass2,size2);
    printmass(mass1,size1);
    printf("\n");
    printmass(mass2,size2);

    free(mass1);
    free(mass2);*/
    system("pause");
    return 0;
}