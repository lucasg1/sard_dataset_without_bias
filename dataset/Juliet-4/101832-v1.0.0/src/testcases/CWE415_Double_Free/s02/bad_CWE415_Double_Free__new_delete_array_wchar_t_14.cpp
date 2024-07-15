namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t[100];
        delete [] data;
    }
    if(globalFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
