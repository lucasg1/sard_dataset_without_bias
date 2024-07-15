namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = _wfopen(L"file.txt", L"w+");
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
<START>
    fclose(data);
<END>
}
} 
