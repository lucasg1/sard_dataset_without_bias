static int FUN0(int count)
{
    count = RAND32();
    return count;
}
void FUN1()
{
    int count;
    count = -1;
    count = FUN0(count);
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
