static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int data;
    data = -1; 
    if(STATIC_CONST_TRUE)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}
void FUN2()
{
    int data;
    data = -1; 
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(STATIC_CONST_TRUE)
    {
        CLOSE(data);
    }
}
void FUN3()
{
    int data;
    data = -1; 
    if(STATIC_CONST_TRUE)
    {
        data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    }
    if(STATIC_CONST_TRUE)
    {
        CLOSE(data);
    }
}
