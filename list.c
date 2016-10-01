#include<stdlib.h>
#include<string.h>

#include<"list.h">

void list_init(List *list, void (*destroy)(void *data)) {
    list->size = 0;
    list->destroy = destroy;
    list->head = NULL;
    list->tail = NULL;
    return;
}
void list_destroy(List *list) {
    void *data;
    while(list_size(list) > 0) {
        if(list_rem_next(list, NULL, (void **)&data) == 0 && list->destroy != NULL) {
            list->destroy(data);
        }
    }
}
