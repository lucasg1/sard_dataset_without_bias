void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
