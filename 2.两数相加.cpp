/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 *
 * https://leetcode-cn.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (36.58%)
 * Likes:    3888
 * Dislikes: 0
 * Total Accepted:    321.3K
 * Total Submissions: 878.2K
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 * 
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 * 
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 * 
 * 示例：
 * 
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* head=new ListNode(-1);//存放结果的链表
        // ListNode* h=head;//移动指针
        // int sum=0;//每个位的加和结果
        // bool carry=false;//进位标志
        // while(l1!=NULL||l2!=NULL)
        // {
        //     sum=0;
        //     if(l1!=NULL)
        //     {
        //         sum+=l1->val;
        //         l1=l1->next;
        //     }
        //     if(l2!=NULL)
        //     {
        //         sum+=l2->val;
        //         l2=l2->next;
        //     }
        //     if(carry)
        //         sum++;
        //     h->next=new ListNode(sum%10);
        //     h=h->next;
        //     carry=sum>=10?true:false;
        // }
        // if(carry)
        // {
        //     h->next=new ListNode(1);
        // }
        // return head->next;
        
        ListNode* preHead = new ListNode(0);
        ListNode* p = preHead;
        int sum = 0;
        bool carry = false;
        while(l1 || l2)
        {
            sum = 0;
            if(l1!=NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
           if(carry)
               sum++;
            p->next = new ListNode(sum%10);
            p = p->next;
            carry = sum >= 10 ? true :false;
           
    }
        if(carry)
            p->next = new ListNode(1);
        return preHead->next;
    
    }
};
// @lc code=end

