static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * data;
            wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
            if (pointer == NULL) {exit(-1);}
            data = L"string";
            *pointer = data; 
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
            free(pointer);
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        {
            wchar_t * data;
            wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
            if (pointer == NULL) {exit(-1);}
            data = L"string";
            *pointer = data; 
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
            free(pointer);
        }
    }
}
