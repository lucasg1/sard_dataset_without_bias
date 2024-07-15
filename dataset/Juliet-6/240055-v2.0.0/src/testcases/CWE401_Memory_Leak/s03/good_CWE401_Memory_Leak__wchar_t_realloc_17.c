void FUN0()
{
    int i,k;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
void FUN1()
{
    int h,j;
    wchar_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"A String");
        printWLine(data);
    }
    for(j = 0; j < 1; j++)
    {
        ; 
    }
}
