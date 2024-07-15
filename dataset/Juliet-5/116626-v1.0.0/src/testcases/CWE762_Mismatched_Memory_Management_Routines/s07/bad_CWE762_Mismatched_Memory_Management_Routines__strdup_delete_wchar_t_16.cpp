namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
        }
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 
