#include "tst.h"
#include "common.h"

tst_pp init(void) {
    tst_pp TPP /* har, har */ = (tst_pp) calloc(1, sizeof(tst_p));
    return TPP;
}

void* lookup_tst(tst_pp head, char* key) {
    if (head == NULL) return NULL;
    tst_p cur = *head;
    while (cur != NULL) {
        if (*key) {
            if (*key > cur->c) // slide right
                cur = cur->right;
            else if (*key < cur->c) // slide left
                cur = cur->left;
            else { // cha cha real smooth
                key++;
                cur = cur->down;
            }
        } else {
            break;
        }
    }
    if (!cur) return NULL; // got nothin'
    else return cur->obj;  // :)
}

int insert_tst(tst_pp head, char* key, void* obj) {
    if (head == NULL) return -1;
    else if (key == NULL) return -1;
    tst_p cur = *head;
}
