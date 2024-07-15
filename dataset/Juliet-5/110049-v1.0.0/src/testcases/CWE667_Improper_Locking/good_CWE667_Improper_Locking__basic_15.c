void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
