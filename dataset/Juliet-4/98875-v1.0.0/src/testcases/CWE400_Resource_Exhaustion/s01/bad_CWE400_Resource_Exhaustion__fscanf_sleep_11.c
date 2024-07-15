void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        fscanf(stdin, "%d", &count);
    }
    if(globalReturnsTrue())
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
