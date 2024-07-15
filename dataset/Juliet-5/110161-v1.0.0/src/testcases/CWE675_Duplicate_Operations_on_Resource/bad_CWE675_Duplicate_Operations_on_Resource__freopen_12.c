void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        fclose(data);
<END>
    }
    else
    {
        ; 
    }
}
