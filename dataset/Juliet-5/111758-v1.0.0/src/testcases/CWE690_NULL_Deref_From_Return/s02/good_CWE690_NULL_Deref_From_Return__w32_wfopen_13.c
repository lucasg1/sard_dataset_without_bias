void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    if(GLOBAL_CONST_FIVE==5)
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
