void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    {
        wchar_t * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
<START>
        printWcharLine(data[0]);
<END>
    }
}
