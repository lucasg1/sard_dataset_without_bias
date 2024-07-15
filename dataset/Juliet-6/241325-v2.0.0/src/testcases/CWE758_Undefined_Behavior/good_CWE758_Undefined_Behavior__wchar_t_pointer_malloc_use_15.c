void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
