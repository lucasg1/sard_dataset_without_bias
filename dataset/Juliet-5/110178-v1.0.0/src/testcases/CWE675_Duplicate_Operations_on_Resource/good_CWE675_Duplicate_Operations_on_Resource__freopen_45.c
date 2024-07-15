static FILE * VAR0;
static FILE * VAR1;
static FILE * VAR2;
void FUN0()
{
    FILE * data = VAR1;
    fclose(data);
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    FILE * data = VAR2;
    ; 
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    VAR2 = data;
    FUN2();
}
