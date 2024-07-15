void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalFive==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(globalFive==5)
    {
<START>
        fclose(data);
<END>
    }
}
