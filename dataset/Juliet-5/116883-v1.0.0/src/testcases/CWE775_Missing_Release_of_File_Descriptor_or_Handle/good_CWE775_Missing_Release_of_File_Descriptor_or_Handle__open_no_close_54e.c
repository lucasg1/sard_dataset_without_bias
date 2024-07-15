void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    FUN2(data);
}
void FUN1(int data);
void FUN6(int data)
{
    FUN1(data);
}
void FUN6(int data);
void FUN2(int data)
{
    FUN6(data);
}
void FUN0(int data)
{
    if (data != -1)
    {
        CLOSE(data);
    }
}
