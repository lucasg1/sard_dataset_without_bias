namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    delete [] data;
<START>
    delete [] data;
<END>
}
} 
