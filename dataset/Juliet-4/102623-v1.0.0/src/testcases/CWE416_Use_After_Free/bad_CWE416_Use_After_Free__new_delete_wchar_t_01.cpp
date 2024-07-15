namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    delete data;
<START>
    printWcharLine(*data);
<END>
}
} 
