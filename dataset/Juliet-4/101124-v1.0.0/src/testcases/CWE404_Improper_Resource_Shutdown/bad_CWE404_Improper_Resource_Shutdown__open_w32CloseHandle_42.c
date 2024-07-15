static int FUN0(int data)
{
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
    if (data != -1)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
