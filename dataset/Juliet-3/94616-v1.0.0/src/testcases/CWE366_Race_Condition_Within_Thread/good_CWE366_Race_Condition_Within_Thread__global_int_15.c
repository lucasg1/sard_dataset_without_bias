static int VAR0 = 0;
static int VAR1 = 0;
static stdThreadLock VAR2 = NULL;
void FUN0(void *args)
{
    int i;
    for (i = 0; i < N_ITERS; i++)
    {
        VAR0 = VAR0 + 1;
    }
}
void FUN1(void *args)
{
    int i;
    stdThreadLockAcquire(VAR2);
    for (i = 0; i < N_ITERS; i++)
    {
        VAR1 = VAR1 + 1;
    }
    stdThreadLockRelease(VAR2);
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
        if (!stdThreadLockCreate(&VAR2))
        {
            return;
        }
        if (!stdThreadCreate(FUN1, NULL, &threadA))
        {
            threadA = NULL;
        }
        if (!stdThreadCreate(FUN1, NULL, &threadB))
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
        stdThreadLockDestroy(VAR2);
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
        if (!stdThreadLockCreate(&VAR2))
        {
            return;
        }
        if (!stdThreadCreate(FUN1, NULL, &threadA))
        {
            threadA = NULL;
        }
        if (!stdThreadCreate(FUN1, NULL, &threadB))
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
        stdThreadLockDestroy(VAR2);
        printIntLine(VAR1);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
