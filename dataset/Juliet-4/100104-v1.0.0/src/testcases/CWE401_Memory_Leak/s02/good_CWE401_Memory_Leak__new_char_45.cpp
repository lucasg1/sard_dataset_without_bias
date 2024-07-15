namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
static char * VAR3;
void FUN0()
{
    char * data = VAR2;
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    char VAR4;
    data = &VAR4;
    *data = 'A';
    printHexCharLine(*data);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR3;
    delete data;
}
void FUN3()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    VAR3 = data;
    FUN2();
}
} 
