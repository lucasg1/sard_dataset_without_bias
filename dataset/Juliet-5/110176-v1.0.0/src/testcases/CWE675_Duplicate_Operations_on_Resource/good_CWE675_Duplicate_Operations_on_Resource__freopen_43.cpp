namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = fopen("GoodSource_fopen.txt", "w+");
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    FUN0(data);
    fclose(data);
}
void FUN2(FILE * &data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    FUN2(data);
    ; 
}
} 
