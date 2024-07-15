void FUN0()
{
    int count;
    count = -1;
    if(GLOBAL_CONST_TRUE)
    {
        count = RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
