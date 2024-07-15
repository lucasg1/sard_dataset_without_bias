static int VAR0 = 0;
void FUN0(FILE * data)
{
    if(VAR0)
    {
<START>
        fclose(data);
<END>
    }
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    VAR0 = 1; 
    FUN0(data);
}
