void FUN0()
{
    int k;
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
