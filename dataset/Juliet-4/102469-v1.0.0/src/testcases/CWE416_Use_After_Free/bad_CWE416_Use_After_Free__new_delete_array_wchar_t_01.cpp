namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
<START>
    printWLine(data);
<END>
}
} 
