#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <iostream>
#define MAXLENGTH 9

using namespace std;

struct EL_SP
{
    char id[MAXLENGTH]; //идентификатор
    struct EL_SP *nextElement; //ссылка на след. элемент
};

/*----------------------------------------------*/
/*функция включения очередного идентиф. в список*/
/*----------------------------------------------*/
void includeID(struct EL_SP **p, char t_id[])
{
    struct EL_SP *pt, *k, *j;
    pt = (struct EL_SP *) malloc(sizeof(struct EL_SP));
    strcpy(pt->id, t_id);
    if (*p == NULL || strcmp(pt->id, (*p)->id) < 0) {
        pt->nextElement = *p;
        *p = pt;
    } else {
        k = *p;
        while (k != NULL && strcmp(pt->id, k->id) >= 0) {
            j = k;
            k = k->nextElement;
        }

        j->nextElement = pt;
        pt->nextElement = k;
    }
}

/*-------------------------------------------------*/
/* функция печати списка */
/*-------------------------------------------------*/
void printList(struct EL_SP *p)
{
    struct EL_SP *i;
    cout << "\nРезультат:\n";

    for(i = p; i != NULL; i = i->nextElement)
        puts(i->id);
}

void deleteEl(struct EL_SP *p, int n, char t_id[])
{
    int i = 0;
    struct EL_SP *pt;

    for (pt = p; pt != NULL; pt = pt -> nextElement)
    {
        puts(pt->id);
        i++;
        // вычисляем предпоследний элемент n - 2
        if(i > n - 2)
        {
            pt = pt->nextElement;
            pt = pt->nextElement;
            puts(pt->id);
            break;
        }
    }
}

int replaseEl (struct EL_SP *p, int k, char* str)
{
  struct EL_SP *pt;
  int i;
  pt = p;
  for(i = 0; i < k; i++)
  {
    if(pt->nextElement != NULL)
      pt = pt->nextElement;
    else {
      printf("..."); // превышение количества элементов списка
      return(-1);
    }
  }
  strncpy(pt->id,str,MAXLENGTH);
  return(0);
}

main()
{
    setlocale(LC_CTYPE, "rus");

    struct EL_SP *p;
    unsigned n;
    unsigned i;
    char t_id[MAXLENGTH];

    cout << "\nВведите число идентификаторов\n n = ";
    scanf("%u", &n);
    getchar();
    p = NULL;

    cout << "Введите идентификаторы ";
    cout << "после каждого нажимайте клавишу <Enter>\n";

    for(i = 1; i <= n; i++)
    {
        gets(t_id);
        /* включение ид-ра в список */
        includeID(&p, t_id);
    }

    /* печать списка */
    printList(p);

    cout << "Удаление предпоследнего элемента и печать списка: " << endl;
    if(n == 2)
    {
        cout << "Список пуст";
    }

    if (n!=2 && n !=1 && n!=0)
    {
        deleteEl(p, n, t_id);
    }

    cout << "\nДля завершения нажмите любую клавишу" << endl;
    getch();
}
