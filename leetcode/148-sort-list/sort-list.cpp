/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void merge(vector<int>& v, int start,int end){
        int mid = start+(end-start)/2;
        int len1 = mid-start+1;
        int len2 = end - mid;

        int* first = new int[len1];
        int* second = new int[len2];

        int mainarrindex = start;
        for(int i=0;i<len1;i++){
            first[i]=v[mainarrindex++];
        }
        mainarrindex = mid+1;
        for(int i=0;i<len2;i++){
            second[i]=v[mainarrindex++];
        }
        //merging
        int index1=0;
        int index2=0;
        mainarrindex = start;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                v[mainarrindex++]=first[index1++];
            }else{
                v[mainarrindex++]=second[index2++];
            }
        }
        while(index1<len1){
            v[mainarrindex++]=first[index1++];
        }
        while(index2<len2){
            v[mainarrindex++]=second[index2++];
        }
        delete []first;
        delete []second;
    }
    void mergesort(vector<int>& v, int start, int end){
        if(start>=end){
            return;
        }
        int mid=start+(end-start)/2;
        mergesort(v,start,mid);
        mergesort(v,mid+1,end);

        merge(v,start,end);
    }
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp != nullptr){
            v.push_back(temp->val);
            temp = temp -> next;
        }

        mergesort(v,0,v.size()-1);
        int i=0;
        temp = head;
        while(temp){
            temp->val = v[i++];
            temp = temp->next;
        }
        return head;

    }
};