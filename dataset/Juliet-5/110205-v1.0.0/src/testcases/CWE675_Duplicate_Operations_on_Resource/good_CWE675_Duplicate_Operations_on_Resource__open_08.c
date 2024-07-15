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
    if(FUN0())
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN3()
{
    int data;
    data = -1; 
    if(FUN0())
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN4()
{
    int data;
    data = -1; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(FUN0())
    {
        CLOSE(data);
    }
}
void FUN5()
{
    int data;
    data = -1; 
    if(FUN0())
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(FUN0())
    {
        CLOSE(data);
    }
}
