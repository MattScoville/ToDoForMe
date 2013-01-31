#ifndef TASK_H
#define TASK_H

#include <list>
#include <string>
using namespace std;


class Task
{
    public:
        /** Default constructor */
        Task();
        /** Default destructor */
        virtual ~Task();
    protected:
    private:
        string str_Task;  // The Actual task
        int owner_ID;  // The ID of task above this one.
        int ID;  // The ID of this task
        bool completed; // If the task is completed
        list<Task> Subtasks;  // a list of subtasks
};

#endif // TASK_H
