void FUN0(FILE * * data);
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    FUN0(&data);
}
void FUN2(FILE * * data);
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    FUN2(&data);
}
void FUN0(FILE * * dataPtr)
{
    FILE * data = *dataPtr;
    fclose(data);
}
void FUN2(FILE * * dataPtr)
{
    FILE * data = *dataPtr;
    ; 
}
