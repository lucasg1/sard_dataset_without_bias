void FUN0()
{
    int count;
    count = -1;
    count = RAND32();
    {
        int countCopy = count;
        int count = countCopy;
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
