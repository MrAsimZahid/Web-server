#include <stdio.h>

void *printMsgFunction(void *ptr);

int main()
{
    while(true)
    {
        pthread_t thread;
        char *msg = "thread";
        int thr1, thr2;

        thr1 = pthread_create(&thread1, NULL, printMsgFunction, (void*)msg);

        // PTHREAD WHAIT STATE
        pthread_join(thr1, NULL);

        printf("Thread returns: %d\n", thr1);

    }
    exit(0);
}

void *printMsgFunction( void *ptr )
{
    char *msg;
    msg = (char*) ptr;
    printf("%s \n", message);
}