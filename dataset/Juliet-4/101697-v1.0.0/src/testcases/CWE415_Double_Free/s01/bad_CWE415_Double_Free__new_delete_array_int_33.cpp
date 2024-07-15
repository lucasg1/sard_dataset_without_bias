namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int[100];
    delete [] data;
    {
        int * data = dataRef;
<START>
        delete [] data;
<END>
    }
}
} 
