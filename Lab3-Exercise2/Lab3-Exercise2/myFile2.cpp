#include "myLinkedList.h"
#include <assert.h>

/********************************************************************************/
/* This function finds a given index from the list. */
/********************************************************************************/
int getIndex(Evaluation* eval, int index)
{
    Evaluation* current = eval; 
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return(current->student, current->grade);
        count++;
        current = current->next;
        cout << count << endl;
    }
}

/********************************************************************************/
/* This function adds a new item to the list. */
/********************************************************************************/
Evaluation* add(Evaluation* eval, int& num)
{ 
    int index;
    Evaluation* new_elm = new Evaluation();
    Evaluation* prev_elm = eval;
    Evaluation* last_elm = eval;

    cout << "Please enter the number of the element that preceeds the spot you would like this element to be." << endl;
    std::cin >> index;
    cout << "Please enter the student's name." << endl;
    std::cin >> new_elm->student;
    cout << "Please enter the student's grade." << endl;
    std::cin >> new_elm->grade;

    if (num == 0) {
        cout << "This is the first element in the list." << endl;
        new_elm->next = (eval);
        (eval) = new_elm;
        num++;
        return eval;
    }
    else if (index == 0) {
        getIndex(eval, index);
        new_elm->next = (eval);
        (eval) = new_elm;
        num++;
        return eval;
    }
    else if (0 < index < num) {
        getIndex(eval, index);
        //cout << prev_elm->student << endl;
        //cout << prev_elm->grade << endl;
        new_elm->next = prev_elm->next;
        prev_elm->next = new_elm;
        num++;
        return eval;
    }
    else if (index = num) {
        getIndex(eval, index);
        cout << eval->student << endl;
        cout << eval->grade << endl;

        new_elm->next = NULL;

        while (last_elm->next != NULL)
            last_elm = last_elm->next;

        last_elm->next = new_elm;
        num++;
        return eval;
    }
    else {
        cout<< "Try again";
    }
}

/********************************************************************************/
/* This function removes an item from the list. */
/********************************************************************************/
Evaluation* remove(Evaluation* eval, int& num) 
{
    Evaluation* current = eval; 
    int count = 0;
    int index;

    cout << "Please enter the index of the element that you would like to remove." << endl;
    std::cin >> index;

    getIndex(current, index);
    cout << current->student << endl;
    cout << current->grade << endl;

    Evaluation* temp = eval;
    Evaluation* prev = new Evaluation();

    if (temp != NULL && temp->student == current->student)
    {
        eval = temp->next;
        free(temp);
        num = num - 1;
        return eval;
    }

    while (temp != NULL && temp->student != current->student)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Does not exist" << endl;
    }

    prev->next = temp->next;
    free(temp);
    num = num - 1;
    
    return eval;
}

/********************************************************************************/
/* This function displays the completed linked list, student and grade of each item. */
/********************************************************************************/
void display(Evaluation* eval)
{ 
    while (eval != NULL)
    {
        cout << eval->student << endl;
        cout << eval->grade << endl;
        eval = eval->next;
    }
}

/********************************************************************************/
/* This function calculates the average mark for all students and displays it. */
/********************************************************************************/
int average(Evaluation* eval, int const& num)
{
    Evaluation* current = eval;
    int count = 0;
    int total = 0;
    double avg = 0.0;

    if (current == NULL) {
        return 0;
    }

    while (current != NULL) {
        count++;
        total += current->grade;
        current = current->next;
    }

    avg = (double)total/count;
    cout << "The average mark is: " << avg << endl;

	return 1;
}