/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

unsigned long long getNumberByList(struct ListNode* l);
struct ListNode* getListByNumber(unsigned long  n);
int count_zeroes(struct ListNode* l);



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    unsigned long n1 = getNumberByList(l1);
    unsigned long n2 = getNumberByList(l2);
    unsigned long number = n1+n2;
    struct Listnode *listToreturn = getListByNumber(number);
    return listToreturn;
}


struct ListNode* create_node(int x) {
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
    p->val = x;
    p->next = NULL;
    return p;
}

unsigned long long getNumberByList(struct ListNode* l){
    
    unsigned long long n = 0;
    int c_zero = count_zeroes(l);
   
    while (l){
        n = (n*10)+l->val;
        l = l->next;
    }
   
    unsigned long long aux = n;
    int d = 0;
    n = 0;

    while (aux != 0) {
        d = aux % 10;
        n = (n*10)+d;
        aux /= 10;
    }
    
    if (c_zero!=0) return n*(pow(10,c_zero));

    return n;
}


int count_zeroes(struct ListNode* l){
    int count = 0;
    while (true){
        if (l->val==0){
            count++;
            if (l->next){
                l=l->next;
            }
            else break;
        } 
        else break;
    }
    return count;
}


struct ListNode* getListByNumber(unsigned long n){
    struct ListNode *list_to_create = NULL;
    struct ListNode *aux_pointer;
    struct ListNode *aux_pointer_2;
    
    if (n==0) return create_node(0);
   
    unsigned long long aux = n;
    int d = 0;

    while (aux != 0) {
        d = aux % 10;
       
        if(!list_to_create){
            list_to_create = create_node(d);
        }
        else {
            aux_pointer = list_to_create;
            aux_pointer_2 = list_to_create;
           
           
            while(aux_pointer){
                aux_pointer_2 = aux_pointer;
                aux_pointer = aux_pointer->next;
            }
           
            aux_pointer = create_node(d);
            aux_pointer_2->next = aux_pointer;
        }
       
        aux /= 10;
    }
    return list_to_create;
}