void FUN0(int * dataPtr);
void FUN1()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    FUN0(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    if (data != -1)
    {
<START>
        fclose((FILE *)data);
<END>
    }
}
