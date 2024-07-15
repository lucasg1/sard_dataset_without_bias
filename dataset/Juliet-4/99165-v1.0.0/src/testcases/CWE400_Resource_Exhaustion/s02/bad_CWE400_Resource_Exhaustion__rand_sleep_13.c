void FUN0()
{
    int count;
    count = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        count = RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
