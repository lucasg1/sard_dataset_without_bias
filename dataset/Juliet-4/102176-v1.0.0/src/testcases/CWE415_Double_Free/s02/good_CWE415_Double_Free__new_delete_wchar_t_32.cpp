namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    data = NULL;
    {
        wchar_t * data = *dataPtr1;
        data = new wchar_t;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        delete data;
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
        data = new wchar_t;
        delete data;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        ; 
    }
}
} 
