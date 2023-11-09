/*
 * File: 9.6.c
 * File Created: 2023/10/26 10:33:38
 * Author: Aaon212 (aaron212cn@outlook.com)
 *
 * Copyright 2023 Aaron212
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int id;
    struct list *next;
} list;

list *initlist() {
    list *head = (list *)malloc(sizeof(list));
    if (head == NULL) {
        printf("创建失败，退出程序");
        exit(0);
    } else {
        head->next = NULL;
        return head;
    }
}

// 创建——插入数据
int insert_list(list *head, int data) {
    list *node = initlist();
    node->id = data;
    // 初始化一个新的结点，准备进行链接

    if (head != NULL) {
        list *p = head;
        // 找到最后一个数据
        while (p->next != head) {
            p = p->next;
        }
        p->next = node;
        node->next = head;
        return 1;
    } else {
        printf("头结点已无元素\n");
        return 0;
    }
}

int delete_list(list *head, int del) {
    if (head == NULL) {
        printf("链表为空！\n");
        return 0;
    }
    // 建立临时结点存储头结点信息（目的为了找到退出点）
    // 如果不这么建立的化需要使用一个数据进行计数标记，计数达到链表长度时自动退出
    // 循环链表当找到最后一个元素的时候会自动指向头元素，这是我们不想让他发生的
    list *temp = head;
    list *ptr = head->next;

    while (ptr != head) {
        if (ptr->id == del) {
            if (ptr->next == head) {
                temp->next = head;
                free(ptr);
                return 1;
            }
            temp->next = ptr->next; // 核心删除操作代码
            free(ptr);
            // printf("元素删除成功！\n");
            return 1;
        }
        temp = temp->next;
        ptr = ptr->next;
    }
    printf("没有找到要删除的元素\n");
    return 0;
}

int count(list *head) {
    if (head != NULL) {
        list *p = head;
        int count = 0;
        while (p->next != head) {
            count++;
            p = p->next;
        }
        return count;
    }
    return 0;
}

int display(list *head) {
    if (head != NULL) {
        list *p = head;
        // 遍历头节点到，最后一个数据
        while (p->next != head) {
            printf("%d   ", p->next->id);
            p = p->next;
        }
        printf("\n"); // 换行
        // 把最后一个节点赋新的节点过去
        return 1;
    } else {
        printf("头结点为空!\n");
        return 0;
    }
}

int main() {
    int c = 1, k = 1;
    list *head = initlist();
    head->next = head;

    for (int i = 1; i <= 13; i++) {
        insert_list(head, i);
    }
    display(head);

    while (count(head) > 0) {
        display(head);
        if (c == 4) {
            delete_list(head, k - 1);
            c = 1;
        }
        if (k == count(head)) {
            k = 0;
        }
        k++;
        c++;
    }

    display(head);
    return 0;
}