# Fair-Queueing-Algorithm-for-Scheduling-on-Minix-OS
## An implementation of fair queueing algorithm for process scheduling on the Minix Operating System. 
Initally the process scheduling on our version of Minix was being done using the First Come First Served algorithm (or First In First Out).
We have changed the scheduling algorithm to our own custom implementation of the Fair Queueing algorithm.
The purpose of this change was to make the scheduling of processes fairer and more time efficient.

## Virtual Machine
In order to work on Minix Operating System's scource code we have used a Virtual Machine. Each time we made any change to the code we made a Virtual Image of the Operating System and rebooted the Virtual Machine using the new Virtual Image.

## Scheduling in the Minix Operating System
The Minix OS uses messages to schedule the processes. Each time a new process is created, the scheduler sends a message to the kernel.
The kernel then places the process into the queue of processes that will be execute.

## Changes to the Scheduler
We have implemented a priority system by adding several fields to the process scource code.
These fields are used to calculate the priority of a process. They obtain relevant values when the scheduling of a process starts and they get updated by the Scheduler as time goes on. We have implemented the priority calclations in the Scheduler and added the priority value of a process into the message that the Scheduler sends to the kernel.

## Changes to the kernel
We have changed the part of the kernel that select which process will be executed.
Now that each process comes with a priority value we can simply sort the queue of processes by their priority, such that the process with the highest priority is the first on queue and next to be executed.
To do this we have implemented a simple sorting algorithm in the kernel's scource code.

## Testing
In order to test our implementation of fair queueing we have used a bash script that initializes a simple process that prints a number every second.
We ran this script from several (5) different terminals consecutively and found that the frequency of the printed numbers was the same on every terminal, indicating that the process time was being fairly distributed among all the processes.
