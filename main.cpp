// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    
    if (head == nullptr) {
        head = temp;
        return head;  
    }
    
    SinglyLinkedListNode* curr = head;
    while(curr->next != nullptr) {
        curr = curr->next;
    }
    
    curr->next = temp;
    return head;
}