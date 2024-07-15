namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
}
} 
namespace NAMESPACE0
{
void FUN0(FILE * &data);
void FUN2()
{
    FILE * data;
    data = NULL;
    FUN0(data);
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
} 
