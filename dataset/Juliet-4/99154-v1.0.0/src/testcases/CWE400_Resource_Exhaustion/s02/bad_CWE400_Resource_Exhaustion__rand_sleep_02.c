void FUN0()
{
    int count;
    count = -1;
    if(1)
    {
        count = RAND32();
    }
    if(1)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
