void FUN0()
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
