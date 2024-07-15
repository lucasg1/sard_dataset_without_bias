namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    TwoIntsClass * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new TwoIntsClass[100];
    }
    for(k = 0; k < 1; k++)
    {
        delete [] data;
    }
}
void FUN1()
{
    int h,j;
    TwoIntsClass * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new TwoIntsClass;
    }
    for(j = 0; j < 1; j++)
    {
        delete data;
    }
}
} 
