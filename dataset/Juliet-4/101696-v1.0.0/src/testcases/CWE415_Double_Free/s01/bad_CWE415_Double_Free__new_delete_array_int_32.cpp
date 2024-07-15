namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        data = new int[100];
        delete [] data;
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
<START>
        delete [] data;
<END>
    }
}
} 
