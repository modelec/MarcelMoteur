#include "Task.h"

// Constructeur
Task::Task() : is_paused(false), is_running(false) {}

// Démarre la tâche
void Task::start()
{
    is_running = true;
    is_paused = false;
}

// Met en pause la tâche
void Task::pause()
{
    if (is_running && !is_paused)
    {
        is_paused = true;
    }
}

// Reprend la tâche
void Task::resume()
{
    if (is_paused)
    {
        is_paused = false;
    }
}

// Arrête la tâche
void Task::stop()
{
    if (is_running)
    {
        is_running = false;
        is_paused = false;
    }
}

// Getters
bool Task::isPaused()
{
    return is_paused;
}
bool Task::isRunning()
{
    return is_running;
}