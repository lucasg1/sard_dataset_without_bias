namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = new char[100];
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
} 
