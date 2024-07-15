void FUN0()
{
    int i,j;
    FILE * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        fclose(data);
<END>
    }
}
