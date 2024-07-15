namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = new char;
        delete data;
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 
