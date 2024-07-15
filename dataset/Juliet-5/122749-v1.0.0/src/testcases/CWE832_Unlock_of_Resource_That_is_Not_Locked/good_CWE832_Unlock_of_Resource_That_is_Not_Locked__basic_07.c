static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN1()
{
    if(staticFive==5)
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
