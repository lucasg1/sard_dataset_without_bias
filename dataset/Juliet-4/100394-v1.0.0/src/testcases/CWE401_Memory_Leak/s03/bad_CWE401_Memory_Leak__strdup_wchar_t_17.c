void FUN0()
{
    int i,j;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
            printWLine(data);
        }
    }
    for(j = 0; j < 1; j++)
    {
<START>
<END>
        ; 
    }
}
