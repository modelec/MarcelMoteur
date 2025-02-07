#include "Task.h"

// Constructeur
Task::Task() : is_running(false) {}

Task::~Task()
{
    // Si la tâche est en cours d'exécution, on l'arrête
    stop();
}

// Démarre la tâche
void Task::start()
{

    is_running = true;
}

// Arrête la tâche
void Task::stop()
{

    is_running = false;
}

// Getters
bool Task::isRunning()
{
    return is_running;
}