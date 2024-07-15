static int VAR0 = 0;
void FUN0(wchar_t * data)
{
    if(VAR0)
    {
<START>
        free(data);
<END>
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 1; 
    FUN0(data);
}
