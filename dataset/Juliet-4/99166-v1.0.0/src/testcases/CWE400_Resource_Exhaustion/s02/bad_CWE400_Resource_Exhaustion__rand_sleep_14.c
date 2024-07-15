void FUN0()
{
    int count;
    count = -1;
    if(globalFive==5)
    {
        count = RAND32();
    }
    if(globalFive==5)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
