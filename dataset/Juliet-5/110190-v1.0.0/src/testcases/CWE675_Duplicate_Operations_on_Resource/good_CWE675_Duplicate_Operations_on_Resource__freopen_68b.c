FILE * VAR0;
FILE * VAR1;
FILE * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    VAR2 = data;
    FUN1();
}
extern FILE * VAR0;
extern FILE * VAR1;
extern FILE * VAR2;
void FUN0()
{
    FILE * data = VAR1;
    fclose(data);
}
void FUN1()
{
    FILE * data = VAR2;
    ; 
}
