void FUN0()
{
    FILE * data;
    data = NULL; 
    while(1)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
        break;
    }
    while(1)
    {
<START>
        fclose(data);
<END>
        break;
    }
}
