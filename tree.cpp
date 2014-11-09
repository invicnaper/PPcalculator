#include "tree.h"
#include <stdlib.h>
#include <stdio.h>
#include "types.h"
mList * List::insetElement(mList * list, char operation){
    mList * myl;

    return myl;
}

mList * List::parseList(mList * list){
    mList * ml;

    return ml;

}

pile * Pile::addToPile(pile ** myp, char info){
        //int * inf = (int *)info;
        //char * in = (char *) info;
        pile *p_new = (pile *)malloc(sizeof *p_new);
        if (p_new != NULL)
        {
                p_new->info = info;
                p_new->pLast = *myp;
                *myp = p_new;
        }
        return NULL;
}

int Pile::delFromPile(pile ** myp){

    int ret = -1;
    Types t;
    if (myp != NULL)
    {
        pile *temp = (*myp)->pLast;
        ret = t.charToInt((*myp)->info);
        free(*myp), *myp = NULL;
        *myp = temp;
    }
    return ret;
}
void Pile::pileClear(pile ** myp){
    while (*myp!= NULL)
    {
        this->delFromPile(myp);
    }
    return ;
}
void Pile::drawPile(pile ** myp){
    if(myp!=NULL)
    {
            pile *p=*myp;
            while(p) {
            printf("%c \n",p->info);
            p=p->pLast;
            }
    }
}
