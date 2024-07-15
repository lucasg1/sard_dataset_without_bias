namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN2()
{
    int data;
    data = -1;
    FUN0(data);
    if (data != -1)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
} 
