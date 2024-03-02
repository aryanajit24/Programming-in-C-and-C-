struct linkedlist{
    int z;
    struct linkedlist *next;
};

struct linkedlist* movefront(struct linkedlist* list, int num);
struct linkedlist* moveback(struct linkedlist* list, int num);
struct linkedlist* front(struct linkedlist* list);
void printlist(struct linkedlist* list);
void frees(struct linkedlist* list);
