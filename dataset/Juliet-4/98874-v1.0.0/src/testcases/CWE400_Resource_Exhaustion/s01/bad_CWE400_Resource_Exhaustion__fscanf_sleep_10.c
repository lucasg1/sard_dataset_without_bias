void FUN0()
{
    int count;
    count = -1;
    if(globalTrue)
    {
        fscanf(stdin, "%d", &count);
    }
    if(globalTrue)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
