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
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN3()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
