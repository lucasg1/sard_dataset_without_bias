void FUN0()
{
    int count;
    count = -1;
    if(1)
    {
        fscanf(stdin, "%d", &count);
    }
    if(1)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
