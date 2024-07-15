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
        ; 
        break;
    }
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    while(1)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
        break;
    }
    while(1)
    {
        fclose(data);
        break;
    }
}
