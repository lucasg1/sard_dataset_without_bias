static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
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
void FUN3()
{
    if(FUN0())
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
