namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
        delete [] data;
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
