void FUN0()
{
    int count;
    count = -1;
    while(1)
    {
        fscanf(stdin, "%d", &count);
        break;
    }
    while(1)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
        break;
    }
}
