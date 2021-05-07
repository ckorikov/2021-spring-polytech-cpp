#include "linked_list.h"
#include <iostream>

void print(List &list) {
    ListNode *print_list = list.head;
    while (print_list) {
        std::cout << print_list->data << "->";
        print_list = print_list->next;
    }
    std::cout << "[x]" << std::endl;
}

List duplicate(List &list) {
    List list_duplicate{};
    if (list.head == nullptr)
        return list_duplicate;
    list_duplicate.head = new ListNode{list.head->data};
    list_duplicate.head->next = new ListNode{list.head->data};
    ListNode *duplicate_ptr = list_duplicate.head->next;
    ListNode *ptr = list.head->next;
    while (ptr) {
        duplicate_ptr->next = new ListNode{ptr->data};
        duplicate_ptr->next->next = new ListNode{ptr->data};
        duplicate_ptr = duplicate_ptr->next->next;
        ptr = ptr->next;
    }
    return list_duplicate;
}

unsigned int size(List &list) {
    int size = 0;
    ListNode *current = list.head;
    while (current) {
        current = current->next;
        size++;
    }
    return size;
}

void delete_list(List &list) {
    while (list.head) {
        ListNode *temp = list.head;
        list.head = list.head->next;
        delete temp;
    }
}

void add(List &list, int value) {
    auto *new_node = new ListNode{value};
    if (list.head == nullptr) {
        list.head = new_node;
    } else {
        ListNode *current = list.head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }
}

bool compare(List &list_a, List &list_b) {
    ListNode *copy_a = list_a.head;
    ListNode *copy_b = list_b.head;
    while (copy_a && copy_b) {
        if (copy_a->data != copy_b->data)
            return false;
        copy_a = copy_a->next;
        copy_b = copy_b->next;
    }
    if (!copy_a && !copy_b)
        return true;
    else
        return false;
}

List merge(List &list_a, List &list_b) {
    ListNode *copy_a = list_a.head;
    ListNode *copy_b = list_b.head;
    List list_l{};
    while (copy_a || copy_b) {
        if (copy_a->data < copy_b->data && copy_a && copy_b) {
            add(list_l, copy_a->data);
            copy_a = copy_a->next;
        }
        if (copy_b->data < copy_a->data && copy_b && copy_a) {
            add(list_l, copy_b->data);
            copy_b = copy_b->next;
        }
        if (!copy_a && copy_b) {
            add(list_l, copy_b->data);
            copy_b = copy_b->next;
        }
        if (!copy_b && copy_a) {
            add(list_l, copy_a->data);
            copy_a = copy_a->next;
        }
    }
    return list_l;
}

List concat(List &list_a, List &list_b) {
    List list_concat{};
    ListNode *ptr_a = list_a.head;
    ListNode *ptr_b = list_b.head;
    while (ptr_a) {
        add(list_concat, ptr_a->data);
        ptr_a = ptr_a->next;
    }
    while (ptr_b) {
        add(list_concat, ptr_b->data);
        ptr_b = ptr_b->next;
    }
    return list_concat;
}