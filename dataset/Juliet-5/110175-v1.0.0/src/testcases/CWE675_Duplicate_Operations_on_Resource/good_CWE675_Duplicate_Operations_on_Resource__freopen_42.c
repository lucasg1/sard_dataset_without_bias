static FILE * FUN0(FILE * data)
{
    data = fopen("GoodSource_fopen.txt", "w+");
    return data;
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = FUN0(data);
    fclose(data);
}
static FILE * FUN2(FILE * data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    return data;
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = FUN2(data);
    ; 
}
