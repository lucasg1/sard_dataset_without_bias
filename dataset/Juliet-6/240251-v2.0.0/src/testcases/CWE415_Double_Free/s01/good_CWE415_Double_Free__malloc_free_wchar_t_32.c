void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = NULL;
    {
        wchar_t * data = *dataPtr1;
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = NULL;
    {
        wchar_t * data = *dataPtr1;
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        free(data);
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        ; 
    }
}
