void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalTrue)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(globalTrue)
    {
<START>
        fclose(data);
<END>
    }
}
