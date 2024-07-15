namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int[100];
        delete [] data;
    }
    if(globalFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
