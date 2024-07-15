namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
static char * VAR3;
void FUN0()
{
    char * data = VAR1;
<START>
    delete data;
<END>
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    delete data;
    VAR1 = data;
    FUN0();
}
} 
