static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
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
