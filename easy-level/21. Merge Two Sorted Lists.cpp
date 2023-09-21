class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) {
        return list2;
    } 
    
    if(list2 == NULL) {
        return list1;
    }
          
   ListNode *merge_head = NULL;
   ListNode *merge_tail = NULL;
    
   while(list1 and list2) {
       if((list1 -> val) < (list2 -> val)){
           if(merge_head == NULL) {
               merge_head = list1;
               merge_tail = list1;
               
           } else {
               merge_tail -> next = list1;
               merge_tail = list1;
           }
           list1 = list1 -> next;
       }
        else {
           if(merge_head == NULL) {
               merge_head = list2;
               merge_tail = list2;
           } else {
               merge_tail -> next = list2;
               merge_tail = list2;
           }
       	   list2 = list2 -> next;
       }
   }
    
   if(list1) {
       merge_tail -> next = list1;
   }
  
   if(list2) {
       merge_tail -> next = list2;
   }
   
   return merge_head; 
    }
};
