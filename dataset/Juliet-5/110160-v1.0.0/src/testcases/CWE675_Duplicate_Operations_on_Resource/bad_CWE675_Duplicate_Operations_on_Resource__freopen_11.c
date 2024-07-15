void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrue())
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(globalReturnsTrue())
    {
<START>
        fclose(data);
<END>
    }
}
