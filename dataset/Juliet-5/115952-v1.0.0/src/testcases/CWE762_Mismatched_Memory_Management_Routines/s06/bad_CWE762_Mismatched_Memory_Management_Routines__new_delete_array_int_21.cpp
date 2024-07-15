namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(int * data)
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
    int * data;
    data = NULL;
    data = new int;
    VAR1 = 1; 
    FUN0(data);
}
} 
