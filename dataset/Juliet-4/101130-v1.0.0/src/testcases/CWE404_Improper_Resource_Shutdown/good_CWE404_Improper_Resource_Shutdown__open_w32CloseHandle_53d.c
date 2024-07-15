void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    FUN0(data);
}
void FUN3(int data);
void FUN0(int data)
{
    FUN3(data);
}
void FUN5(int data);
void FUN3(int data)
{
    FUN5(data);
}
void FUN5(int data)
{
    if (data != -1)
    {
        CLOSE(data);
    }
}
