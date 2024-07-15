namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char[100];
        break;
    }
    while(1)
    {
<START>
        free(data);
<END>
        break;
    }
}
} 
