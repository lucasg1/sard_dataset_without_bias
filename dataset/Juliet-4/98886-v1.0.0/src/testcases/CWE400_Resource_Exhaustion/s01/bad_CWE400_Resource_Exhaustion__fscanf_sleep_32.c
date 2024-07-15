void FUN0()
{
    int count;
    int *countPtr1 = &count;
    int *countPtr2 = &count;
    count = -1;
    {
        int count = *countPtr1;
        fscanf(stdin, "%d", &count);
        *countPtr1 = count;
    }
    {
        int count = *countPtr2;
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
