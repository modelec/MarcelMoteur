#ifndef TASK_H
#define TASK_H

class Task
{
private:
    bool is_paused;
    bool is_running;

public:
    Task(); // Constructeur
    // Mise en pause de la tâche
    void pause();
    // Reprise de la tâche
    void resume();
    // Démarrage de la tâche
    void start();
    // Arrêt de la tâche
    void stop();
    // Getters
    bool isPaused();
    bool isRunning();
};

#endif // TASK_H
