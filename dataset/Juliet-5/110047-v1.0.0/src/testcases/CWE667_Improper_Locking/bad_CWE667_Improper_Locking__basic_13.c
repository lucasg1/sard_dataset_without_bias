void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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
}
