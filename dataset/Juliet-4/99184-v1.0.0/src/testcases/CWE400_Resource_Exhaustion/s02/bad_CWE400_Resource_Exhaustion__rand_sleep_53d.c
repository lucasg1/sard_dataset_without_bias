void FUN0(int count);
void FUN1(int count)
{
    FUN0(count);
}
void FUN1(int count);
void FUN3(int count)
{
    FUN1(count);
}
void FUN3(int count);
void FUN5()
{
    int count;
    count = -1;
    count = RAND32();
    FUN3(count);
}
void FUN0(int count)
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
