void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    free(data);
    goto sink;
sink:
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
