void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    void (*funcPtr) (FILE *) = FUN0;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    funcPtr(data);
}
void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
