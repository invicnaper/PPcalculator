#ifndef TREE_H
#define TREE_H

typedef struct sList{
    char operation; /* for single operation */
    struct sList * pNext;
}mList;

/* pile */

typedef struct sPile{
    char info;
    struct sPile * pLast;
}pile;

class List{
    public:
        mList * insetElement(mList * list, char operation);
        mList * delElement(mList * list, char operation);
        mList * freeList(mList * list);
        mList * showList(mList * list);
        mList * parseList(mList* list);
};
class Pile{
        public:
                pile * addToPile(pile ** myp,char info);
                int delFromPile(pile ** myp);
                void pileClear(pile ** myp);
                void drawPile(pile ** myp);
                pile * methode_inv;


};
class tree{

};
#endif // TREE_H
