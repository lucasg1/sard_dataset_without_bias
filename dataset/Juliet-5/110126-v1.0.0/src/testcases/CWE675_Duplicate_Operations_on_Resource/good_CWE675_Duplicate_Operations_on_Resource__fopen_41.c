void FUN0(FILE * data)
{
    fclose(data);
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    FUN0(data);
}
void FUN2(FILE * data)
{
    ; 
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    FUN2(data);
}
