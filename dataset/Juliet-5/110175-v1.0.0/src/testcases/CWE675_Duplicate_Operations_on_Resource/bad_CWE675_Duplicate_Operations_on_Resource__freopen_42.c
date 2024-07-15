static FILE * FUN0(FILE * data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    return data;
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = FUN0(data);
<START>
    fclose(data);
<END>
}
