void FUN0(int count);
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    FUN0(count);
}
void FUN2(int count);
void FUN0(int count)
{
    FUN2(count);
}
void FUN2(int count)
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
