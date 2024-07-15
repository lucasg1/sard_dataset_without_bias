void FUN0()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    {
        int countCopy = count;
        int count = countCopy;
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
