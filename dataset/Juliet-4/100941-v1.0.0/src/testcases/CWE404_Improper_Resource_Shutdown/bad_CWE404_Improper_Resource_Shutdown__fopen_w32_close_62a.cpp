namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = fopen("BadSource_fopen.txt", "w+");
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
        _close((int)data);
<END>
    }
}
} 
