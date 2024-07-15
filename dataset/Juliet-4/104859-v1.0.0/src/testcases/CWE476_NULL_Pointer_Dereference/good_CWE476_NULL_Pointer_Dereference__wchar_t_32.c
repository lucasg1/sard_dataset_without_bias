void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    {
        wchar_t * data = *dataPtr1;
        data = L"Good";
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        printWcharLine(data[0]);
    }
}
void FUN1()
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
        if (data != NULL)
        {
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
