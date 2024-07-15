static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
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
