void FUN0()
{
    if(globalTrue)
    {
        {
            static stdThreadLock VAR0 = NULL;
            printLine("Creating lock...");
            if (!stdThreadLockCreate(&VAR0))
            {
                printLine("Could not create lock");
                exit(1);
            }
            printLine("Releasing lock...");
<START>
            stdThreadLockRelease(VAR0);
<END>
            printLine("Destroying lock...");
            stdThreadLockDestroy(VAR0);
        }
    }
}
