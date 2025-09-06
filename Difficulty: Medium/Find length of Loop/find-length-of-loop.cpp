class Solution {
public:
    int lengthOfLoop(Node *head) {
        if (!head || !head->next) return 0;
        
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                return countLoopLength(slow);
            }
        }
        
        return 0; 
    }
    
private:
    int countLoopLength(Node* meetingPoint) {
        int count = 1;
        Node* current = meetingPoint->next;
        
        while (current != meetingPoint) {
            count++;
            current = current->next;
        }
        
        return count;
    }
};