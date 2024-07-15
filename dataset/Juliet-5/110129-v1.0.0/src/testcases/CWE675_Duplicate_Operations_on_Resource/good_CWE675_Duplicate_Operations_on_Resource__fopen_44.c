void FUN0(FILE * data)
{
    fclose(data);
}
void FUN1()
{
    FILE * data;
    void (*funcPtr) (FILE *) = FUN0;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    funcPtr(data);
}
void FUN2(FILE * data)
{
    ; 
}
void FUN3()
{
    FILE * data;
    void (*funcPtr) (FILE *) = FUN2;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    funcPtr(data);
}
