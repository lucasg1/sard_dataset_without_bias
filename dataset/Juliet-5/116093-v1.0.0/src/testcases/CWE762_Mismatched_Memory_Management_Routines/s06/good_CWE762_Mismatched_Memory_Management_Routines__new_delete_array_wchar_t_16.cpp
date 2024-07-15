namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t;
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[100];
        break;
    }
    while(1)
    {
        delete [] data;
        break;
    }
}
} 
