int VAR0 = 0;
int VAR1 = 0;
void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    VAR1 = 1; 
    FUN2(data);
}
extern int VAR0;
extern int VAR1;
void FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != -1)
        {
            CLOSE(data);
        }
        data = OPEN("GoodSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
void FUN2(int data)
{
    if(VAR1)
    {
        if (data != -1)
        {
            CLOSE(data);
        }
        data = OPEN("GoodSink_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
