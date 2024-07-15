namespace NAMESPACE0
{
typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;
void FUN0()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    data = new wchar_t[100];
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        free(data);
    }
}
} 
