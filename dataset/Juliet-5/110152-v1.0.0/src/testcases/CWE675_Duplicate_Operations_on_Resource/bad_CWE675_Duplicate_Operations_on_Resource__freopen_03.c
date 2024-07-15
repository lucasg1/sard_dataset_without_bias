void FUN0()
{
    FILE * data;
    data = NULL; 
    if(5==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(5==5)
    {
<START>
        fclose(data);
<END>
    }
}
