namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    goto sink;
sink:
    delete data;
}
} 
