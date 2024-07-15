void FUN0()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
<START>
        fclose(data);
<END>
    }
}
