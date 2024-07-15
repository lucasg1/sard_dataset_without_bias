void FUN0(int count);
void FUN1()
{
    int count;
    void (*funcPtr) (int) = FUN0;
    count = -1;
    count = 20;
    funcPtr(count);
}
void FUN2(int count);
void FUN3()
{
    int count;
    void (*funcPtr) (int) = FUN2;
    count = -1;
    count = RAND32();
    funcPtr(count);
}
void FUN0(int count)
{
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(int count)
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
