namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char[100];
    }
    if(1)
    {
<START>
        free(data);
<END>
    }
}
} 
