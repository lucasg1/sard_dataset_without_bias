void FUN0(int count);
void FUN1(int count)
{
    FUN0(count);
}
void FUN2(int count);
void FUN3(int count)
{
    FUN2(count);
}
void FUN1(int count);
void FUN5()
{
    int count;
    count = -1;
    count = 20;
    FUN1(count);
}
void FUN3(int count);
void FUN7()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    FUN3(count);
}
void FUN9(int count);
void FUN0(int count)
{
    FUN9(count);
}
void FUN11(int count);
void FUN2(int count)
{
    FUN11(count);
}
void FUN9(int count)
{
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN11(int count)
{
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
