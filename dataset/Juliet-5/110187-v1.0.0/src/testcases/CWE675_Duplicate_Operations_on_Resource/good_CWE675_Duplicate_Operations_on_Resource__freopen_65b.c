void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    void (*funcPtr) (FILE *) = FUN0;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    funcPtr(data);
}
void FUN2(FILE * data);
void FUN3()
{
    FILE * data;
    void (*funcPtr) (FILE *) = FUN2;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    funcPtr(data);
}
void FUN0(FILE * data)
{
    fclose(data);
}
void FUN2(FILE * data)
{
    ; 
}
