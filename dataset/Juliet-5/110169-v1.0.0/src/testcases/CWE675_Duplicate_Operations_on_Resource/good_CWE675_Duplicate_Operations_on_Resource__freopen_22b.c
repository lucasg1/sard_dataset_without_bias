int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(FILE * data);
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(FILE * data);
void FUN5()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(FILE * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN2(FILE * data)
{
    if(VAR1)
    {
        ; 
    }
}
void FUN4(FILE * data)
{
    if(VAR2)
    {
        fclose(data);
    }
}
