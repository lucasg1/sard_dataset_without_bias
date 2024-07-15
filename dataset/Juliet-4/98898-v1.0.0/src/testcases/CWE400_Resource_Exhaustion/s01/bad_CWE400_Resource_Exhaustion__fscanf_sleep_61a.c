int FUN0(int count)
{
    fscanf(stdin, "%d", &count);
    return count;
}
int FUN0(int count);
void FUN2()
{
    int count;
    count = -1;
    count = FUN0(count);
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
