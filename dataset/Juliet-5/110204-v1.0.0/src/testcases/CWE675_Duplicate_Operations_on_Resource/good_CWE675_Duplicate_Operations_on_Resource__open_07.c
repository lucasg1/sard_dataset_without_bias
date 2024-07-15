static int staticFive = 5;
void FUN0()
{
    int data;
    data = -1; 
    if(staticFive==5)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(staticFive==5)
    {
        ; 
    }
}
void FUN2()
{
    int data;
    data = -1; 
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(staticFive==5)
    {
        CLOSE(data);
    }
}
void FUN3()
{
    int data;
    data = -1; 
    if(staticFive==5)
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(staticFive==5)
    {
        CLOSE(data);
    }
}
