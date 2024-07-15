int FUN0(int count)
{
    count = 20;
    return count;
}
int FUN1(int count)
{
    count = RAND32();
    return count;
}
int FUN0(int count);
void FUN3()
{
    int count;
    count = -1;
    count = FUN0(count);
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
int FUN1(int count);
void FUN5()
{
    int count;
    count = -1;
    count = FUN1(count);
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
