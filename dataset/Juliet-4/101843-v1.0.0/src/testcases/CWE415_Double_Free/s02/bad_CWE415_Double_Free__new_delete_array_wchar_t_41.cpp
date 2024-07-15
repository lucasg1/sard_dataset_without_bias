namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    delete [] data;
    FUN0(data);
}
} 
