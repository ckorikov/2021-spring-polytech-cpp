#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct ListNode {
    int data{};
    ListNode *next{nullptr};
};

struct List {
    ListNode *head{nullptr};
};

void print(List &list);

void delete_list(List &list);

unsigned int size(List &list);

void add(List &list, int value);

List duplicate(List &list);

bool compare(List &list_a, List &list_b);

List concat(List &list_a, List &list_b);

List merge(List &list_a, List &list_b);

#endif // LINKED_LIST_H