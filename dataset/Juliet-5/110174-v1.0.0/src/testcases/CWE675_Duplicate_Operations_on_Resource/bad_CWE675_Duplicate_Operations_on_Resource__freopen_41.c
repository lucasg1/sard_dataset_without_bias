void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    FUN0(data);
}
