static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(FUN0())
    {
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
