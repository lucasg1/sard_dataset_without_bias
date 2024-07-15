static stdThreadLock VAR0 = NULL;
void FUN0(void *args)
{
    int *pIntArgs = (int*)args;
    int i;
    for (i = 0; i < N_ITERS; i++)
    {
        *pIntArgs = *pIntArgs + 1;
    }
}
void FUN1(void *args)
{
    int *pIntArgs = (int *)args;
    int i;
    stdThreadLockAcquire(VAR0);
    for (i = 0; i < N_ITERS; i++)
    {
        *pIntArgs = *pIntArgs + 1;
    }
    stdThreadLockRelease(VAR0);
}
void FUN2()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            stdThread threadA = NULL;
            stdThread threadB = NULL;
            int VAR1;
            VAR1 = 0;
            if (!stdThreadLockCreate(&VAR0))
            {
                return;
            }
            if (!stdThreadCreate(FUN1, (void*)&VAR1, &threadA))
            {
                threadA = NULL;
            }
            if (!stdThreadCreate(FUN1, (void*)&VAR1, &threadB))
            {
                threadB = NULL;
            }
            if (threadA && stdThreadJoin(threadA))
            {
                stdThreadDestroy(threadA);
            }
            if (threadB && stdThreadJoin(threadB))
            {
                stdThreadDestroy(threadB);
            }
            stdThreadLockDestroy(VAR0);
            printIntLine(VAR1);
        }
    }
}
void FUN3()
{
    if(1)
    {
        {
            stdThread threadA = NULL;
            stdThread threadB = NULL;
            int VAR1;
            VAR1 = 0;
            if (!stdThreadLockCreate(&VAR0))
            {
                return;
            }
            if (!stdThreadCreate(FUN1, (void*)&VAR1, &threadA))
            {
                threadA = NULL;
            }
            if (!stdThreadCreate(FUN1, (void*)&VAR1, &threadB))
            {
                threadB = NULL;
            }
            if (threadA && stdThreadJoin(threadA))
            {
                stdThreadDestroy(threadA);
            }
            if (threadB && stdThreadJoin(threadB))
            {
                stdThreadDestroy(threadB);
            }
            stdThreadLockDestroy(VAR0);
            printIntLine(VAR1);
        }
    }
}
