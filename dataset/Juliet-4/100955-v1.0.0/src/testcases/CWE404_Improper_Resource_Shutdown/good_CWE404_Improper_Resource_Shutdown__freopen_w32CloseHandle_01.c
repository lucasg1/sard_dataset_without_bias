void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if (data != NULL)
    {
        fclose(data);
    }
}
