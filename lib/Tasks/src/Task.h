#ifndef TASK_H
#define TASK_H

class Task
{
private:
    bool is_running;

public:
    Task();  // Constructeur
    ~Task(); // Déstructeur
    // Démarrage de la tâche
    void start();
    // Arrêt de la tâche
    void stop();
    // Getters
    bool isRunning();
};

#endif // TASK_H
