namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = new char;
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
