namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[100];
    delete [] data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
<START>
    delete [] data;
<END>
}
} 
