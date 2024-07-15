FILE * FUN0(FILE * data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    return data;
}
FILE * FUN0(FILE * data);
void FUN2()
{
    FILE * data;
    data = NULL; 
    data = FUN0(data);
<START>
    fclose(data);
<END>
}
