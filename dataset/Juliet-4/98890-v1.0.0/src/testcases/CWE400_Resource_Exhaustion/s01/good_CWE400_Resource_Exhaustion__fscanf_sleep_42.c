static int FUN0(int count)
{
    count = 20;
    return count;
}
void FUN1()
{
    int count;
    count = -1;
    count = FUN0(count);
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
static int FUN2(int count)
{
    fscanf(stdin, "%d", &count);
    return count;
}
void FUN3()
{
    int count;
    count = -1;
    count = FUN2(count);
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
