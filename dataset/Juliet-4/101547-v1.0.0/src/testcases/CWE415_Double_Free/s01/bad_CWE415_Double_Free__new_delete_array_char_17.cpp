namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new char[100];
        delete [] data;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        delete [] data;
<END>
    }
}
} 
