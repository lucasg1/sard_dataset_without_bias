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
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
} 
