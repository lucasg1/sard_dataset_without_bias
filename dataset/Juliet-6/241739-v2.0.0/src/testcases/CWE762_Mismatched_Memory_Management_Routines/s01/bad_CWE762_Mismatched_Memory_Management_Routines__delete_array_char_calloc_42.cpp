namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
