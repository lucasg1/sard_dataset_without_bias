static stdThreadLock VAR0 = NULL;
void FUN0(void *args)
{
    int *pIntArgs = (int*)args;
    int i;
    for (i = 0; i < N_ITERS; i++)
    {
<START>
        *pIntArgs = *pIntArgs + 1;
<END>
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
    if(globalFive==5)
    {
        {
            stdThread threadA = NULL;
            stdThread threadB = NULL;
            int VAR1;
            VAR1 = 0;
            if (!stdThreadCreate(FUN0, (void*)&VAR1, &threadA))
            {
                threadA = NULL;
            }
            if (!stdThreadCreate(FUN0, (void*)&VAR1, &threadB))
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
            printIntLine(VAR1);
        }
    }
}
