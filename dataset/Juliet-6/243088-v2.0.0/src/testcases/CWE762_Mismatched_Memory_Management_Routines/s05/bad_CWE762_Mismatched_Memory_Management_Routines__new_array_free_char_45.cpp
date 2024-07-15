namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
static char * VAR3;
void FUN0()
{
    char * data = VAR1;
<START>
    free(data);
<END>
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    VAR1 = data;
    FUN0();
}
} 
