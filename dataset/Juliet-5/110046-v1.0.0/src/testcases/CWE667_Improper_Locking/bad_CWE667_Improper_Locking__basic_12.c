void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            static stdThreadLock VAR0 = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&VAR0))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(VAR0);
<START>
        }
<END>
    }
    else
    {
        {
            static stdThreadLock VAR1 = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&VAR1))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Acquiring lock...");
            stdThreadLockAcquire(VAR1);
            printLine("Releasing lock...");
            stdThreadLockRelease(VAR1);
            printLine("Destroying lock...");
            stdThreadLockDestroy(VAR1);
        }
    }
}
