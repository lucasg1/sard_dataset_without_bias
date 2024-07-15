void FUN0()
{
    FILE * data;
    data = NULL; 
    if(GLOBAL_CONST_FIVE==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        fclose(data);
<END>
    }
}
