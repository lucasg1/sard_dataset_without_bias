namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t;
    *data = L'A';
    delete data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
<START>
    printWcharLine(*data);
<END>
}
} 
