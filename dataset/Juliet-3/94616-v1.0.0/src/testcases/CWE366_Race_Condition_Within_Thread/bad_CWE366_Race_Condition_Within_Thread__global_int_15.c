static int VAR0 = 0;
static int VAR1 = 0;
static stdThreadLock VAR2 = NULL;
void FUN0(void *args)
{
    int i;
    for (i = 0; i < N_ITERS; i++)
    {
<START>
        VAR0 = VAR0 + 1;
<END>
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
    switch(6)
    {
    case 6:
    {
        stdThread threadA = NULL;
        stdThread threadB = NULL;
        VAR0 = 0;
        if (!stdThreadCreate(FUN0, NULL, &threadA))
        {
            threadA = NULL;
        }
        if (!stdThreadCreate(FUN0, NULL, &threadB))
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
        printIntLine(VAR0);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
