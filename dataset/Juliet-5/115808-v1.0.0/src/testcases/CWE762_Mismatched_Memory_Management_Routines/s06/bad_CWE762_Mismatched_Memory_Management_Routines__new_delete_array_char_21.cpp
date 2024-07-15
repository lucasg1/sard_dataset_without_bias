namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(char * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    VAR1 = 1; 
    FUN0(data);
}
} 
