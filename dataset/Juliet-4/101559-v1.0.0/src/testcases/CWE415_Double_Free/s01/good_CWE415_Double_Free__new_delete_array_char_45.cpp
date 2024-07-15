namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
static char * VAR3;
void FUN0()
{
    char * data = VAR2;
    delete [] data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR3;
    ; 
}
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[100];
    delete [] data;
    VAR3 = data;
    FUN2();
}
} 
