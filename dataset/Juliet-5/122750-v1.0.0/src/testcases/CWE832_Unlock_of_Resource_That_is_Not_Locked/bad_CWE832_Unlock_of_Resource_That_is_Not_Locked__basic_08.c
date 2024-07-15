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
            printLine("Releasing lock...");
<START>
            stdThreadLockRelease(VAR0);
<END>
            printLine("Destroying lock...");
            stdThreadLockDestroy(VAR0);
        }
    }
}
