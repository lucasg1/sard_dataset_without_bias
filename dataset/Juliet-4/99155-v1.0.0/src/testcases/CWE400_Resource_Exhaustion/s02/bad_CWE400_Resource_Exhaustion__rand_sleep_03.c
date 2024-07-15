void FUN0()
{
    int count;
    count = -1;
    if(5==5)
    {
        count = RAND32();
    }
    if(5==5)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
