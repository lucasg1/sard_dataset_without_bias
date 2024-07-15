void FUN0()
{
    int i,j;
    int count;
    count = -1;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%d", &count);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
