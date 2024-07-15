void FUN0()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
