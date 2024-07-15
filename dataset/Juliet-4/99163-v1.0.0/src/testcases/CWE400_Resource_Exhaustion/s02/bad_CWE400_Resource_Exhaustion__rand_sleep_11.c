void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        count = RAND32();
    }
    if(globalReturnsTrue())
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
