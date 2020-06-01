/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* create_node(int x){
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
    p->val = x;
    p->next = NULL;
    return p;
}

void add_last(struct ListNode **p, int x){
    struct ListNode *aux = *p;
    struct ListNode *aux2 = NULL;
    
    if (!*p) *p = create_node(x);
    else{
        while(aux->next) aux = aux->next;
        aux2 = create_node(x);
        aux->next = aux2;
    }
    aux2 = NULL;
    aux = NULL;
}


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode *result_list= NULL;
    
    while (l1 && l2){
        if (l1->val<=l2->val){
            add_last(&result_list, l1->val);
            l1 = l1->next;
        }
        else{
            add_last(&result_list, l2->val);
            l2 = l2->next;
        }
    }
    
    if (!l1) while (l2){
        add_last(&result_list, l2->val);
        l2 = l2->next;
    }
    
    else while (l1){
        add_last(&result_list, l1->val);
        l1 = l1->next;
    }
    
 
    return result_list;

}