void FUN0()
{
    int count;
    count = -1;
    if(globalTrue)
    {
        count = RAND32();
    }
    if(globalTrue)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
