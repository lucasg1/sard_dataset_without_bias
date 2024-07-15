static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
void FUN1()
{
    if(staticTrue)
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
