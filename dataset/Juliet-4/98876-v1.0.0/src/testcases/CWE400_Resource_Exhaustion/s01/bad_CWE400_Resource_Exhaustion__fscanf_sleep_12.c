void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrueOrFalse())
    {
        fscanf(stdin, "%d", &count);
    }
    else
    {
        count = 20;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
    else
    {
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
