void FUN0()
{
    FILE * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        fclose(data);
<END>
    }
}
