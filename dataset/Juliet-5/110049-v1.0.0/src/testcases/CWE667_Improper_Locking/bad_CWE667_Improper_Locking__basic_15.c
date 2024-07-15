void FUN0()
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
<START>
    }
<END>
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
