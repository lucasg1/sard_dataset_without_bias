void FUN0()
{
    int data;
    data = -1; 
    if(1)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    int data;
    data = -1; 
    if(1)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(1)
    {
        ; 
    }
}
void FUN2()
{
    int data;
    data = -1; 
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(1)
    {
        CLOSE(data);
    }
}
void FUN3()
{
    int data;
    data = -1; 
    if(1)
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(1)
    {
        CLOSE(data);
    }
}
