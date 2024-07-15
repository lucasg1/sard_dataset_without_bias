void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN2(FILE * data);
void FUN3(FILE * data)
{
    FUN2(data);
}
void FUN4(FILE * data);
void FUN0(FILE * data)
{
    FUN4(data);
}
void FUN6(FILE * data);
void FUN2(FILE * data)
{
    FUN6(data);
}
void FUN8(FILE * data);
void FUN4(FILE * data)
{
    FUN8(data);
}
void FUN10(FILE * data);
void FUN6(FILE * data)
{
    FUN10(data);
}
void FUN1(FILE * data);
void FUN13()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    FUN1(data);
}
void FUN3(FILE * data);
void FUN15()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    FUN3(data);
}
void FUN8(FILE * data)
{
    fclose(data);
}
void FUN10(FILE * data)
{
    ; 
}
