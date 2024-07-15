void FUN0()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
        ; 
    }
}
