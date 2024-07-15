void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
            printLine("Releasing lock...");
            stdThreadLockRelease(VAR0);
            printLine("Destroying lock...");
            stdThreadLockDestroy(VAR0);
        }
    }
}
