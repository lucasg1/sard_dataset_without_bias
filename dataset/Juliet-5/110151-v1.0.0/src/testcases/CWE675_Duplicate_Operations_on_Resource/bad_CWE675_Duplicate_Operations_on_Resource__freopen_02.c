void FUN0()
{
    FILE * data;
    data = NULL; 
    if(1)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(1)
    {
<START>
        fclose(data);
<END>
    }
}
